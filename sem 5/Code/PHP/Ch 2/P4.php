<?php
    $str="hello myself vigyat";
    echo ($str)."<br>";
    echo (ucfirst($str))."<br>";
    echo (ucwords($str))."<br>";
    echo (strlen($str))."<br>";
    echo (str_word_count($str))."<br>"; 
    echo (strrev($str))."<br>";
    echo (substr_replace($str,"hi",0,5))."<br>";
    echo (str_ireplace("hello","Yoo!",$str))."<br>";
    echo (strtolower($str))."<br>";
    echo (strtoupper($str))."<br>";
    echo (strstr($str,"vigyat"))."<br>";
    echo (strpos($str,"vigyat"))."<br>";
?>