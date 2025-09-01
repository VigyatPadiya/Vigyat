<!DOCTYPE html>
<html lang="en">
<head>
    <title>Include</title>
    <style>
        div
        {
            font-size: xx-large;
        }
    </style>
</head>
<body>
    <div>
        <?php
            include 'add.php';
            {
                hello("Vigyat");
            }
            ?>
    </div>
    <div>
        <?php
            require 'req.php';
            {
                age(21);
            }
        ?>
    </div>
</body>
</html>