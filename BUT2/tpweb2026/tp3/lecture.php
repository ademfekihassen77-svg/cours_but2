<?php
$fp=fopen("fichier.txt","r");

/* r = mode lecture simple  pointeur placer au debut du fichier
w= mode d'ecriture, pointeur placer au debut du fichier
a = append , r/w pointeur placer a la fin du fichier
*/


while(!feof($fp)){
    $data[] = fgets($fp,1024);
}

echo "<pre>";
print_r($data);
echo "</pre>";
fclose($fp);

$fp=fopen("fichier.txt","a");
fputs($fp,"jaime la France");
fclose($fp);

echo filesize("fichier.txt");