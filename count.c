#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int countup(int numbers){
    int max = numbers + 1;
    int i;
    
    for (int i=0; i < max; i++){
        printf("%d\n",i);
    }
    printf("You printed %d numbers\n", max);
}


//int horizontal(int numbers){
  //  for (; numbers>0; numbers--){
    //    printf("x");
    //}
//}


//int square(int numbers){
    
 //   int couunt = numbers;
 //   for (; couunt>0; couunt--){
 //       horizontal(numbers);
 ////       printf("\n");
 //   }
    

    
//}


int countdown(int numbers){
    int max = numbers;
    int i;
    for (; max>0; max--){
        printf("%d\n",max);
    }
    printf("You printed %d numbers\n", numbers);
}

int run(){
    char upordown[8];
    
    printf("Count Up or Down?\n");
    scanf("%s",&upordown);
    if (upordown[0] == 'U' || upordown[0] == 'u'){
        int number;
        printf("How many numbers do you want to print up?\n");
        scanf("%d",&number);
        countup(number);
    }
    else if (upordown[0] == 'D' || upordown[0] == 'd'){
        int number2;
        printf("How many numbers do you want to print down?\n");
        scanf("%d",&number2);
        countdown(number2);
        
    }
    else {
        
        printf("invalid");
        return 0;
    }
}

int main(){
    square(15);
    //run();
    return 0;
}
