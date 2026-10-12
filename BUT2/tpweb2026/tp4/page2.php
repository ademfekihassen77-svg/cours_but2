<?php
if (isset($_COOKIE["pages"])) {
    setcookie("pages","vous venez de la pâge 2");

    echo "coockie : <b>".$_COOKIE["pages"]."</b>";

}

echo "<h1> vous etes sur la page 2 </h1>";
echo "<p><a href='page1.php'>page 1</a></p>";
echo "<p><a href='page0.php'>page 0</a></p>";
