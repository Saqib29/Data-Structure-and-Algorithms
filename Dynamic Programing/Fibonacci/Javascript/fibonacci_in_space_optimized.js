function fib(n) {
  var a = 0,
    b = 1,
    c;
  for (var i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}
var n;
while (true) {
  n = parseInt(prompt("Enter 0 to finish input"));
  if (n <= 0) break;
  document.writeln(fib(n));
}
