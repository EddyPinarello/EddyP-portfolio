function displayAnime(list){
  
  grid.innerHTML=null;

      for(const anime of list) {
        grid.innerHTML += `
        <div class="card">
            <img src="${anime.images.jpg.image_url}" class="anime-cover" alt="cover"/>
            <ul class="year-score">
                <li>${anime.year}</li>
                <li>${anime.score}</li>
            </ul>
            <h1 class="animeTitle"> ${anime.title}</h1>
            <p class="episodes">Episodes - ${anime.episodes}</p>
            <ul class="tags">
            ${anime.genres.map(e => `<li>${e.name}</li>`).join('')}
            </ul>
        </div>`;
      }
}


let grid = document.querySelector('#grid');

function main(){
  
  
  fetch('https://api.jikan.moe/v4/anime')
  .then(( data) => {
    return data.json();
  }).then ( (data) => {
    
    
    displayAnime(data.data)
    const searchBar= document.getElementById('searchbar');

    searchBar.addEventListener('keyup', (e)=>{
      const searchString = e.target.value;
      
      const filteredAnime = data.data.filter((anime)=> {

        return anime.title.toLowerCase().includes(searchString.toLowerCase());

      })
      displayAnime(filteredAnime);
      
    })
  })
}

main()

  


