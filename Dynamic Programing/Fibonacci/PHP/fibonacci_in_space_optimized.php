<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Fibonacci in space optimized</title>
</head>
<body>
    <form action="" method="post">
        <input type="number" name="number">
        <button>=</button>
    </form>

    <?php
    function fib($n)
    {
        $a=0;
        $b=1;
        $c;
        for($i=2; $i<=$n; $i++){
            $c = $a + $b;
            $a = $b;
            $b = $c;
        }
        return $b;
    }

    if(isset($_POST["number"])){
        $n = $_POST["number"];
        echo fib($n);
    }

    ?>
</body>
</html>