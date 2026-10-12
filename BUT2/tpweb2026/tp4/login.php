<?php
echo "<form action='log.php' method='post'>
<label for='login'>login</label>
<input type='text' name='login' id='login' placeholder='login'>
<label for='password'>MOt de passe</label>
<input type='password' name='password' id='password' placeholder='password'>
<input type='submit' value='Valider' >
</form>
";
if (isset($_GET['error'])) {
    if ($_GET['error'] == "1") {
        echo "<p style='color: red;'>il y a une erreur sur vos identifiants</p>";
    }
}