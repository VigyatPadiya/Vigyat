<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="login">
        <form method="post" class="login_box">
            <input type="text" placeholder="Name" name="name" required>
            <input type="email" placeholder="example@gmail.com" name="email" required>
            <input type="number" placeholder="Enrollment" name="enroll" required>
            <input type="number" placeholder="Age" name="age" required>
            <input type="text" placeholder="Course" name="course" required>
            <input type="text" placeholder="Collage" name="collage" required>
            <input type="submit" value="Register">
        </form>
    </div>
</body>
</html>
<?php
    if ($_SERVER['REQUEST_METHOD']=='POST')
    {
        
        echo "<h2>Student Details</h2>";
        $name=$_POST['name'];
        $email=$_POST['email'];
        $enroll=$_POST['enroll'];
        $age=$_POST['age'];
        $course=$_POST['course'];
        $collage=$_POST['collage'];
        
        
        echo "$name<br>";
        echo "$email<br>";
        echo "$enroll<br>";
        echo "$age<br>";
        echo "$course<br>";
        echo "$collage<br>";
    }

?>