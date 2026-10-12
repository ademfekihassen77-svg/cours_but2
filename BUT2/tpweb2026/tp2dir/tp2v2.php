<?PHP
include("head.html");
require_once("fonction.php");
?>


<h1>TP2 de WEB je crois</h1>



<?php
$a=5;
$b=&$a;
echo "la valeur de \a$ est : ".$a;
echo "<br>";
echo "la valeur de \b$ est : ".$b;
$a=7;
echo "<br>";
echo "la valeur de \a$ est : ".$a;
echo "<br>";
echo "la valeur de \b$ est : ".$b;

echo "<br>";
echo "<br>";
echo "<br>";
$tab=array(1,2,3,4,5,6,7,8,9);
for ($i=0 ; $i<count($tab);$i++){
echo $tab[$i];}

foreach($tab as $val){
echo $val;
echo "<br>";}

$caracter=array(1,2,3,4,5,6,7,8,9);
$effectif=array(10,5,6,7,8,9,1,3,4);
afficher($caracter,$effectif);
echo "<br>";
afficher2($caracter,$effectif);


?>


<?PHP
include("footer.html");
?>