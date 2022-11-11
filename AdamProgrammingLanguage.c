// Name: Abiodun Oluwapelumi Amos

// Matric Number: 230865




#include <stdio.h>
#include <string.h>


int main(){
    int testCase = 3;
    int stepCount;
    char AdamInput[100];

    printf("User input is between Capital U and Capital D\nSuch that U means hands Up, D means Hands down\n\n");
    
   // Main loop for the amount of test case we have.
    for(int i = 0; i < testCase; i++){
      printf("Enter Adams's input: ");
      scanf("%s", AdamInput);

      // Checking the length of the user input
      int len = strlen(AdamInput);

      // Looping through the input to check for the stated condition.
      for(int j = 0; j<len; j++){
         if(AdamInput[j] == 'U'){
            stepCount += 1;
         }else{
            printf("Adam took %d Steps before falling\n\n", stepCount);
            stepCount = 0;
            break;
         }
      }
    }

    return 0;
}
