<?PHP
function afficher ($tab,$tab2){
echo "<table>";
echo "<tr><th>caractere</th>";

foreach($tab as $val){
echo "<td>".$val."</td>";
}
echo "</tr><tr><th>effectif</th>";
foreach($tab2 as $val){
echo "<td>".$val."</td>";
}
echo "</tr>";
echo "</table>";

}
function afficher2 ($tab, $tab2) {))

    echo "<tr><th>Caractere</th><th>Effectif</th></tr>";

    foreach ($tab as $i => $val) {
        echo "<tr>";
        echo "<td>" . $val . "</td>";
        echo "<td>" . $tab2[$i] . "</td>";
        echo "</tr>";
    }

    echo "</table>";
}
?>