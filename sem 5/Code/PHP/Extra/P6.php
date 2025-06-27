<!DOCTYPE HTML>
<html>
	<head>
		<title>
			Input
		</title>
		<link rel="stylesheet" href="CSS.css">
	</head>
	<body>
		<form method="post">
			Name:<input type="text" name="username">
			<input type="submit">
		</form>
	</body>
	
</html>
<?php
	if ($_SERVER['REQUEST_METHOD']=='POST')
	{
		$name=$_POST['username'];
		echo "Welcome ,$name!";
	}
?>