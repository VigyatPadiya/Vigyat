<!DOCTYPE html>
<html>
<head>
    <title>Sort Array</title>
</head>
<body>
    <h2>Enter numbers separated by commas</h2>
    <form method="post">
        <input type="text" name="numbers" placeholder="e.g. 5,2,8,1,9" required>
        <input type="submit" value="Sort">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $input = $_POST['numbers'];
        $array = array_map('intval', explode(',', $input));
        sort($array);
        echo "<h3>Sorted Array:</h3>";
        echo implode(', ', $array);
    }
    ?>
</body>
</html>
