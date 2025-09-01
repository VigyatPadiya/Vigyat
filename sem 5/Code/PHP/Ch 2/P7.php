<?php
$conn = new mysqli("localhost", "root", "", "test"); // Change database info

$query = "
SELECT 
    LENGTH('Hello World') AS length,
    CONCAT('Hello', ' ', 'World') AS concat_result,
    CONCAT_WS('-', '2025', '08', '03') AS concat_ws_result,
    TRIM('  Hello  ') AS trim_result,
    LTRIM('  Hello') AS ltrim_result,
    RTRIM('Hello  ') AS rtrim_result,
    LPAD('5', 4, '0') AS lpad_result,
    RPAD('5', 4, '0') AS rpad_result,
    LOCATE('World', 'Hello World') AS locate_result
";

$result = $conn->query($query);
$row = $result->fetch_assoc();
echo "<pre>"; print_r($row); echo "</pre>";
$conn->close();
?>
