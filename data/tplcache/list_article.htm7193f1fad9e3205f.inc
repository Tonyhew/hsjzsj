<?php
$z[0]=Array("field","",210,233);
$z[0][4]=array();
$z[0][4]['name']="seotitle";
$z[1]=Array("field","",233,253);
$z[1][4]=array();
$z[1][4]['name']="title";
$z[2]=Array("include","",511,548);
$z[2][4]=array();
$z[2][4]['filename']="header.htm";
$z[3]=Array("field","",645,667);
$z[3][4]=array();
$z[3][4]['name']="typename";
$z[4]=Array("field","\r\n        \$id=@me;\r\n        global \$dsql;\r\n        \$sql=\"select seotitle from hssj_arctype where id=\$id\";\r\n        \$row=\$dsql->getOne(\$sql);\r\n        @me=\$row[\"seotitle\"];\r\n        ",721,954);
$z[4][4]=array();
$z[4][4]['name']="typeid";
$z[4][4]['runphp']="yes";
$z[5]=Array("list","\r\n        <a href=\"[field:arcurl/]\" class=\"list_item\">\r\n          <div class=\"list_left_date\">\r\n            <p>\r\n              <span class=\"article_year\">[field:pubdate function=\"MyDate('Y',@me)\" /]</span>\r\n              <span class=\"article_date\">[field:pubdate function=\"MyDate('m-d',@me)\" /]</span>\r\n            </p>\r\n            <span class=\"a_line\"></span>\r\n          </div>\r\n\r\n          <div class=\"list_left_tit\">\r\n            <p>[field:title /]</p>\r\n            <p>[field:description /]</p>\r\n          </div>\r\n\r\n          <div class=\"list_right_img\">\r\n            <img src=\"[field:picname/]\" alt=\"\">\r\n          </div>\r\n\r\n          <div class=\"clear\"></div>\r\n        </a>\r\n        ",1110,1836);
$z[5][4]=array();
$z[5][4]['pagesize']="10";
$z[6]=Array("pagelist","",1911,1945);
$z[6][4]=array();
$z[6][4]['listitem']="pageno";
$z[7]=Array("include","",1995,2032);
$z[7][4]=array();
$z[7][4]['filename']="footer.htm";

?>