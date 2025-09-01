<?php
$var = array("One" => 1, "Two" => 2);
$months = array("Jan", "Feb", "Mar", "Apr", "May", "Jun");
$colors = array("red", "blue", "red", "green", "blue");

echo "<pre>";

// 1
print_r(array_change_key_case($var, CASE_UPPER));

// 2
print_r(array_chunk($months, 2));

// 3
print_r(array_count_values($colors));

// 4
array_pop($colors);
print_r($colors);

// 5
array_push($colors, "yellow");
print_r($colors);

// 6
array_unshift($colors, "black");
print_r($colors);

// 7
array_shift($colors);
print_r($colors);

echo "</pre>";
?>
