<!DOCTYPE html>
<html lang="en">
<head>
    <title>Merge</title>
</head>
<body>
    <?php
        $arr1=[1,2,3,4,5];
        $arr2=[6,7,8,9,0];
        $mearged=array_merge( $arr1,$arr2);
        foreach ($mearged as $m )
        {
            echo $m."<br>";
        }
    ?>
</body>
</html>