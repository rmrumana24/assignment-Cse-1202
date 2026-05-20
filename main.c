
#include<stdio.h>
#include "rumana.h"
int main(){
    int a[10]={10,5,6,32,6,2,1,9,23,6};
    int size=sizeof(a)/sizeof(a[0]);
    max(a,size);

    min(a,size);

    prime(13);

    odd(13);

    even(10);

    int sum = sumofarray(a,size);
    printf("The sum is = %d\n",sum);

    int sumofdigit = digitsum(2345);
    printf("The sum of digits of %d is = %d\n",2345,sumofdigit);

    int rev=reverse(123);
    printf("Reversed: %d\n", rev);

    palindrome(323);

    dtob(3);

    btod(11);

    dtoo(10);

    dtoh(999);
    return 0;
}
