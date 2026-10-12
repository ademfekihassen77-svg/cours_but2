<?php
if (isset($_COOKIE["pages"])) {
    setcookie("pages","vous venez de la pâge 1");

    echo "coockie : <b>".$_COOKIE["pages"]."</b>";

}

echo "<h1> vous etes sur la page 1 </h1>";
echo "<p><a href='page0.php'>page 0</a></p>";
echo "<p><a href='page2.php'>page 2</a></p>";
