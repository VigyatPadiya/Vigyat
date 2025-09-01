<?php
// 1. Numeric array for Monday to Saturday
$weekDays = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];

echo "Numeric Array - Days of the Week:<br>";
foreach ($weekDays as $day) {
    echo $day . "<br>";
}

echo "<hr>";

// 2. Associative array for months and total days
$months = [
    "January" => 31,
    "February" => 28,
    "March" => 31,
    "April" => 30,
    "May" => 31,
    "June" => 30,
    "July" => 31,
    "August" => 31,
    "September" => 30,
    "October" => 31,
    "November" => 30,
    "December" => 31
];

echo "Associative Array - Months and Days:<br>";
foreach ($months as $month => $days) {
    echo "$month => $days days<br>";
}

echo "<hr>";

// 3. Multidimensional array for laptops with company, model, and price
$laptops = [
    "Dell" => [
        ["model" => "Inspiron 15", "price" => 55000],
        ["model" => "XPS 13", "price" => 95000]
    ],
    "HP" => [
        ["model" => "Pavilion 14", "price" => 52000],
        ["model" => "Envy x360", "price" => 88000]
    ]
];

echo "Multidimensional Array - Laptops:<br>";
foreach ($laptops as $company => $models) {
    echo "<strong>$company</strong><br>";
    foreach ($models as $laptop) {
        echo "Model: " . $laptop['model'] . ", Price: ₹" . $laptop['price'] . "<br>";
    }
    echo "<br>";
}
?>
