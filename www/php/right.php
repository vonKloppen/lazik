<?php
exec("scripts/right");
header('Location: http://'.$_SERVER['SERVER_ADDR'].'/index.html?success=true');
?>
