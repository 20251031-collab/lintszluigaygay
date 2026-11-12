// script.js
document.addEventListener('DOMContentLoaded', () => {
  /* ---------- 圖片輪播 ---------- */
  const slides = document.querySelectorAll('.slide');
  const prevBtn = document.querySelector('.carousel-btn.prev');
  const nextBtn = document.querySelector('.carousel-btn.next');
  const dotsContainer = document.querySelector('.dots');

  if (slides.length > 0) {
    let current = 0;
    let timer = null;

    // 建立圓點
    slides.forEach((_, i) => {
      const dot = document.createElement('span');
      dot.classList.add('dot');
      if (i === 0) dot.classList.add('active');
      dot.addEventListener('click', () => goTo(i));
      dotsContainer.appendChild(dot);
    });

    const dots = document.querySelectorAll('.dot');

    function goTo(index) {
      slides[current].classList.remove('active');
      dots[current].classList.remove('active');
      current = (index + slides.length) % slides.length;
      slides[current].classList.add('active');
      dots[current].classList.add('active');
      resetTimer();
    }

    function nextSlide() { goTo(current + 1); }
    function prevSlide() { goTo(current - 1); }

    function resetTimer() {
      clearInterval(timer);
      timer = setInterval(nextSlide, 4000);
    }

    if (nextBtn) nextBtn.addEventListener('click', nextSlide);
    if (prevBtn) prevBtn.addEventListener('click', prevSlide);

    resetTimer();
  }

  /* ---------- 優惠彈窗 ---------- */
  const modal = document.getElementById('promoModal');
  const promoBtn = document.getElementById('promoBtn');
  const closeBtn = document.querySelector('.close');

  if (modal && promoBtn) {
    promoBtn.addEventListener('click', () => {
      modal.classList.add('show');
    });
  }

  if (modal && closeBtn) {
    closeBtn.addEventListener('click', () => {
      modal.classList.remove('show');
    });

    modal.addEventListener('click', (e) => {
      if (e.target === modal) {
        modal.classList.remove('show');
      }
    });
  }

  /* ---------- 聯絡表單 ---------- */
  const contactForm = document.getElementById('contactForm');
  const formMsg = document.getElementById('formMsg');

  if (contactForm) {
    contactForm.addEventListener('submit', (e) => {
      e.preventDefault();
      const name = document.getElementById('name').value.trim();
      formMsg.textContent = `${name}，感謝您的訊息！我們會尽快回覆您。`;
      contactForm.reset();
    });
  }
});