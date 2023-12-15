color:
- backgorund: #FBFBFD
- card: #FFFFFF
- searchbar: rgba(74, 101, 196, 0.3)
- text: #090B15
- gray text: #9C9C9C
- tag: rgba(74, 101, 196, 0.3)

border radius:
- border radius searchbar: 8px
- border radius card: 16px
- border radius image: 8px
- padding card: 17px

font size:
- font size gray text: 14px
- font site title: 20px bold
- font size episode: 16px
- font size tag: 16px

card shadow:
```css
box-shadow:  10px 10px 20px rgba(183, 183, 183, 0.25),
             -10px -10px 20px rgba(176, 176, 176, 0.25);
```

max width container box:
- max width desktop: 1200px
- max width tablet: 720px
- max width smatphone: 360px (padding left right 10px)


font:
```css
@import url('https://fonts.googleapis.com/css2?family=Inter:wght@400;700&display=swap');

* {
    font-family: 'Inter', sans-serif;
}
```

api documentation: https://docs.api.jikan.moe/
(advise: javascript fetch or xmlhhtpreqeuest)


---
Challenge: 
recreate, taking as a starting point, the mockup of the web app capable of showing the anime present in the API. The application must also be able to search and show the searched anime if present, otherwise show that there is no result.

good luck broder!
