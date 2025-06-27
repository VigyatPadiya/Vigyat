<!DOCTYPE HTML>	
<html>
	<head>
		<title>if...else</title>
	</head>
	<style>
	body
	{
		background-color:#06202B;
	}
	.bb
	{
		padding:100px;
		margin:100px;
		background-color:#8DBCC7;
		justify-content:center;
		text-align:center;	
		border:3px double #222831;
		border-radius:30px;
	}
	div
	{
		margin:10px;
		padding:10px;
		border:1px solid  #A4CCD9;
		border-radius: 10px;
		background-color:#EBFFD8;
		font-size:xx-large;
	}
	form{
		justify-content:center;
		text-align:center;
	}
	
	input
	{
		font-size:xx-large;
		border:2px solid #A4CCD9;
		border-radius:10px;
		background-color:#C4E1E6;
	}
	</style>
	
	<body>
		<div class="bb">
		<form method="post">
				<input type="text" name="month" placeholder="Month">
				<input type="submit">
		</form>
		<div>
		<?php
			if ($_SERVER['REQUEST_METHOD'] == 'POST')
			{
				$month=$_POST['month'];
				
				if ($month==1){
					$name="January";
				}elseif($month==2){
					$name="February";
				}elseif($month==3){
					$name="March";
				}elseif($month==4){
					$name="April";
				}elseif($month==5){
					$name="May";
				}elseif($month==6){
					$name="June";
				}elseif($month==7){
					$name="July";
				}elseif($month==8){
					$name="August";
				}elseif($month==9){
					$name="September";
				}elseif($month==10){
					$name="October";
				}elseif($month==11){
					$name="November";
				}elseif($month==12){
					$name="December";
				}elseif($month>12){
					$name="Error 404 Month 12 ajj hoy bhai :^)";
				}
				echo "$month<br>";
				echo "$name";
			
			}
				?>
		</div>
		</div>
		
		<div class="bb">
			<form method="post">
					<input type="text" name="mn" placeholder="Month">
					<input type="submit">
			</form>
		<div>
			<?php
				if ($_SERVER['REQUEST_METHOD'] == 'POST')
			{
				$mn=$_POST['mn'];
				
				switch ($mn)
				{
					case 1:
						$nm="January";
					case 2:
						$nm="February";
					case 3:
						$nm="March";
					case 4:
						$nm="April";
					case 5:
						$nm="May";
					case 6:
						$nm="June";
					case 7:
						$nm="July";
					case 8:
						$nm="August";
					case 9:
						$nm="September";
					case 10:
						$nm="October";
					case 11:
						$nm="November";
					case 12:
						$nm="December";
					default:
						$nm="Nah bhura nah 12 thi vadhre maina no hoy :(";
					
					
				}
				echo "$mn<br>";
				echo "$nm";
					
			}
			?>
		</div>
		</div>
	</body>
	
</html>