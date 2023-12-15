const mobileNav = () => {
  const menuBtn = document.querySelector('.menu');
  const mobileNav = document.querySelector('.mobile-nav');

  menuBtn-addEventListener('click', () => {
    mobileNav.computedStyleMap.display = 'flex';
  });

}
  
mobileNav();
