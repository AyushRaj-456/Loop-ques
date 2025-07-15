// E1 triangle pattern of numbers

#include <stdio.h>

int function(int i, int j);

int function(int i,int j){

while(i<j){

printf("%d", i);

i++;

}

return 0;

}

int main() {

int i=1,j=1;

for(j=1; j<7;j++){

function(i,j);printf("\n");

}
    
return 0;

}