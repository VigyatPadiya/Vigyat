<?php
   
    $conn=mysqli_connect("localhost","root","","student");
     include "P7.php";
         if($conn->connect_error){
        die("Conntecion Error". $conn->connect_error);
    }

        $rollno=$_POST['roll'];
        $fname=$_POST['fname'];
        $lname=$_POST['lname'];
        $email=$_POST['email'];
        $city=$_POST['city'];
        $mobile=$_POST['mobno'];

        if (isset($_POST['insert']))
        {
            if(!empty($rollno) && !empty($fname) && !empty($lname) && !empty($email) && !empty($city) && !empty($mobile))
            {
                $sql="INSERT INTO info(roll,name,surname,email,city,mobno) VALUES ('$rollno','$fname','$lname','$email','$city','$mobile')";
                mysqli_query($conn, $sql);
                echo '<script>alert("Record Inserted")</script>';
            } 
            else {
            echo '<script>alert("Bhuraaa Kyk Khout Che")</script>';
            } 
        }
        else if (isset($_POST['update']))
        {
            if(!empty($rollno) && !empty($fname) && !empty($lname) && !empty($email) && !empty($city) && !empty($mobile))
            {
                $sql="UPDATE info SET name='$fname',surname='$lname',email='$email',city='$city',mobno='$mobile' where roll='$rollno'";
                mysqli_query($conn, $sql);
                echo '<script>alert("Record Updated")</script>';
            } 
            else {
                echo '<script>alert("Bhuraaa Kyk Khout Che")</script>';
            } 

        }
        else if(isset($_POST['delete'])){
            $sql="DELETE FROM INFO WHERE roll='$rollno'";
            mysqli_query($conn,$sql);
        }

?>