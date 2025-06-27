<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
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