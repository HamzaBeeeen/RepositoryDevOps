const swiper = new Swiper(".swiper", {
    allowTouchMove: false,
});

const gotoSlide = idex =>
    swiper.slideTo(index);

const restart = () => {
    const buttons = document.querySelectorAll("button[type=button]");
    buttons.forEach((button) => {
        button.disabled = true;

});

const inputs = document.querySelectorAll("input");
inputs.forEach((input) => {
    input.value = "";

});

gotoSlide(0);

};
const checkValid = event => {
    event.target.nextElementSibling.disabled = !event.target.value.length;
};