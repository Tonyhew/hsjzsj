
var mapOpts = {
  showIndoorMap: false, // 是否在有矢量底图的时候自动展示室内地图，PC默认true,移动端默认false
  resizeEnable: true, //是否监控地图容器尺寸变化，默认值为false
  dragEnable: true, // 地图是否可通过鼠标拖拽平移，默认为true
  keyboardEnable: false, //地图是否可通过键盘控制，默认为true
  doubleClickZoom: false, // 地图是否可通过双击鼠标放大地图，默认为true
  zoomEnable: true, //地图是否可缩放，默认值为true
  rotateEnable: false, // 地图是否可旋转，3D视图默认为true，2D视图默认false
  center: [113.643036, 34.736732],
  zoom: 20
}

//地图初始化时，在地图上添加一个marker标记,鼠标点击marker可弹出自定义的信息窗体
var map = new AMap.Map("contact_map_wrapper", mapOpts);

map.plugin([
  'AMap.ToolBar',
], function () {
  // 在图面添加工具条控件，工具条控件集成了缩放、平移、定位等功能按钮在内的组合控件
  map.addControl(new AMap.ToolBar());
});


// 创建一个 Marker 实例：
var marker = new AMap.Marker({
  position: new AMap.LngLat(113.643036, 34.736732),   // 经纬度对象，也可以是经纬度构成的一维数组[116.39, 39.9]
  title: '河南瀚森建筑设计'
});

// 将创建的点标记添加到已有的地图实例：
map.add(marker);

marker.on('click', function () {
  advancedInfoWindow.open(map, position);
})

var advancedInfoWindow,
  position;
map.plugin(['AMap.AdvancedInfoWindow'], function () {

  var detail = '<div class="infobox"><div class="dia-colse"></div><div class="d1"><span>1</span>'
    + '河南瀚森建筑设计有限公司' +
    '</div><div class="md-local">' +
    '河南省郑州市二七区陇海中路50号惠丰大厦3楼'
    + '</div><div class="md-tel">' + '1309465880'
    + '</div><div class="dqlocal"><input class="text" type="text" placeholder="请输入您所在的位置"/><div class="closetext" onclick="clearInput()"></div></div><div class="local"><input class="tet" type="text" readonly="readonly" value="'
    + '河南省郑州市二七区陇海中路50号惠丰大厦3楼'
    + '" /><input type="submit" class="gobtn" value="确定" onclick="searchRoute()" /><input type="submit" class="gobtn" value="清除路线" onclick="clearRoute()" /></div></div>';
  var position = new AMap.LngLat(113.643036, 34.736732);
  advancedInfoWindow = new AMap.AdvancedInfoWindow({
    content: detail,
    asOrigin: false,
    asDestination: false,
    placeSearch: false,
    offset: new AMap.Pixel(0, -30),
  });

  // 打开信息窗体
  advancedInfoWindow.open(map, position);
});

advancedInfoWindow.close(function () {
  advancedInfoWindow.open(map, position);
})

if (advancedInfoWindow.getIsOpen() == false) {
  advancedInfoWindow.open(map, position);
} else {
  advancedInfoWindow.open(map, position);
}

function clearInput() {
  $('.infobox .dqlocal input').val('');
}

var transfer
function searchRoute() {
  var addr = $('.infobox .local .tet').val();
  var start = $('.infobox .dqlocal .text').val();

  if (start == "" || start == "输入我的地址") {
    alert('请填写出发地点！');
    $('.infobox .dqlocal .text').focus();
  } else {
    var transOptions = {
      map: map,
      panel: 'panel',
    };

    AMap.plugin(['AMap.Transfer', 'AMap.CitySearch'], function () {
      var citySearch = new AMap.CitySearch()
      citySearch.getLocalCity(function (status, result) {
        if (status === 'complete' && result.info === 'OK') {
          var city = result.city
          //构造公交换乘类
          transfer = new AMap.Transfer(transOptions);
          //根据起、终点名称查询公交换乘路线
          transfer.search([
            { keyword: start, city: city },
            //第一个元素city缺省时取transOptions的city属性
            { keyword: addr, city: '河南' }
            //第二个元素city缺省时取transOptions的cityd属性
          ], function (status, result) {
            // result即是对应的公交路线数据信息，相关数据结构文档请参考  https://lbs.amap.com/api/javascript-api/reference/route-search#m_TransferResult
            if (status === 'complete') {
              console.log('绘制公交路线完成')
              console.log(result)
            } else {
              console.log('公交路线数据查询失败' + result)
            }
          });
        }
      })
    })

  }
}

function clearRoute() {
  transfer.clear()
}

$('.infobox .dia-colse').bind('click', function () {
  $('.BMap_pop').hide();
});


$('.responsibility').hide();

$('.h').click(function () {
  var c = $(this).hasClass('b');
  if (c) {
    $('.joinUs_table dd').find('.responsibility').slideUp(300).find('.hsp').removeClass('hhsp');
    $('.joinUs_table dd').find('.hsp').removeClass('hhsp');
    $(this).addClass('h').removeClass('b');
    return false;
  }

  $(this).siblings('dd').addClass('h').removeClass('b');
  $(this).removeClass('h').addClass('b');
  $(this).siblings('dd').find('.responsibility').slideUp(300);
  $(this).siblings('dd').find('.hsp').removeClass('hhsp');
  $(this).find('.responsibility').slideDown(300);
  $(this).find('.hsp').addClass('hhsp');
})

$(".up_resume").click(function (e) {
  var content = $(".box_wrapper")
  layer.open({
    type: 1,
    area: ['665px', 'auto'],
    title: '',
    shadeClose: true, //点击遮罩关闭
    content: content
  })

})


function getCaption(obj) {
  var index = obj.lastIndexOf("\\");
  // console.log(index);
  obj = obj.substring(index + 1, obj.length);
  // console.log(obj);
  return obj;
}

var filepatd

$('input[name="uploadresume"]').on('change', function () {
  filepatd = $(this).val();
  var filname = getCaption(filepatd);
  var extStart = filepatd.lastIndexOf(".");
  var ext = filepatd.substring(extStart, filepatd.lengtd).toUpperCase();
  if (ext != ".DOC" && ext != ".DOCX" && ext != ".ZIP" && ext != ".RAR" && ext != ".PDF") {
    layer.msg("文件格式限于doc、docx、zip、rar、pdf", { offset: ['50%'] });
    $(this).attr('value', '');
    $(".box_bg .submit span").text('选择');
    return false;
  } else {
    $(".submit span").text(filname);
    var formData = new FormData();
    console.log(this.files[0])
    formData.append('file', this.files[0]);

    $.ajaxFileUpload({
      type: 'post',
      url: "/plus/diy.php?diyid=2&do=2&dede_fields=applyjob,text;educateschool,text;workyears,text;name,text;uploadresume,addon&dede_fieldshash=5f8f793d869915d8f4af236c5ca669d5", //提交到后台文件
      fileElementId: 'uploadresume',
      dataType: 'text',
      success: function (data) {
        layer.msg("简历已上传", { icon: 1 });
        $(".submit span").text('选择');
        $('input[name="uploadresume"]').outerHTML = $('input[name="uploadresume"]').outerHTML;
      },
      error: function (err) {
        console.log(err)
      }
    });
  }
})

$(".form_submit_resume").click(function () {

  var applyjob = document.getElementById("applyjob");
  var educateschool = document.getElementById("educateschool");
  var workyears = document.getElementById("workyears");
  var applyName = document.getElementById("uploadname");

  var dataS = 'applyjob=' + applyjob.value +
    '&name=' + applyName.value +
    '&educateschool=' + educateschool.value +
    '&workyears=' + workyears.value +
    '&uploadresume=' + uploadresume +
    '&action=post' +
    '&diyid=2&do=2&dede_fields=applyjob,text;educateschool,text;workyears,text;name,text;uploadresume,addon&dede_fieldshash=5f8f793d869915d8f4af236c5ca669d5';


  if (applyjob.value === "") {
    layer.msg("申请职位不能为空", { icon: 2 });
  } else if (educateschool.value === "") {
    layer.msg("毕业院校/学历不能为空", { icon: 2 });
  } else if (workyears.value === "") {
    layer.msg("工作年限不能为空", { icon: 2 })
  } else if (applyName.value === "") {
    layer.msg("申请人姓名不能为空", { icon: 2 })
  } else {
    $.ajax({
      type: 'post',
      url: "/plus/diy.php", //提交到后台文件
      data: dataS, //传值
      success: function (data) {
        console.log(data)
        document.getElementById("upload_resume").reset();
        layer.msg("提交成功！", { icon: 1 });
        $(this).attr('value', '');
        $(".box_bg .submit span").text('选择');
      },
      error: function (err) {
        console.log(err)
      }
    });
  }
});







