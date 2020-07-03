<!DOCTYPE html>
<html>
<head>
</head>
<body>

<form action="" method="get">
<input type="number" name="number">
<input type="submit" value="=">
</form>
<?php
function fib($n)
{
	if($n == 0 || $n == 1) return $n;
	
	return fib($n-1) + fib($n-2);
}

if(isset($_GET["number"])){
	$n = $_GET["number"];
	echo fib($n);
}

?>
</body>
</html>