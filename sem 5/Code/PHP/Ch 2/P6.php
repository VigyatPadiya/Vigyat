<!DOCTYPE html>
<html>
<head>
    <title>Simple PHP Calculator</title>
        <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(to right, #e0eafc, #cfdef3);
            padding: 40px;
            margin: 0;
        }

        .calculator {
            background-color: #ffffff;
            max-width: 400px;
            margin: auto;
            padding: 30px 40px;
            border-radius: 15px;
            box-shadow: 0 8px 20px rgba(0, 0, 0, 0.2);
        }

        h2 {
            text-align: center;
            color: #333333;
        }

        label {
            display: block;
            margin-top: 15px;
            font-weight: bold;
            color: #444;
        }

        input[type="number"],
        select {
            width: 100%;
            padding: 10px;
            margin-top: 8px;
            border: 1px solid #ccc;
            border-radius: 8px;
            font-size: 16px;
        }

        input[type="submit"] {
            width: 100%;
            background-color: #007BFF;
            color: white;
            padding: 12px;
            margin-top: 20px;
            border: none;
            border-radius: 8px;
            font-size: 16px;
            cursor: pointer;
        }

        input[type="submit"]:hover {
            background-color: #0056b3;
        }

        h3 {
            text-align: center;
            color: #222;
            margin-top: 25px;
        }
    </style>
</head>
<body>
    <h2>Simple Calculator</h2>
    <form method="post">
        <label>Enter First Number:</label>
        <input type="number" name="num1"required><br><br>

        <label>Enter Second Number:</label>
        <input type="number" name="num2"required><br><br>

        <label>Select Operation:</label>
        <select name="operation" required>
            <option value="">--Select--</option>
            <option value="add">Addition (+)</option>
            <option value="subtract">Subtraction (-)</option>
            <option value="multiply">Multiplication (×)</option>
            <option value="divide">Division (÷)</option>
        </select><br><br>

        <input type="submit" name="submit" value="Calculate">
    </form>

    <?php
    function calculate($num1, $num2, $operation) {
        switch ($operation) {
            case 'add':
                return $num1 + $num2;
            case 'subtract':
                return $num1 - $num2;
            case 'multiply':
                return $num1 * $num2;
            case 'divide':
                if ($num2 == 0) {
                    return "Error: Cannot divide by zero.";
                }
                return $num1 / $num2;
            default:
                return "Invalid operation selected.";
        }
    }

    if (isset($_POST['submit'])) {
        $num1 = (float)$_POST['num1'];
        $num2 = (float)$_POST['num2'];
        $operation = $_POST['operation'];

        $result = calculate($num1, $num2, $operation);

        echo "<h3>Result: $result</h3>";
    }
    ?>
</body>
</html>
