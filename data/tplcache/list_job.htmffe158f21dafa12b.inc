<?php
$z[0]=Array("field","",66,85);
$z[0][4]['name']="title";
$z[1]=Array("global","",86,112);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",153,182);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",222,280);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",806,841);
$z[4][4]['filename']="head.htm";
$z[5]=Array("type","[field:typename /]",1644,1697);
$z[5][4]['typeid']="15";
$z[6]=Array("channelartlist","\r\n        <dl class=\"list-none navnow\">\r\n          <dt id='part2_25' {dede:field name='currentstyle'/}><a href='{dede:field name='typeurl'/}' class=\"zm\"><span>{dede:field name='typename'/}</span></a></dt>\r\n        </dl>\r\n        ",1748,2056);
$z[6][4]['type']="son";
$z[6][4]['noself']="yes";
$z[6][4]['typeid']="15";
$z[7]=Array("field","",2269,2291);
$z[7][4]['name']="typename";
$z[8]=Array("field","",2333,2355);
$z[8][4]['name']="position";
$z[9]=Array("list","\r\n        <dl class='list-none metlist'>\r\n          <dt><a href='[field:arcurl/]' title='[field:title/]' target='_self'>[field:title/]</a></dt>\r\n          <dd class='list '>\r\n            <div class='mis'><span>发布日期：[field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]</span></div>\r\n            <div class='editor met_editor'>\r\n             \r\n              \r\n              <div>[field:description function='cn_substr(@me,150)'/]...</div>\r\n              </span></div>\r\n            <div class='dtail'><span><a href='/a/job/yingpin/' title='在线应聘' target='_self'>在线应聘</a></span><span><a href='[field:arcurl/]' title='查看详细' target='_self'>查看详细</a></span></div>\r\n        </dl>\r\n        ",2468,3225);
$z[9][4]['pagesize']="5";
$z[10]=Array("pagelist","",3283,3349);
$z[10][4]['listitem']="index,end,pre,next,pageno";
$z[10][4]['listsize']="5";
$z[11]=Array("include","",3460,3495);
$z[11][4]['filename']="foot.htm";

?>