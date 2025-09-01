<!DOCTYPE html>
<html lang="en">
<head>
    <title>Array</title>
</head>
<body>
    <form method='post'>
        <input type="text" name="num" placeholder="1,2,4...">
        <input type="submit">
    </form>
    <?php
        if ($_SERVER['REQUEST_METHOD']=='POST')
        {
            $input=$_POST["num"];
            $arr=explode(",",$input);
            $i=0;
            foreach( $arr as $arrays){
                echo "<br>[$i] :$arrays";
                $i++;
            }
           
        }
    ?>  
</body>
</html> 