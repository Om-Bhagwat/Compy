
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


    **Clear a Range of Last i Bits.
    ~0 = -1;
    Left shift (-1) by i places.
    mask = (-1<<i)
    n=n&mask;



    **clearing a range of bits from i to j.
    break it into two parts.
    part a = (~0)<<(j+1);
    part b = (1<<i)-1
    mask = a|b;
    answer = n&mask;

    **Setbits in an range from i to j.
    steps:
    clear the bits from i to j;
    Left shift M by i;
    Then do OR;


    Finding the number of setBits;
    Approach-1: let N=13 || 1101; while(n>0){(n>>1)&1 count++} cout<<count;
    Approach-2: ;while(n>0){(n&(n-1) count++} cout<<count; Effectively removes last setBit.
    Approach-3:  _builtin_popcount(n)


    **Decimal to binary
    int ans = 0;
    int p =1;
    while(n>0){
        int last_bit = (n&1);
        ans= ans+p*last_bit;
        p=p*10;
        n=n>>1;
    }


*/
