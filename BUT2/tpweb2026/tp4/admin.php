<?php
session_start();
if (isset($_SESSION['login'])) {
    echo "<h1>Bonjour ".htmlspecialchars($_SESSION['login'])." </h1>";
    echo "<a href='logout.php'>Déconnexion </a>";
}
else {
    header('Location: login.php?error=1');
}
