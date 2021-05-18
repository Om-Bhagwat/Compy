
#include<bits/stdc++.h>

using namespace std;


int main(){



    return 0;
}



/*
    Bitwise Operators.
    & And
    | OR
    ^ XOR
    ~ NOT

    XOR of same numbers is always zero.


    shift operators

    << left shift/ Binary operands  5<<1 shift all bits by 1 bit left. // <<1 means multiplication by 2.// a<<b == a*2^b.

    >> right shift /Binary operands It does division. a>>b = a/2^b.

    Odd or even number ??? If last bit is 1 then the number is odd.
    thus just do (a&1) if  ==1 odd : even.

    **Getting the ith bit from the right side.
    n = 5, i = 2;
    steps:
    1)Create a mask. By doing, mask = 1<<i;
    2)n&(1<<i)>0?1:0.

    **Setting a ith Bit.
    n = 5 || 000101
    You can perform a OR operation.
    steps
    1)Create a mask=(1<<i)
    2) ans = n|mask;


    **Clearing a bit from a ith position
    steps:
    1) create a mask.
    2)mask = ~(mask)
    3) ans = n&mask.

    **Updating a ith bit.
    steps:
    1)Clear the ith bit.
    2)clearedibtno = n&mask;
    3)ans = clearedNiyno|(value<<i);

*/
