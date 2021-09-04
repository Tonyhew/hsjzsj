$(function () {

  // 导航active动画效果控制
  $(".hs_nav_main .hs_navList_item a").each(function () {
    $this = $(this);
    $str = window.location.href.indexOf($this[0].href);

    if ($str >= 0) {
      $(".hs_navList_item span").addClass("nav_active");
      $this.parent().addClass("hs_navmon");
    }
  });
  $(".hs_navList_item").hover(function () {
    if ($(this).find('p').size() > 0) {
      $('.f1_cont').stop().animate({
        height: '50px'
      }, 200)
      $(this).find('p').stop().animate({
        height: '50px'
      }, 200);
    }
  }, function () {
    $('.f1_cont').stop().animate({
      height: '0'
    }, 200)
    $(this).find('p').stop().animate({
      height: '0'
    }, 200);
  });
  $(".hs_navList_item:eq(0)").hover(function () {
    $('.f1_cont').stop().animate({
      height: '0'
    }, 200)
  });


  // 首页访客留言表单添加时间自动获取
  window.onload = function () {
    var nowDate = new Date();
    var str = nowDate.getFullYear() + "-" + (nowDate.getMonth() + 1) + "-" + nowDate.getDate() + " " + nowDate.getHours() +
      ":" + nowDate.getMinutes() + ":" + nowDate.getSeconds();
    var add_time = document.getElementById("add_time")
    if (!add_time) {
      return false;
    } else {
      add_time.value = str;
    }

  };

  // 首页表单ajax提交
  $(".form_button").click(function () {
    let message = document.getElementById("message");
    let name = document.getElementById("name");
    let company = document.getElementById("company");
    let contact = document.getElementById("contact");
    let add_time = document.getElementById("add_time");
    var dataString = 'message=' + message.value +
      '&name=' + name.value +
      '&company=' + company.value +
      '&contact=' + contact.value +
      '&add_time=' + add_time.value +
      '&action=post' +
      '&diyid=1&do=2&dede_fields=message,multitext;name,text;company,text;contact,text;add_time,text&dede_fieldshash=41a40dc739c3b4b349961e424eb26f47';

    phoneFun(contact.value);
    //判断是否为手机号的正则表达式
    function phoneFun(phones) {
      var myreg = /^[1][3,4,5,7,8,9][0-9]{9}$/;
      if (!myreg.test(phones)) {
        layer.msg("请填写正确的手机号")
        return false;
      } else {
        if (message.value === "") {
          layer.msg("留言不能为空", { icon: 2 });
        } else if (name.value === "") {
          layer.msg("姓名不能为空", { icon: 2 });
        } else if (company.value === "") {
          layer.msg("公司不能为空", { icon: 2 })
        } else if (contact.value === "") {
          layer.msg("联系方式不能为空", { icon: 2 })
        } else {
          $.ajax({
            type: 'post',
            url: "/plus/diy.php", //提交到后台文件
            data: dataString, //传值
            success: function (data) {
              document.getElementById("message_post").reset();
              layer.msg("提交成功！", { icon: 1 });
            }
          });
        }
        return true;
      }
    }
  });

  // footer 二维码
  $(".f_wechat").hover(function () {
    $(".QRcode").show(500);
  }, function () {
    $(".QRcode").hide(500);
  });


  function browserRedirect() {
    var sUserAgent = navigator.userAgent.toLowerCase();
    var bIsIpad = sUserAgent.match(/ipad/i) == "ipad";
    var bIsIphoneOs = sUserAgent.match(/iphone os/i) == "iphone os";
    var bIsMidp = sUserAgent.match(/midp/i) == "midp";
    var bIsUc7 = sUserAgent.match(/rv:1.2.3.4/i) == "rv:1.2.3.4";
    var bIsUc = sUserAgent.match(/ucweb/i) == "ucweb";
    var bIsAndroid = sUserAgent.match(/android/i) == "android";
    var bIsCE = sUserAgent.match(/windows ce/i) == "windows ce";
    var bIsWM = sUserAgent.match(/windows mobile/i) == "windows mobile";
    console.log("您的浏览设备为：");
    if (bIsIpad || bIsIphoneOs || bIsMidp || bIsUc7 || bIsUc || bIsAndroid || bIsCE || bIsWM) {

    } else {
      // 项目案例及媒体新闻右侧
      var aa = $('.project_article_main').length ? $('.project_article_main').offset().top : null;
      var bb = $('.article_containerp:last-child').length ? $('.article_container>p:last-child').offset().top : null;

      function ys_a() {
        $('.project_a_right').removeClass('project_a_rightOn');

      }
      $(window).scroll(function () {
        var HI = $(window).scrollTop();

        if ($('.project_a_left').length && HI > $('.project_a_left').offset().top - 90) {
          $('.project_a_right').addClass('project_a_rightOn');
          if ((jQuery(window).scrollTop() > (jQuery('.footer_main').offset().top + jQuery('.footer_main').outerHeight())) || ((jQuery(window).scrollTop() + jQuery(window).height()) < jQuery('.footer_main').offset().top)) {

            $('.project_a_right').removeClass('project_a_rightOn_footer');
          }
          else {
            $('.project_a_right').addClass('project_a_rightOn_footer');

            var ycxs = setTimeout(ys_a(), 3200);
          }
        } else {
          var ycxs1 = setTimeout(ys_a(), 2200);
        }
      });
    }
  }

  browserRedirect();



  $('.m_menu').click(function (e) {
    $(".m_right").toggleClass("view");

  })


})