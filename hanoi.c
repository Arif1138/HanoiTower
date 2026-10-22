#include <stdio.h>

void hanoi(int n, int i,int j){

    if(n>0){
        hanoi(n-1,i,6-i-j);
        printf("%d -> %d\n",i,j);
        hanoi(n-1,6-i-j,j);
    }

}

int main(){
    int number_of_disc = 3;
    int source=1;
    int target=3;

    printf("Moves for disc %d",number_of_disc);
    hanoi(number_of_disc,source,target );
}