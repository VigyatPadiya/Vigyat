<!-- Write a PHP program to find out maximum and minimum number -->
<!DOCTYPE html>
<html lang="en">
<head>
    <title>
        Maximum and Minimum
    </title>
    <style>
        body {
            background-color: #FFBF78;
            text-align: center;
        }

        form {
            padding: 50px;
            margin: 20px;
            border: 1px solid;
            border-radius: 30px;
            display: inline-grid;
            background-color: #7B4019;
        }

        input {
            margin: 10px;
            padding: 10px;
            height: 50px;
            width: 500px;
            background-color: #FFEEA9;
            border-radius: 20px;
            text-align: center;
        }
    </style>
</head>

<body>
    <h1>Arithmatic Operation</h1>
    <form method="post">
        <input type="number" placeholder="Number" name="n1" required>
        <input type="number" placeholder="Number" name="n2" required> 
        <input type="number" placeholder="Number" name="n3" required>

        <input type="submit">

    </form>
    <?php
    if ($_SERVER["REQUEST_METHOD"] == 'POST') {
        $n1 = $_POST["n1"];
        $n2 = $_POST["n2"];
        $n3 = $_POST["n3"];

        $max=max($n1,$n2,$n3);
        $min=min($n1,$n2,$n3);

        echo "<h2>Maximum: $max</h2>";
        echo "<h2>Minimum: $min</h2>";
    }

    ?>
</body>
</html>