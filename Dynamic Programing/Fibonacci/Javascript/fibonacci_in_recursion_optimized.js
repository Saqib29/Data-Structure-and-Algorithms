var EMPTY_VALUE = -1;
var MAX_VALUE = 20;
var memo = new Array(MAX_VALUE);

function f(n)
{
    if(n<=1) return n;
    if(memo[n] != -1) return memo[n];

    memo[n] = f(n-1) + f(n-2);
    return memo[n];
}
function init()
{
    for(var i=0; i<=MAX_VALUE; i++){
        memo[i] = EMPTY_VALUE;
    }
}
var n;
init();
while(true){
    n = parseInt(prompt("enter number(max limit: 20)"));
    if(n <= 0) break;
    document.writeln(f(n));
}