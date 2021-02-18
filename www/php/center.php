<?php
exec("scripts/center");
header('Location: http://'.$_SERVER['SERVER_ADDR'].'/index.html?success=true');
?>
