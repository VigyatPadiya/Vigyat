<!DOCTYPE HTML>
<html>
	<head>
		<title>
			Conditional Statement
		</title>
		<link rel="stylesheet" href="CSS.css">
	</head>
	<body>
		<?php
			echo "Result";
			$sub1=40;
			$sub2=46;
			$sub3=44;
			$sub4=39;
			$sub5=48;
			
			$total=$sub1+$sub2+$sub3+$sub4+$sub5;
			echo "<br>Total:";
			echo $total;
			echo "<br>Percentage:";
			$per=$total/5;
			echo $per;
			echo "<br>";
			if ($per>=90){
				echo "Grade A";
			}elseif ($per>=80){
				echo "Grade B";
			}elseif ($per>=70){
				echo "Grade C";
			}elseif($per>=60){
				echo "Grade D";
			}elseif($per>=50){
				echo "Grade E";
			}
		?>
		</body>
</html>