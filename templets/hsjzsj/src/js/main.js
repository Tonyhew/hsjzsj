jQuery(function () {
  // 视频控制设置为不显示
  $(".banner_video").controls = false

  // 首页banner
  var bannerSwiper = new Swiper(".banner_container", {
    autoplay: true,
    loop: true, // 循环模式选项
    autoHeight: true,
    // 如果需要分页器
    pagination: {
      el: '.swiper-pagination',
    },
    // 如果需要前进后退按钮
    navigation: {
      nextEl: '.swiper-button-next',
      prevEl: '.swiper-button-prev',
    },
    on: {
      init: function () {
        swiperAnimateCache(this); //隐藏动画元素 
        swiperAnimate(this); //初始化完成开始动画
      },
      slideChangeTransitionEnd: function () {
        swiperAnimate(this); //每个slide切换结束时也运行当前slide动画
        //this.slides.eq(this.activeIndex).find('.ani').removeClass('ani'); 动画只展现一次，去除ani类名
        if (this.slides.eq(this.activeIndex)[0].dataset.selectType === 'picture') {
          $(".banner_video").css("display", "none");
          $(".banner_img").css("display", "block");
        } else if (this.slides.eq(this.activeIndex)[0].dataset.selectType === 'video') {
          $(".banner_video").css("display", "block");
          $(".banner_img").css("display", "none");
        }
      }
    }

  });

  var e = $('.picture-grid-box')
  for (let i = 0; i < e.length; i++) {
    var picshow = e[i].getAttribute('data-picshowhow')
    var pictype = e[i].getAttribute('data-pictype')

    if (picshow == 'none' && pictype == '1') {

    } else if (picshow == 'row' && pictype == '2') {
      e[i].classList.add('grid-span')
    } else if (picshow == 'column' && pictype == '3') {
      e[i].classList.add('grid-span-2')
    }
  }

});