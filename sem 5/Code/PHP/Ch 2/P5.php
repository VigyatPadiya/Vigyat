<?php
    $num=100.01;
    echo "<br>Orignal Value:".$num;
    echo "<br>Set Type:Integer".settype($num,"integer");
    echo "<br>Get Type:".gettype($num);
    $num="True";
    echo "<br>Orignal Value:".$num;
    echo "<br>Set Type:Strings".settype($num,"string");
    echo "<br>Get Type:".gettype($num);

?>