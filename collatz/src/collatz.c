#include <stdio.h>
#include <stdlib.h>
 long long int collatz(int lower, int upper){
  long long int N; 
  long long int max=1;
  long long int length;
    if(lower<=0 || upper<=0){
        printf("0\n");
        return 0;}
    else{
        for(N=lower; N<=upper; N++){
            length=1;
            while(N!=1){
                if ((N%2) == 0){
                    length++;
                    N=N/2;
                }
                else{
                    length++;
                    N=3*N+1;  
                }
            }
        if(length>max){
            max=length;
        }
        }
    }
    return max;
}
int main(int argc, char **argv){
 if (argc != 3) {
  printf("Program needs to be called as `./prog lower upper`\n");  
 return 1;
 }
 int lower = atoll(argv[1]);
 int upper = atoll(argv[2]);
 printf("maximum: %lld\n", collatz(lower, upper) );
 return 0;
}