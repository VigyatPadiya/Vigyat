<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <form method="post">
        <input type="text" name="name">
        <input type="submit">
    </form>
</head>
<body>
    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $nm = $_POST["name"];

        setcookie("user","$nm",time()+15,"/");
        if (isset($_COOKIE["user"])==$nm){
            echo "<script>alert('You Have Already Visited Here ". $_COOKIE["user"]."')</script>";
        }    else{
            echo "You Visited First Time";
        }
    }
    ?>
    
</body>
</html>