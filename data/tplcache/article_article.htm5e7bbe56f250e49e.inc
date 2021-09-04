<?php
$z[0]=Array("field","",210,229);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("include","",572,609);
$z[1][4]=array();
$z[1][4]['filename']="header.htm";
$z[2]=Array("field","",757,779);
$z[2][4]=array();
$z[2][4]['name']="typename";
$z[3]=Array("field","\r\n          \$id=@me;\r\n          global \$dsql;\r\n          \$sql=\"select seotitle from hssj_arctype where id=\$id\";\r\n          \$row=\$dsql->getOne(\$sql);\r\n          @me=\$row[\"seotitle\"];\r\n          ",837,1082);
$z[3][4]=array();
$z[3][4]['name']="typeid";
$z[3][4]['runphp']="yes";
$z[4]=Array("field","",1306,1325);
$z[4][4]=array();
$z[4][4]['name']="title";
$z[5]=Array("field","",1386,1442);
$z[5][4]=array();
$z[5][4]['name']="pubdate";
$z[5][4]['function']="MyDate('Y-m-d H:i',@me)";
$z[6]=Array("field","",1533,1551);
$z[6][4]=array();
$z[6][4]['name']="body";
$z[7]=Array("likearticle","\r\n          <a href=\"[field:arcurl/]\">\r\n            <img src=\"[field:picname/]\" alt=\"\">\r\n            <p>[field:title/]</p>\r\n          </a>\r\n          ",1821,2044);
$z[7][4]=array();
$z[7][4]['mytypeid']="2";
$z[7][4]['row']="3";
$z[7][4]['titlelen']="250";
$z[8]=Array("include","",2149,2186);
$z[8][4]=array();
$z[8][4]['filename']="footer.htm";

?>