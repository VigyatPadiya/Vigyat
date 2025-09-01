<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Array Reverse</title>
</head>
<body>
   
<form method='post'>
        <input type="text" name="num">
        <input type="submit">
    </form>
    <?php
        if ($_SERVER['REQUEST_METHOD']=='POST')
        {
            $input=$_POST["num"];
            $arr=explode(",",$input);
            $rev=array_reverse($arr);
            $i=0;
            foreach( $rev as $arrays){
                echo "<br>[$i] :$arrays";
                $i++;
            }
           
        }
    ?>  
</body>
</html> 