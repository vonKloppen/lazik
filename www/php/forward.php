<?php
exec("scripts/forward");
header('Location: http://'.$_SERVER['SERVER_ADDR'].'/index.html?success=true');
?>
