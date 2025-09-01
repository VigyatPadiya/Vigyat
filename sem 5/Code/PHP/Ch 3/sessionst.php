<?php
    session_start();
    $_SESSION['name'] = $_POST['us'] ?? 'Guest';
    echo 'Welcome'. $_SESSION['name'] .'!';
?>