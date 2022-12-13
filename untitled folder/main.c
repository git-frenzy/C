#include <stdio.

int main() {
    int x, y, prime;
    for(x=2; x<50; x++){
        if(x==2){
            prime = x;
            printf("%d", prime);
        } else{
            for (y = 2; y < x; y++) {
                if(y%x == 0){
                    break;
                } else{
                    prime =x;
                    printf("%d", prime);
                }
            }
        }
    }


}
