<?php
$z[0]=Array("include","",721,758);
$z[0][4]=array();
$z[0][4]['filename']="header.htm";
$z[1]=Array("arclist","\r\n        <div class=\"swiper-slide\" data-select-type=\"[field:type/]\">\r\n          <a title=\"[field:title/]\" target=\"_blank\">\r\n            <!--  href=\"[field:piclinks/]\" -->\r\n            <div class=\"banner_v_wrapper\">\r\n              <div class=\"banner_img\">\r\n                <img src=\"[field:litpic/]\" alt=\"\">\r\n              </div>\r\n              <video class=\"banner_video\" width=\"100%\" height=\"100%\" loop muted autoplay>\r\n                <source src=\"[field:video/]\" type=\"video/mp4\">\r\n              </video>\r\n              <div class=\"banner_text ani\" swiper-animate-effect=\"fadeInUp\" swiper-animate-duration=\"0.5s\"\r\n                swiper-animate-delay=\"0.3s\">\r\n                <div class=\"banner_text_title\">\r\n                  <p>[field:fulltitle/]</p>\r\n                </div>\r\n                <div class=\"banner_text_desT\">\r\n                  <div class=\"banner_text_desLine\"></div>\r\n                  <p>[field:description/]</p>\r\n                </div>\r\n              </div>\r\n            </div>\r\n          </a>\r\n        </div>\r\n        ",895,2032);
$z[1][4]=array();
$z[1][4]['addfields']="piclinks,video,type";
$z[1][4]['typeid']="1";
$z[1][4]['row']="8";
$z[1][4]['channelid']="7";
$z[2]=Array("channelartlist","\r\n        {dede:arclist row='6' orderby='id' orderway='asc' addfields='city, project_name,picshowhow,pictype' channelid='18'}\r\n        <div class=\"picture-grid-box\" data-picshowhow='[field:picshowhow/]' data-pictype='[field:pictype/]'>\r\n          <!-- <a href=\"[field:arcurl/]\"> -->\r\n            <picture>\r\n              <img src=\"[field:picname/]\" alt=\"\">\r\n            </picture>\r\n          <!-- </a> -->\r\n          <div class=\"picture-info\">\r\n            <p>[field:city/]</p>\r\n            <p>[field:project_name/]</p>\r\n          </div>\r\n        </div>\r\n        {/dede:arclist}\r\n        ",2916,3558);
$z[2][4]=array();
$z[2][4]['typeid']="5";
$z[3]=Array("arclist","\r\n        <!-- <a href=\"[field:arcurl/]\"> -->\r\n          <div class=\"news-listBox\">\r\n            <img src=\"[field:litpic/]\">\r\n            <div class=\"news_postDate\">\r\n              <p>[field:pubdate function=\"strftime('%b',@me)\"/]</p>\r\n              <p>[field:pubdate function=\"strftime('%d',@me)\"/]</p>\r\n            </div>\r\n            <div class=\"listBox-content\">\r\n              <h3 class=\"listBox-title\">[field:fulltitle/]</h3>\r\n              <span class=\"listBox-post\">[field:description function=\"cn_substr(@me, 80)\"/]</span>\r\n            </div>\r\n          </div>\r\n        <!-- </a> -->\r\n        ",4148,4812);
$z[3][4]=array();
$z[3][4]['typeid']="2";
$z[3][4]['row']="3";
$z[3][4]['channelid']="1";
$z[4]=Array("include","",9155,9192);
$z[4][4]=array();
$z[4][4]['filename']="footer.htm";

?>