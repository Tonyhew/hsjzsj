<?php
$z[0]=Array("include","",490,527);
$z[0][4]=array();
$z[0][4]['filename']="header.htm";
$z[1]=Array("field","",649,671);
$z[1][4]=array();
$z[1][4]['name']="typename";
$z[2]=Array("field","\r\n          \$id=@me;\r\n          global \$dsql;\r\n          \$sql=\"select seotitle from hssj_arctype where id=\$id\";\r\n          \$row=\$dsql->getOne(\$sql);\r\n          @me=\$row[\"seotitle\"];\r\n          ",716,961);
$z[2][4]=array();
$z[2][4]['name']="typeid";
$z[2][4]['runphp']="yes";
$z[3]=Array("arclist","\r\n        <div class=\"team_o_item\" data-id=\"[field:id/]\">\r\n\r\n          <div class=\"team_img\">\r\n            <div></div>\r\n            <img src=\"[field:picname/]\" alt=\"\">\r\n          </div>\r\n\r\n          <div class=\"team_o_info\">\r\n            <div class=\"team_o_name\">\r\n              <h3>[field:name /]</h3>\r\n              <p>[field:engname /]</p>\r\n            </div>\r\n\r\n            <div class=\"team_o_position\">\r\n              <h4>\r\n                [field:position /]\r\n              </h4>\r\n              <p>\r\n                [field:eng_position /]\r\n              </p>\r\n            </div>\r\n          </div>\r\n\r\n          <div class=\"clear\"></div>\r\n\r\n        </div>\r\n        ",2174,2966);
$z[3][4]=array();
$z[3][4]['addfields']="name,engname,position,eng_position,introduce,detail_pic";
$z[3][4]['typeid']="12";
$z[3][4]['channelid']="19";
$z[4]=Array("arclist","\r\n  <div class=\"team_c\" data-id=\"[field:id/]\">\r\n\r\n    <div class=\"b_left\">\r\n      <img src=\"[field:detail_pic /]\" alt=\"\">\r\n    </div>\r\n\r\n    <div class=\"box_right\">\r\n      <div class=\"chief_info\" id=\"chief_info\">\r\n        [field:introduce /]\r\n      </div>\r\n    </div>\r\n\r\n    <div class=\"clear\"></div>\r\n\r\n  </div>\r\n  ",7978,8383);
$z[4][4]=array();
$z[4][4]['addfields']="introduce,detail_pic";
$z[4][4]['typeid']="12";
$z[4][4]['channelid']="19";
$z[5]=Array("include","",8389,8426);
$z[5][4]=array();
$z[5][4]['filename']="footer.htm";

?>