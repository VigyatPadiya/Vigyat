<!-- Write a PHP program to print previous sem result using variable & constant in PHP -->
<!DOCTYPE html>
<html>

<head>
    <title>Result</title>
    <style>
        table {
            padding: 10px;
            margin: 10px;
            border: 1px solid black;
            text-align: center;
            font-size: xx-large;
        }

        td,
        tr,
        th {
            border: 1px solid black;
            height: 25%;
            width: 20%;
        }

        .bold {
            font-weight: bold;
        }
    </style>
</head>
<?php
$s1 = "Python";
$s2 = "R";
$s3 = "CN";
$s4 = "OS";
$s5 = "DS";

$m1 = "90";
$m2 = "80";
$m3 = "80";
$m4 = "70";
$m5 = "80";

$t1 = "100";
$tm = $t1 * 5;
$total = $m1 + $m2 + $m3 + $m4 + $m5;
$percentage = ($total / 5);

if ($percentage >= 80) {
    $grade = "A";
} else if ( $percentage<=80 & $percentage <=60){
    $grade="B";
}else if ( $percentage<=60 & $percentage <=40){
    $grade="c";
}else if ( $percentage<=40 & $percentage <=20){
    $grade="Fail";
}

?>

<body>
    <center>
        <table>
            <tr>
                <th colspan="3">MU-Result</th>
            </tr>
            <tr>
                <th colspan="3">SEM-4</th>
            </tr>
            <tr>
                <th>Sub</th>
                <th>Marks</th>
                <th>Total</th>
            </tr>
            <tr>
                <td><?php echo $s1; ?></td>
                <td><?php echo $m1; ?></td>
                <td><?php echo $t1; ?></td>
            </tr>
            <tr>
                <td><?php echo $s2; ?></td>
                <td><?php echo $m2; ?></td>
                <td><?php echo $t1; ?></td>
            </tr>
            <tr>
                <td><?php echo $s3; ?></td>
                <td><?php echo $m3; ?></td>
                <td><?php echo $t1; ?></td>
            </tr>
            <tr>
                <td><?php echo $s4; ?></td>
                <td><?php echo $m4; ?></td>
                <td><?php echo $t1; ?></td>
            </tr>
            <tr>
                <td><?php echo $s5; ?></td>
                <td><?php echo $m5; ?></td>
                <td><?php echo $t1; ?></td>
            </tr>
            <tr>
                <td class="bold">Total</td>
                <td class="bold"><?php echo $total; ?></td>
                <td class="bold"><?php echo $tm; ?></td>
            </tr>
            <tr>
                <td colspan="2">Percentage</td>
                <td class="bold"><?php echo $percentage; ?></td>
            </tr>
            <tr>
                <td colspan="2">Grade</td>
                <td class="bold"><?php echo $grade; ?></td>
            </tr>
        </table>
    </center>
</body>

</html>