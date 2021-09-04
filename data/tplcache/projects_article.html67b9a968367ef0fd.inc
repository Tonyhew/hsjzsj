<?php
$z[0]=Array("field","",208,227);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("include","",488,525);
$z[1][4]=array();
$z[1][4]['filename']="header.htm";
$z[2]=Array("field","",675,697);
$z[2][4]=array();
$z[2][4]['name']="typename";
$z[3]=Array("field","\r\n          \$id=@me;\r\n          global \$dsql;\r\n          \$sql=\"select seotitle from hssj_arctype where id=\$id\";\r\n          \$row=\$dsql->getOne(\$sql);\r\n          @me=\$row[\"seotitle\"];\r\n          ",755,1000);
$z[3][4]=array();
$z[3][4]['name']="typeid";
$z[3][4]['runphp']="yes";
$z[4]=Array("channel","\r\n        <b>\r\n          <span>|</span>\r\n          <a href=\"[field:typelink/]\">\r\n            <p>[field:typename/]</p>\r\n          </a>\r\n        </b>\r\n        ",1130,1444);
$z[4][4]=array();
$z[4][4]['reid']="5";
$z[4][4]['type']="son";
$z[4][4]['currentstyle']="<b><span>|</span><a href='~typelink~' ~rel~ class='onActive'>~typename~</a></b>";
$z[5]=Array("field","</span></p>\r\n          <p>项目名称：<span>{dede:field.project_name}</span></p>\r\n          <p>业主单位：<span>{dede:field.ownerunit}</span></p>\r\n          <p>建筑设计：<span>{dede:field.buildinga}</span></p>\r\n          <p>合作单位：<span>{dede:field.partnercorp}</span></p>\r\n          <p>总建筑师：<span>{dede:field.chiefarchitect}</span></p>\r\n          <p>设计团队：<span>{dede:field.designteam}</span></p>\r\n          <p>室内设计：<span>{dede:field.roomdesign}</span></p>\r\n          <p>建筑面积：<span>{dede:field.floorage}</span></p>\r\n          <p>建筑摄影：<span>{dede:field.photograph}</span></p>\r\n        </div>\r\n\r\n      </div>\r\n\r\n      <div class=\"clear\"></div>\r\n\r\n    </div>\r\n    \r\n\r\n  </div>\r\n\r\n  \r\n  {dede:include filename=\"footer.htm\"",1743,2558);
$z[5][4]=array();
$z[5][4]['name']="project_type";

?>