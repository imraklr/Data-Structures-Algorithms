#include <stdio.h>

#define lli long long int

lli ackerman(int m, int n);

int main() {

    lli ackVal = ackerman(3, 2);

    printf("%lld\n", ackVal);

    return 0;
}

lli ackerman(int m, int n) {
    if(m == 0) {
        return n+1;
    } else if(n == 0) {
        return ackerman(m-1, 1);
    } else {
        return ackerman(m-1, ackerman(m, n-1));
    }
}