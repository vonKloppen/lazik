<?php
exec("scripts/back");
header('Location: http://'.$_SERVER['SERVER_ADDR'].'/index.html?success=true');
?>
