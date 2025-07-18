#include <stdio.h>

int main() {
    int i, j;
    for(i=1;i<7;i++){
        
        for(int j=1;j<=i;j++){
           printf("%d",i);
            //  goto End;
           // j++;
        }
       // i++;
        
      // End: j=j+1;
        printf("\n");
    }
    
    
    return 0;
}