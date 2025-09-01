<?php
session_start();
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $user = $_POST['username'];
    $pass = $_POST['password'];

    if ($user == "admin" && $pass == "1234") {
        $_SESSION['user'] = $user;
        header("Location: P7.php");
        exit();
    } else {
        echo "Invalid Login!";
    }
}
?>
<form method="post">
    Username: <input type="text" name="username" required><br>
    Password: <input type="password" name="password" required><br>
    <input type="submit" value="Login">
</form>
