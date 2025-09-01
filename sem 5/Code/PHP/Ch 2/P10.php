<?php
$conn = new mysqli("localhost", "root", "", "test");

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$query = "
SELECT 
    CURDATE() AS cur_date_value,
    CURRENT_DATE() AS current_date_value,
    CURTIME() AS cur_time_value,
    CURRENT_TIME() AS current_time_value,
    UNIX_TIMESTAMP() AS unix_ts,
    FROM_UNIXTIME(1725000000) AS from_unix
";

$result = $conn->query($query);

if ($result) {
    $row = $result->fetch_assoc();
    echo "<pre>"; print_r($row); echo "</pre>";
} else {
    echo "Query Error: " . $conn->error;
}

$conn->close();
?>
