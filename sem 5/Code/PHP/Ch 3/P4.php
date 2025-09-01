<?php
if (isset($_POST["set_cookie"])) {
    $username = $_POST["username"];
    setcookie("user", $username, time() + (86400 * 30), "/");
    header("Location: msg.html");
    exit();
}
if (isset($_POST['delete_cookie'])) {
    setcookie('user', "", time() - 3600, "/");
    header("Location: msg.html");
    exit();
}
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cookie</title>
</head>

<body>
    <header>
        <form method="post">
            <input type="text" name="username" placeholder="Enter username" required>
            <button type="submit" name="set_cookie">Set Cookie</button>
            <button type="submit" name="delete_cookie">Delete Cookie</button>
        </form>
    </header>
</body>

</html>
