<?php
$z[0]=Array("field","",210,229);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("include","",490,527);
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
$z[5]=Array("field","",1635,1654);
$z[5][4]=array();
$z[5][4]['name']="title";
$z[6]=Array("field","\r\n            if(@me['shorttitle']=='') {\r\n            @me = \"\";\r\n            } else {\r\n              @me = \"{@me['shorttitle']}\";\r\n            }\r\n            ",1715,1921);
$z[6][4]=array();
$z[6][4]['name']="array";
$z[6][4]['runphp']="yes";
$z[7]=Array("field","",2030,2050);
$z[7][4]=array();
$z[7][4]['name']="writer";
$z[8]=Array("field","",2161,2179);
$z[8][4]=array();
$z[8][4]['name']="body";
$z[9]=Array("field","\r\n          if(@me['project_type']=='') {\r\n          @me = \"\";\r\n          } else {\r\n          @me = \"<p>项目类型：<span>{@me['project_type']}</span></p>\";\r\n          }\r\n          ",2460,2691);
$z[9][4]=array();
$z[9][4]['name']="array";
$z[9][4]['runphp']="yes";
$z[10]=Array("field","\r\n          if(@me['project_name']=='') {\r\n          @me = \"\";\r\n          } else {\r\n          @me = \"<p>项目名称：<span>{@me['project_name']}</span></p>\";\r\n          }\r\n          ",2705,2936);
$z[10][4]=array();
$z[10][4]['name']="array";
$z[10][4]['runphp']="yes";
$z[11]=Array("field","\r\n          if(@me['ownerunit']=='') {\r\n          @me = \"\";\r\n          } else {\r\n          @me = \"<p>业主单位：<span>{@me['ownerunit']}</span></p>\";\r\n          }\r\n          ",2950,3175);
$z[11][4]=array();
$z[11][4]['name']="array";
$z[11][4]['runphp']="yes";
$z[12]=Array("field","\r\n          if(@me['buildinga']=='') {\r\n          @me = \"\";\r\n          } else {\r\n          @me = \"<p>建筑设计：<span>{@me['buildinga']}</span></p>\";\r\n          }\r\n          ",3189,3414);
$z[12][4]=array();
$z[12][4]['name']="array";
$z[12][4]['runphp']="yes";
$z[13]=Array("field","\r\n          if(@me['partnercorp']=='') {\r\n          @me = \"\";\r\n          } else {\r\n          @me = \"<p>合作单位：<span>{@me['partnercorp']}</span></p>\";\r\n          }\r\n          ",3428,3657);
$z[13][4]=array();
$z[13][4]['name']="array";
$z[13][4]['runphp']="yes";
$z[14]=Array("field","\r\n          if(@me['chiefarchitect']=='') {\r\n          @me = \"\";\r\n          } else {\r\n          @me = \"<p>总建筑师：<span>{@me['chiefarchitect']}</span></p>\";\r\n          }\r\n          ",3671,3906);
$z[14][4]=array();
$z[14][4]['name']="array";
$z[14][4]['runphp']="yes";
$z[15]=Array("field","\r\n          if(@me['designteam']=='') {\r\n          @me = \"\";\r\n          } else {\r\n          @me = \"<p>设计团队：<span>{@me['designteam']}</span></p>\";\r\n          }\r\n          ",3920,4147);
$z[15][4]=array();
$z[15][4]['name']="array";
$z[15][4]['runphp']="yes";
$z[16]=Array("field","\r\n          if(@me['roomdesign']=='') {\r\n          @me = \"\";\r\n          } else {\r\n          @me = \"<p>室内设计：<span>{@me['roomdesign']}</span></p>\";\r\n          }\r\n          ",4161,4388);
$z[16][4]=array();
$z[16][4]['name']="array";
$z[16][4]['runphp']="yes";
$z[17]=Array("field","\r\n          if(@me['floorage']=='') {\r\n          @me = \"\";\r\n          } else {\r\n          @me = \"<p>建筑面积：<span>{@me['floorage']}</span></p>\";\r\n          }\r\n          ",4402,4625);
$z[17][4]=array();
$z[17][4]['name']="array";
$z[17][4]['runphp']="yes";
$z[18]=Array("field","\r\n          if(@me['photograph']=='') {\r\n          @me = \"\";\r\n          } else {\r\n          @me = \"<p>建筑摄影：<span>{@me['photograph']}</span></p>\";\r\n          }\r\n          ",4639,4866);
$z[18][4]=array();
$z[18][4]['name']="array";
$z[18][4]['runphp']="yes";
$z[19]=Array("include","",4971,5008);
$z[19][4]=array();
$z[19][4]['filename']="footer.htm";

?>