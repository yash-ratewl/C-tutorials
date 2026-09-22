
//LOOPS

 /* #include <stdio.h>
int main() {
    for(int i=1; i<=20; i =i+2) { 
        printf("Hello world \n");
    }
        return 0;
    } 
 */
    //PRINT THE NUMBERS FROM 0 TO 10 AND FOR LOOP

   
    /* #include <stdio.h>
    int main() {
        for(int i = 0; i <=10; i = i+1) {
            printf("%d \n", i);
        }
        return 0;
    }
     */

         //OPERATOR

   /*  #include <stdio.h>
    int main() {
      //increment operator
      //++i (pre increment)
      //i++ (post increment)

      int i = 1;
      // printf(n", i++); // use, then increase
         printf("%d \n", i);

      // print("%d \n', ++i); // increase then use 
        printf("%d \n", i);
        return 0;
}
 */
    /* #include <stdio.h>
    int main() {
      //decrement operator 
      //--i pre decrement
      //i-- post operator

      int i = 1;
      // printf(n", i--); // use, then decrease
         printf("%d \n", i);

      // print("%d \n', --i); // decrease then use 
        printf("%d \n", i);
        return 0;
} */


/* #include <stdio.h>
    int main() {
       for(float i = 1.0; i <=5.0; i++) 
        printf("%f \n", i);
        return 0;
    }
     
 for(char ch = 'a'; ch<='z'; ch++) {
        printf("%c \n", ch);
        return 0;
    } */


    //  WHILE LOOP

   /*  #include <stdio.h>
    int main (){
        int i = 1;
        while (i <= 15) 
        {
         printf("Hello World \n ");
         i++;
        }
        
    } */

    //PRINT THE NUMBERS FROM 0 TO N ,IF N IS GIVEN BY USER 

    /* #include <stdio.h>
    int main() {
        int n;
        printf("Enter the Number : " );
        scanf("%d", &n);
        
        int i = 0;
        wwhile(i<=n) {
            printf("%d \n", i);
            i++;
        }
        return 0;
    } */

   /*  for(int i = 1; i<=n; i++) {
        printf("%d \n", i);
    
    return 0;
    } */

    //DO-WHILE LOOP
/* 
    #include <stdio.h>
    int main() {
        int i = 5;
    do{ 
        printf("%d \n", i);
        i++;
    } while(i<=5);

    return 0;
    } */

    //PRINT THE SUM OF FIRST N NATURAL NUMBERS.
  //ALSO, PRINT THEM IN REVERSE.

   /* #include <stdio.h>

   int main() {
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i<=n; i++) {
        sum = sum +i; //sum =+i
    }

    printf("sum is %d \n", sum);

    for(int i=n; i>=1; i--) {
        printf("%d \n", i);
    }

    return 0;
   }

 */

   //PRINT THE TABLE OF 2 AND 42

  /*  #include <stdio.h>
   int main () {
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++) {
        printf("%d \n", n*i);
    }

    return 0;
   } */

   // BREAK STATEMENT(KEEP TAKING NUMBER AS INPUT FROM USER UNTIL USER ENTERS AN ODD NUMBER.)

   /*  #include <stdio.h>
   int main () {
    int n;
    do {
        printf("enter the number : ");
    scanf("%d", &n);
    printf("%d \n", n)

      if(n % 2 !=0 ){
        break;
      }
      while(1);
      printf("thankyou");
    }
    return 0;
}
 */

   // KEEP TAKING NUMBER AS INPUT FROM USER UNTIL USER ENTERS A NUMBER WHICH IS MULTIPLE OF 7


 /*   #include <stdio.h>
   int main () {
    int n;
    do {
        printf("enter the number : ");
    scanf("%d", &n);
    printf("%d \n", n)

    if(n % 7 == 0) {
        break;
    }

    while(1);
      printf("thankyou \n");
    }
    return 0;
} */

   //CONTINUE STATEMENT( PRINT ALL NUMBERS FROM 1 TO 10 EXCEPT FOR 6)


  /*    #include <stdio.h>
   int main () {
   
    for(int n = 1; i<=10; i++)
    {
        if(n == 6) {
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
} */

   // PRINT ALL THE ODD NUMBERS FROM 5 TO 50.


   /*  #include <stdio.h>
   int main () {
   
    for(int n = 5; i<=50; i++)
    if(n % 2 == 0) {
        continue;
    }

      printf("thankyou \n");
      return 0;
    }
 */


   //PRINT THE FACTIRIAL O NUMBER GIVEN BY USER 
/* 
    #include <stdio.h>
   int main () {
    int n;
    printf("enter the number :")
    scanf("%d", &n);
    int = fact = 1
    for(int i = 1; i<=n; i++){
          fact = fact*i;
    }

    printf("final factorial is %d", fact);
     return 0;

}
 */
  

  //PRINT REVERSE OF THE TABLE OF NUMBER N.

   /* #include <stdio.h>
   int main () {
    int n;
    printf("enter the number :")
    scanf("%d", &n);

     for(int i = 1; i>=1; i--) {
        printf("%d\n", n*i);
     }
     return 0;
    } */

