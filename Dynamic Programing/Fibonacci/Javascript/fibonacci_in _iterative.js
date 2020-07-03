
      function fib(n) {
        var i;
        var f = new Array(n + 1);
        f[0] = 0;
        f[1] = 1;
        for (i = 2; i <= n; i++) {
          f[i] = f[i - 1] + f[i - 2];
        }
        return f[n];
      }
      while (true) {
        var n = parseInt(window.prompt());
        if (n <= 0) break;
        document.writeln(fib(n));
      }