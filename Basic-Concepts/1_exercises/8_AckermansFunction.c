#include <stdio.h>

#define lli long long int

lli ackermanOne(int m, int n); // if m = 0
lli ackermanTwo(int m, int n); // if n = 0
lli ackermanThree(int m, int n); // otherwise

int main() {

    lli ccVal = ackermanThree(1, 1);

    printf("%lld\n", ccVal);

    return 0;
}

lli ackermanOne(int m, int n) { return n+1; }
lli ackermanTwo(int m, int n) {
    if(m-1 == 0) {
        return ackermanOne(m, n);
    } else if(n == 0) {
        return ackermanTwo(m - 1, 1);
    } else {
        return ackermanThree(m, n);
    }
}
lli ackermanThree(int m, int n) {
    if(m-1 == 0) {
        return ackermanOne(m-1, (n-1) == 0 ? ackermanTwo(m, n) : ackermanThree(m-1, n));
    } else if(m == 0) {
        return ackermanOne(m, n);
    } else {
        return ackermanThree(m-1, (n-1) == 0 ? ackermanTwo(m, n) : ackermanThree(m-1, n));
    }
}
