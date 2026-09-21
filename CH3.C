/* #include<stdio.h>
int main() { 
    int age;
    printf("Entet the age : ");
    scanf("%d", &age);

    if(age > 18) {
        printf("adult \n");
        printf(" he can vote \n");
        printf("He can Drive \n");
 }
    else { 
        printf("Not adult \n");
     }
    printf("Thank you \n");
    return 0;
} */

/* #include<stdio.h>
int main() { 
    int age;
    printf("Entet the age : ");
    scanf("%d", &age);

    if(age > 18) {
        printf("adult \n");
        printf(" he can vote \n");
        printf("He can Drive \n");
    }
    else if(age > 13 && age < 18) {
        printf("Teenager \n");
    }
 
    else { 
        printf("Not adult \n");
     }
    printf("Thank you \n");
    return 0;
} */

/* #include<stdio.h>
int main() { 
    int age;
    printf("Entet the age : ");
    scanf("%d", &age);

    age >= 18 ? printf("adult \n") : printf("not adult \n");

    return 0;
} */


/* #include<stdio.h>
int main() { 
    int day;
    printf("Entet day(1 - 7) : ");
    scanf("%d", &day);

    switch (day) {
        case 1 : printf("monday \n");
        break;
        case 2 : printf("tuesday \n");
        break;
        case 3 : printf("wednesday \n");
        break;
        case 4 : printf("thirsday \n");
        break;
        case 5 : printf("friday \n");
        break;
        case 6 : printf("saturday \n");
        break;
        case 7 : printf("sunday \n");
        break;
        default : printf("not a valid day! \n");
    }

    return 0;
} */


/* #include <stdio.h>
int main() {
    int number;
    printf("enter number :");
    scanf("%d", number);

    if(number >= 0) {
        printf("positive \n");
        if(number % 2 == 0) { 
            printf("even \n");
        }
        else{
            printf("odd \n");
        }
    } 
    else{
        printf("negative \n");
    }
    return 0;
} */

//CHECK IF A STUDENT PASSED OR FAILED.

/* #include <stdio.h>
int main() {
    int marks;
    printf("enter marks(0-100) : ");
    scanf("%d", marks);

    if(marks >= 0 && marks <= 30) {
        printf(" fail \n");
    } else if(marks > 30 && marks <= 100) 
    { 
        printf("pass \n");
    } 
    else{ 
        printf("wrong marks");
    }

    // by ternary operator -> marks <= 30 ? printf("FAIL \n") : printf("PASS \n");
    return 0;
} */

// PROGRAM TO GIVE GRADES TO A STUDENT

/* 
#include <stdio.h>
int main() {
    int marks;
     printf("enter marks(0-100) : ");
    scanf("%d", marks);

    if(marks < 30) {
        printf("C \n");}
        else if(marks >= 30 && marks <= 70) {
            printf("B \n");  
        } else if(marks >=70 && marks <= 90){
            printf("A+ \n");
        }
        else{ 
            printf("Wrong Marks")
        }
        return 0;
    }
     */

     // TO FIND IF A CHARACTER ENTERED BY USER IS UPPER 

      /* #include <stdio.h>
      int main() {
       char ch;
        printf("Enter Ch :");
        scanf("%c", ch);

        if(ch >= 'A' && ch <= 'Z'); 
        {
            printf("UPPER CASE \n");
        } 
        else if(ch >= 'a' && ch <= 'z') {
            printf("lower case \n");
        }
        else {
            printf("not english letter \n");
        }
         return 0;

      }
       */

       // TO CHECK IF A GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT

       #include <stdio.h>
       int main() {

       }

       // TO CHECK IF THE GIVEN NUMBER IS A NATURAL NUMBER 

       #include <stdio.h>
       int main() {

       }