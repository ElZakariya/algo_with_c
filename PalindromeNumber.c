#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool isPalindrome(int x) {

    if( x < 0)
        return false;
    int original = x;
    int reverse = 0;

    while(x !=0){
        int dg = x % 10;
        reverse = reverse * 10 + dg;
        x/=10;
    }
    return original == reverse;
    
}

bool isPalindrome_faster(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int reverse = 0;

    while (x > reverse) {
        reverse = reverse * 10 + x % 10;
        x /= 10;
    }

    return x == reverse || x == reverse / 10;
}

int main(){

}