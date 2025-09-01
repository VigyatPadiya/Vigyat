<?php
$conn = new mysqli("localhost", "root", "", "test");

$query = "
SELECT 
    HOUR('15:45:30') AS hour,
    MINUTE('15:45:30') AS minute,
    SECOND('15:45:30') AS second,
    DATE_FORMAT(NOW(), '%d-%m-%Y %H:%i:%s') AS formatted_date,
    DATE_SUB(NOW(), INTERVAL 10 DAY) AS date_subtracted
";

$result = $conn->query($query);
$row = $result->fetch_assoc();
echo "<pre>"; print_r($row); echo "</pre>";
$conn->close();
?>
