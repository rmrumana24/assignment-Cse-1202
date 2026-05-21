#include<stdio.h>
#include<math.h>
void max(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    printf("The maximum value of the array is: %d\n", max);
}

void min(int arr[],int n){
    int min=__INT_MAX__;
    for(int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];
    }
    printf("The minimum value of the array is: %d\n", min);
}

void prime(int n){
    int flag=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1) printf("YES, the number is a prime number\n");
    else printf("NO, the number is not a prime number\n");
}

void odd(int n){
    if(n%2==0) printf("The number is NOT ODD\n");
    else printf("The number is ODD\n");
}

void even(int n){
    if(n%2==0) printf("The number is EVEN\n");
    else printf("The number is NOT EVEN\n");
}

int sumofarray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int digitsum(int n){
    int sum=0;
    while(n!=0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

int reverse(int n){
    int rev=0;
    while(n!=0){
        rev*=10;
        rev+=(n%10);
        n/=10;
    }
    return rev;
}

void palindrome(int n){
    int nonrev=n;
    int rev=0;
    while(n!=0){
        rev*=10;
        rev+=(n%10);
        n/=10;
    }
    if(nonrev==rev) printf("Palindrome\n");
    else printf("Not Palindrome\n");
}

void dtob(int n){
    int binary[64];
    int i=0;
    if (n == 0) { printf("0"); return; }
    while(n>0){
        binary[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
}

void btod(int n){
    int decimal=0;
    int i=1;
    while(n!=0){
        decimal+=(n%10)*i;
        n/=10;
        i*=2;
    }
    printf("\n%d\n",decimal);
}

void dtoo(int n){
    int octal=0;
    int i=1;
    while(n!=0){
        octal+=(n%8)*i;
        n/=8;
        i*=10;
    }
    printf("%d\n",octal);
}

void dtoh(int n){
    if (n == 0) { printf("0"); return; }
    char hex[] = "0123456789ABCDEF";
    char hexadecimal[100];
    int i=0;
    while(n!=0){
        hexadecimal[i]=hex[n%16];
        n/=16;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%c",hexadecimal[j]);
    }
}