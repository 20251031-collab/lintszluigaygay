/* style.css */
* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

body {
  font-family: "Noto Sans TC", "Microsoft JhengHei", sans-serif;
  color: #2b2b3c;
  background: #fdf8ff;
  line-height: 1.6;
}

/* 導覽列 */
.navbar {
  display: flex;
  justify-content: space-between;
  align-items: center;
  padding: 1rem 2rem;
  background: linear-gradient(90deg, #ff8ac1, #a78bfa);
  position: sticky;
  top: 0;
  z-index: 100;
}

.logo {
  font-size: 1.6rem;
  font-weight: 800;
  color: #fff;
  letter-spacing: 1px;
}

.logo span {
  color: #ffe066;
}

.navbar nav a {
  color: #fff;
  text-decoration: none;
  margin-left: 1.8rem;
  font-weight: 600;
  padding-bottom: 4px;
  transition: border-color 0.3s;
  border-bottom: 2px solid transparent;
}

.navbar nav a:hover,
.navbar nav a.active {
  border-bottom-color: #ffe066;
}

/* 首頁 hero */
.hero {
  display: flex;
  flex-wrap: wrap;
  align-items: center;
  justify-content: center;
  gap: 3rem;
  padding: 3rem 2rem;
}

.hero-text {
  max-width: 420px;
}

.hero-text h1 {
  font-size: 2.4rem;
  color: #7c3aed;
  margin-bottom: 1rem;
}

.hero-text p {
  margin-bottom: 1.5rem;
  color: #555;
}

.btn {
  display: inline-block;
  background: linear-gradient(90deg, #ff8ac1, #a78bfa);
  color: #fff;
  padding: 0.7rem 1.6rem;
  border-radius: 30px;
  border: none;
  cursor: pointer;
  font-size: 1rem;
  font-weight: 700;
  text-decoration: none;
  transition: transform 0.2s, box-shadow 0.2s;
}

.btn:hover {
  transform: translateY(-2px);
  box-shadow: 0 8px 18px rgba(167, 139, 250, 0.4);
}

.btn-outline {
  background: transparent;
  border: 2px solid #a78bfa;
  color: #7c3aed;
  margin-left: 0.6rem;
}

.btn-outline:hover {
  background: #a78bfa;
  color: #fff;
}

/* 輪播 */
.carousel {
  position: relative;
  width: 600px;
  max-width: 100%;
  border-radius: 18px;
  overflow: hidden;
  box-shadow: 0 12px 30px rgba(124, 58, 237, 0.25);
}

.slides {
  position: relative;
  height: 400px;
}

.slide {
  position: absolute;
  inset: 0;
  width: 100%;
  height: 100%;
  object-fit: cover;
  opacity: 0;
  transition: opacity 0.6s ease;
}

.slide.active {
  opacity: 1;
}

.carousel-btn {
  position: absolute;
  top: 50%;
  transform: translateY(-50%);
  background: rgba(255, 255, 255, 0.75);
  border: none;
  font-size: 1.4rem;
  width: 40px;
  height: 40px;
  border-radius: 50%;
  cursor: pointer;
  color: #7c3aed;
  z-index: 10;
  transition: background 0.3s;
}

.carousel-btn:hover {
  background: #fff;
}

.prev { left: 12px; }
.next { right: 12px; }

.dots {
  position: absolute;
  bottom: 12px;
  left: 50%;
  transform: translateX(-50%);
  display: flex;
  gap: 8px;
}

.dot {
  width: 10px;
  height: 10px;
  border-radius: 50%;
  background: rgba(255, 255, 255, 0.6);
  cursor: pointer;
  transition: background 0.3s;
}

.dot.active {
  background: #ffe066;
}

/* 特色卡片 */
.features {
  display: flex;
  flex-wrap: wrap;
  justify-content: center;
  gap: 1.5rem;
  padding: 2rem;
}

.feature-card {
  background: #fff;
  border-radius: 16px;
  padding: 1.8rem;
  width: 260px;
  text-align: center;
  box-shadow: 0 6px 18px rgba(167, 139, 250, 0.15);
  transition: transform 0.3s;
}

.feature-card:hover {
  transform: translateY(-6px);
}

.feature-card h3 {
  color: #7c3aed;
  margin-bottom: 0.6rem;
}

/* 頁面標題 */
.page-title {
  text-align: center;
  padding: 3rem 1rem 1.5rem;
}

.page-title h1 {
  font-size: 2.2rem;
  color: #7c3aed;
}

.page-title p {
  color: #777;
}

/* 產品列表 */
.product-grid {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(240px, 1fr));
  gap: 1.8rem;
  padding: 1rem 2rem 3rem;
  max-width: 1100px;
  margin: 0 auto;
}

.product-card {
  background: #fff;
  border-radius: 16px;
  overflow: hidden;
  box-shadow: 0 6px 18px rgba(167, 139, 250, 0.15);
  transition: transform 0.3s, box-shadow 0.3s;
}

.product-card:hover {
  transform: translateY(-6px);
  box-shadow: 0 14px 28px rgba(167, 139, 250, 0.3);
}

.product-card img {
  width: 100%;
  height: 180px;
  object-fit: cover;
}

.product-card h3 {
  padding: 0.8rem 1rem 0.2rem;
  color: #4c1d95;
}

.product-card p {
  padding: 0 1rem;
  font-size: 0.92rem;
  color: #666;
}

.price {
  display: block;
  padding: 0.6rem 1rem 1rem;
  font-weight: 800;
  color: #ff5fa2;
}

/* 聯絡頁 */
.contact-section {
  display: flex;
  flex-wrap: wrap;
  gap: 2.5rem;
  justify-content: center;
  padding: 1rem 2rem 3rem;
}

.contact-form {
  background: #fff;
  border-radius: 16px;
  padding: 2rem;
  width: 420px;
  max-width: 100%;
  box-shadow: 0 6px 18px rgba(167, 139, 250, 0.15);
}

.contact-form label {
  display: block;
  margin-top: 1rem;
  font-weight: 600;
  color: #4c1d95;
}

.contact-form input,
.contact-form textarea {
  width: 100%;
  padding: 0.6rem 0.8rem;
  margin-top: 0.3rem;
  border: 1.5px solid #d8c7f5;
  border-radius: 8px;
  font-family: inherit;
  font-size: 1rem;
  outline: none;
  transition: border-color 0.3s;
}

.contact-form input:focus,
.contact-form textarea:focus {
  border-color: #a78bfa;
}

.contact-form .btn {
  margin-top: 1.2rem;
  width: 100%;
}

.form-msg {
  margin-top: 0.8rem;
  color: #16a34a;
  font-weight: 600;
  text-align: center;
}

.contact-info {
  background: linear-gradient(135deg, #ff8ac1, #a78bfa);
  color: #fff;
  border-radius: 16px;
  padding: 2rem;
  width: 320px;
  max-width: 100%;
  height: fit-content;
}

.contact-info h3 {
  margin-bottom: 1rem;
  color: #ffe066;
}

.contact-info p {
  margin-bottom: 0.6rem;
}

/* 彈窗 */
.modal {
  display: none;
  position: fixed;
  inset: 0;
  background: rgba(43, 43, 60, 0.55);
  z-index: 200;
  justify-content: center;
  align-items: center;
}

.modal.show {
  display: flex;
}

.modal-content {
  background: #fff;
  border-radius: 18px;
  padding: 2rem 2.4rem;
  text-align: center;
  max-width: 360px;
  width: 90%;
  position: relative;
  animation: popIn 0.3s ease;
}

@keyframes popIn {
  from { transform: scale(0.85); opacity: 0; }
  to { transform: scale(1); opacity: 1; }
}

.modal-content h2 {
  color: #7c3aed;
  margin-bottom: 0.8rem;
}

.modal-content strong {
  color: #ff5fa2;
  font-size: 1.2rem;
}

.modal-content .small {
  font-size: 0.82rem;
  color: #888;
  margin-top: 0.6rem;
}

.close {
  position: absolute;
  top: 10px;
  right: 16px;
  font-size: 1.6rem;
  cursor: pointer;
  color: #aaa;
  transition: color 0.3s;
}

.close:hover {
  color: #ff5fa2;
}

/* footer */
footer {
  text-align: center;
  padding: 1.5rem;
  background: #2b2b3c;
  color: #ccc;
  font-size: 0.9rem;
}

@media (max-width: 640px) {
  .navbar {
    flex-direction: column;
    gap: 0.6rem;
    padding: 1rem;
  }
  .navbar nav a {
    margin: 0 0.8rem;
  }
  .slides { height: 260px; }
  .hero-text h1 { font-size: 1.8rem; }
}
