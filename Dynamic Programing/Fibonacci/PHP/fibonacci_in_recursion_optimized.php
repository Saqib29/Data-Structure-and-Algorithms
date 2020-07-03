<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="get">
        <p>Enter input(MAX VALUE: 20):</p>
        <input type="number" name="number">
        <input type="submit" name="=">
    </form>
    <?php
    $MAX_VALUE = 20;
    $EMPTY_VALUE = -1;
    $memo = array(0,$MAX_VALUE+1);
        function init(){
            global $MAX_VALUE, $EMPTY_VALUE, $memo;
            for($i=0; $i<=$MAX_VALUE; $i++){
                $memo[$i] = $EMPTY_VALUE;
            }
        }
        function fib($n)
        {
            global $memo;
            if($n == 0 || $n == 1) return $n;
            if($memo[$n] != -1) return $memo[$n];

            $memo[$n] = fib($n-1) + fib($n-2);
            return $memo[$n];
        }
        init();
        if(isset($_GET["number"])){
            $n = $_GET["number"];
            if($n <= 0 || $n>= 21){
                echo "Enter Value in range";
            }else{
                echo fib($n);
            }
            
        }
    ?>

</body>
</html>