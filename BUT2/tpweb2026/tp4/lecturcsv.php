
<!doctype>
<html lang=fr>
<head>
<title>lecture csv</title>
    <link href="../tp3/style.css" rel="stylesheet">
</head>


<body>
<?php

$file = "data.csv";
$fp=fopen($file,"r");



$lignes=fgetcsv($fp,1024,",");

echo "<table>";
echo "<tr>";
foreach($lignes as $value){
    echo "<th>".$value."</th>";
}
echo "</tr>";
while ($lignes=fgetcsv($fp,1024,",")){
    echo "<tr>";
    foreach($lignes as $value){
        echo "<td>".$value."</td>";
    }
    echo "</tr>";
}
echo "</table>";



echo"</body>";
echo "</html>";