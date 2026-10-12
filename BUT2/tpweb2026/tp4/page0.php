<?php
setcookie("pages","vous venez de la pâge 0");
if (isset($_COOKIE["pages"])) {
    echo "coockie : <b>".$_COOKIE["pages"]."</b>";

}

echo "<h1> vous etes sur la page 0 </h1>";
echo "<p><a href='page1.php'>page 1</a></p>";
echo "<p><a href='page2.php'>page 2</a></p>";
