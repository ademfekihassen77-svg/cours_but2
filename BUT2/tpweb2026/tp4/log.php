<?php

$file = "users.csv";
$fp = fopen($file, "r");

if (isset($_POST['login'], $_POST['password'])) {

    $_login = $_POST['login'];
    $_password = $_POST['password'];

    $trouve = false;

    while (($ligne = fgetcsv($fp, 1024, ",")) !== false) {

        $login = $ligne[0];
        $mdp = $ligne[1];

        if ($_login == $login && md5($_password) == $mdp) {
            $trouve = true;
            break;
        }
    }

    fclose($fp);

    if ($trouve) {
        session_start();

        $_SESSION['login'] = $_login;
        $_SESSION['password'] = $_password;

        header('Location: admin.php');
        exit();
    } else {
        header('Location: login.php?error=1');
        exit();
    }
}