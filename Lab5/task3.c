#include<stdio.h>

int isPrime (int x) {
	for (int i=2; i < x; i++){
        if(x%i == 0)
            return 0;
        else
            return 1;
    }
}

int hasFive (int n) {

    while(n != 0) {
        int curr_digit = n % 10;
        if (curr_digit == 5)
            return 1;
        n/=10;
    }

    return 0;
}

int main() {

    int i = 2;
    int twin = 0;
    do {
        if(isPrime(i)){
            i+=2;
            if(isPrime(i))
                twin+=1;
            else
                i-=1;            
        }else
            i++;        
    }while(twin<60);
    printf("The 60th twin primes are (%i,%i)", i-2, i);
	return 0;
}
