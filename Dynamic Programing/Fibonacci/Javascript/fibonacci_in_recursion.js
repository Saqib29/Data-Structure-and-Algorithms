function f(n) {
  if (n <= 1) return n;
  return f(n - 1) + f(n - 2);
}
var n;
while (true) {
  n = parseInt(prompt());
  if (n <= 0) break;
  document.writeln(f(n));
}
