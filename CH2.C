 // TYPE DECLARATION INSTRUCTIONS

/* #include <stdio.h>
int main() {
    int age = 20;
    int oldage = age;
    int newage = oldage +5;
    printf("my age is %d\n", newage);
    return 0;
}
 */

 // VALID DECLARATION 
 //int age1, age2, age3;
 //age1 = age2 = age3 = 22;

 //INVALID 
 //int a1 = a2 = a3 = 22';
  
  //ARITHMETIC INSTRUCTIONAS

 /* #include <stdio.h>
 int main() {
    int a = 4, b=2, c = 5;

    //VALID 
    //a = b + c; 

    //INVALID
    //a + b = c;
    
    printf("%d \n", a%b);
    printf("%d", b%c);
    return 0;
 } */

 //TYPE CONVERSION

 /* #include <stdio.h>
 int main() {
    
    printf("sum of 2 & 3 : %d", 2+3);
    printf("sum of 5 & 8 : %f", 5.0 +8);
   printf("sum of 4 & 9 : %f", 4.0 + 9.0);

    return 0;
 } */

 //ASSOCIATIVITY

 /* #include <stdio.h>
 int main()  {
    printf(" output : %d", 5+2/2-5);

    return 0;
 } */ 

 // RELATIONAL OPERATOR 
  
 /* #include <stdio.h>
 int main () { 
    printf("%d \n", 4==4); 
    printf("%d \n", 4<=4); 
    printf("%d \n", 4>4);
    
    printf("%d \n", 5<=9); 
    printf("%d \n", 5==7); 
    printf("%d \n", 4!=3); 

    printf("%d \n", 5!=5); 
    
    return 0;
 } */

 //LOGICAL OPERATOR

 /* #include <stdio.h>

 int main() {

    printf("%d \n", 2<5 && 7>=7); 
    printf("%d \n", 7<7 && 5<3); 

    printf("%d \n", 7<5 || 5<7); 
    printf("%d \n", !(4<8));

    printf("%d \n", !(3<4 && 5>3)); 

    return 0;
 } */

 // ASSIGNMENT OPERATORS
/* 
  #include <stdio.h>
  int main() {
    int a = 10;
    a += 10;
    printf("a + 10 = %d \n", a);
    a -= 10;
    printf("a - 10 = %d \n", a);
    a *= 10;
    printf("a * 10 = %d \n", a);
    a /= 10;
    printf("a / 10 = %d \n", a);
    a %= 10;
    printf("a % 10 = %d \n", a);

    return 0;
 
} */

 // PPOWER FUNCTION USE 

/* #include <stdio.h>
#include <math.h>
int main()
{
    int a = 2;
    a = (int)pow(a,56); //using power function 
   
    printf("answer is : %d \n", a);

  return 0;
} */

// QUESTION PRACTISE 


/* #include <stdio.h>

int main() {
    int sunday = 1;
    int snowing = 0;
    
    printf("Today is : %d \n", sunday && snowing);
    return 0;
} */


/* #include <stdio.h>

int main() {
    int monday = 1;
    int raining = 0;
    
    printf("Today is : %d \n", monday || raining);
    return 0;
} */

/* #include <stdio.h>
 int main() {
    int a;
    int b;

    printf("Enter Two Numbers : \n");//to tell user enter two numbers
    scanf("%d %d", &a, &b);//a and b ki value input lene kai liye 
    printf("The Result is : %d \n", (a>9 && b<100));//comndition yaha check hogi aur result (0 ya 1) print hoga

    return 0;
} */

// AVERAGE OF THREE NUMBERS
/* #include <stdio.h>
int main() {
   float a = 3.0;
   float b = 5.0;
   float c = 45.0;

   printf("Average is : %f \n", (a+b+c)/3.0);
   return 0;
} */

//CHECK IF GIVEN CHARACTER IS DIGIT OR NOT?
/* #include <stdio.h>
int main() {
    char ch;

    printf("Enter the character : ");
    scanf("%c", &ch);
    int isDigit = (ch >= '0' && ch <='9');
    printf("Is it a digit? (1 = Yes, 0 = no): %d\n", isDigit);

    return 0;

} */
