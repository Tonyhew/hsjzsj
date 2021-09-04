
$(document).ready(function () {

  var o = $(".t_i_box")

  $(".chiefLeader").on("click", function () {

    layer.open({
      type: 1,
      area: ['95%'],
      title: '',
      resize: false,
      shadeClose: true, //点击遮罩关闭
      content: o
    })

  })

  var leaderm = $(".team_o_item")
  var temaDetail = $(".team_c")

  leaderm.on('click', function () {
    var _index = $(this).attr('data-id');
    temaDetail.each(function (index, item) {
      var id = $(item).attr('data-id');
      if (Number(_index) === Number(id)) {
        layer.open({
          type: 1,
          area: ['95%'],
          title: '',
          resize: false,
          shadeClose: true, //点击遮罩关闭
          content: $(item)
        })
        document.body.onmousewheel = function () {
          return false;
        }

      }
    })
  })

})

















