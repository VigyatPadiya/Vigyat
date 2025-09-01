<!DOCTYPE HTML>	
<html>
	<head>
	<title>For ForEach</title>
	<style>
		body
		{
			margin:20px;
			padding:20px;
			justify-content:center;
			text-align:center;
			background-color:#5A6C57;
		}
		#box
		{
			margin:50px;
			padding:50px;
			text-align:center;
			display:flex;
			border:10px solid #525B44;
			background-color:#D3F1DF;
		}
		.v
		{
			margin:10px;
			padding:10px;
			text-align:center;
			border:5px solid #525B44;
			background-color:#85A98F;
			font-size:xx-large;
		}
			
	</style>
	</head>
	
	<body>
		<div id="box">
			<div class="v">
			<h3>Output Using For Loop</h3>
				<?php
					for($i=1;$i<6;$i++)
					{
						echo "$i <br>";
					}
					echo "<br>"
				?>
			</div>
			<div class="v">
			<h3>Output Using ForEach Loop</h3>
				<?php
					$a=array(1,2,3,4,5);
					foreach($a as $x)
					{
						echo "$x <br>";
					}
					echo "<br>"
				?>
			</div>
			<div class="v">
			<h3>Output Using While Loop</h3>
				<?php
					$i=1;
					while($i<6)
					{
						echo "$i<br>";
						$i++;
					}
				?>
			</div>
			<div class="v">
			<h3>Output Using DoWhile Loop</h3>
				<?php
					$i=1;
					do
					{
						echo "$i <br>";
						$i++;
					}
					while($i<=5)
				?>
			</div>
		</div>
	</body>
</html>