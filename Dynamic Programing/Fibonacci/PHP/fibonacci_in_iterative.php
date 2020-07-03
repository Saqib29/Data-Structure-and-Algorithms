<!DOCTYPE html>
<html>
<head>
</head>
<body>

<form action="fibonacci_in_iterative.php" method="post">
<input type="number" name="number">
<input type="submit" value="=">
</form>

<?php

function fib($n){
	
	$data = array(0,$n+1);
	$data[0] = 0;
	$data[1] = 1;
	for($i=2; $i<=$n; $i++){
		$data[$i] = $data[$i-1] + $data[$i-2];
	}
	return $data[$n];
}

if(isset($_POST["number"])){
	$n = $_POST["number"];
	echo fib($n);
}


?>

</body>
</html>