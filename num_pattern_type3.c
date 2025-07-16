// Right Angle Triangle with Repeated Number per Row

#include <stdio.h>

int func(int i, int j);
int func(int i,int j){
   do{
       printf("%d",i);
       i++;
   }while(i<j);
    
    return 0;
}
int main() {
    int i=0,j=1;
    for(int j=1; j<5;){
        func(i,j);printf("\n");
        j++;
    }
    return 0;
}