#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 
/* 
int main()
{
    // This is printf function

    printf("Hello World!\n"); 
    printf("%d\n", 32); // d = interger
    printf("%id\n", 32); // id = large interger
    printf("%f\n", 32); // f = float
    printf("%if\n", 32); // if = large float
    printf("%c\n", 'a'); // c = character (char)
    printf("%s\n" ,"Hello World!"); // s= strings
    printf("%x\n", 16); // x = hex
   
    return 0;
}

*/


/* 
int main()
{
    // BASIC DATA TYPE & VARIABLES 

 // 4 Basic data types = int, float, char, and double

 // Rules - (variables must not begin with must not begin with a number)
 //       - (dollar sign $, not allowed, only letter, digits, and unscore _)
 //       - (language keywords cannot be used as names)

    int age = 21; // int = data type, age = variable
    float Pie = 3.14 ;
    double big_pie = 3.142232232323232;
    char my_char = 'a'; // store a character in a single quote ('')

 // Check the printf function above
    printf(" My age = %d\n", age); 
    printf(" My pie = %f\n", Pie); 
    printf(" My big pie = %f\n", big_pie); 
    printf(" My character = %c\n", my_char); 

    return 0;
}
*/

/*
                *NOTE
   - TWO VARIABLES, GLOBAL & LOCAL VARIABLES
   - GLOBAL VARIABLES USED OUTSIDE, LOCAL USED INSIDE THE FUNCTIONS
   - GLOBAL VARIABLE IS INITIALIZE BY 0

   eg

    int age = Global variable because is outside the function ( int main())

    int main()
    {
        int age = Local variable because is inside the funtion 
    }
 */

/* 
int main()
{

    // SIMPLE MATH & OPERATORS

     + (Additrional)
     - (Substration)
     * (Multiplication)
     / (Division)
     % (Modulus) 
 

 // Addional
 int a, b; // int a=15 b=25; (Other Way)
 a = 10;
 b = 4;
 int plus;
 plus = a + b;
 
 // Subtraction
 int c= 10, d= 4; // int c=10, d=4, times = c+d; (other way)
 int minus = c - d;

 // Multiplication
 int e= 10, f= 4, times = e * f;

 // Divisions
 int g= 10, h= 4, divide = g / h;

 // division with float, or remainder (%f)
 int i= 10, j= 4;
 float divide_remainder; 
 divide_remainder = i / j; 

 //Modulus
 int k= 10, l= 4;
 float remainder;
 remainder = k % l;
 

 printf("10 + 4 = %d\n", plus); // Answer 14
 printf("10 - 4 = %d\n", minus); // Answer 6
 printf("10 * 4 = %d\n", times); // Answer 40
 printf("10 / 4 = %d\n", divide); // Answer  2
 printf("10 / 4 = %f\n", divide_remainder); // Answer 2,0000
 printf("10 R 4 = %d\n", remainder); // Answer 0

 return 0;
}
*/

/* 
int main()
{
    //  IF & ELSE CONDITION/STATEMENT

    int age;
    printf("Enter the age :");
    scanf("%d/n", & age); // & Is the address of operator/ value

    if(age > 18) {
    printf("You are an adult");
        
    } else if( age==18){
    printf("Your 18");

    } 

    else {
    printf("Your a Teenager");

    }

   /  if(age==18) {
    printf( "You are 18");

    }

    if ( age < 18) {
    printf("Your a Teenager");
        
    } /


    return 0;
}
*/

/* 
int main ()
{
    //TERNARY OPERATOR
    //Code in one line
    //More quick that else if

    int a=30, b=20;
    int c;
    c = (a > b) ? b : a;
    printf("equal to : %d\n", c);

    return 0;
}
*/

/* 
int main()
{
    //SWITCH STATEMENT/CONDITION
    //Constant condition
     int age;
     age=40;

    switch (age) 
    {
        case 90:
        printf("You are a great great-grandpa/ma");
        break;
        case 70:
        printf("You are great-grandpa/ma");
        break;
        case 50:
        printf("You are a grandpa/ma");
        break;
        case 40:
        printf("You are father/mother");
        break;
        case 20:
        printf("You are a Husband/wife");
        break;
        case 10:
        printf("You are a son/daughter");
        break;
        case 0:
        printf("You are a baby");
        break;
        default:
        printf("No Data");

    }
    return 0;
}
*/

/* 
int main()
{
    //WHILE ,DO & FOR LOOP

    //Do loop
    int a=0;

    do
    {
        printf("Value of a : %d\n", a);
        a++; // Increment can like = a=a+1;

    } 
    while (a<10); // a>10, wont exercute, because a which is 0 is less than 10

    printf("************ Do loop above - While loop below ****************\n" );
    
    //While Loop
    int b=0;

    while (b<10) // b>10, wont exercute, because b which is 0 is less than 10
    
    {
        printf("Value of b : %d\n", b);
        b=b+1; // Increment can like b++;

    }
    printf("------------- While loop above - For loop below --------------\n" );
    
    //For Loop
    for (int c =0; c < 10; c++ /*c=c+1/) {
        printf("Value of c : %d\n", c);
    }
    return 0;
}
*/

/* 
// FUNCTIONS
void BasicDataType() // void=type BasicDataType=given name (type arg)
{
    // CHECK BASIC DATA TYPE & VARIABLES
    //BASIC DATA TYPE & VARIABLES INSIDE FUCTION
    //TWO VARIABLES, GLOBAL & LOCAL VARIABLES
    //GLOBAL VARIABLES USED OUTSIDE, LOCAL USED INSIDE THE FUNCTIONS

    int age = 21;   //Remember int age is example of LOCAL VARIABLE 
    float Pie = 3.14 ; // LOCAL VARIABLE are inside the fuction ( int main())
    double big_pie = 3.142232232323232;
    char my_char = 'a'; 
 
    printf(" My age = %d\n", age); 
    printf(" My pie = %f\n", Pie); 
    printf(" My big pie = %f\n", big_pie); 
    printf(" My character = %c\n", my_char); 

}

int main()
{
    BasicDataType(); // FUCTION FROM ABOVE
    BasicDataType(); 

    // FUCTION WILL BE  PRINTED TWICE

    return 0;
 
}
*/

/*  
void Addition(int a, int b) // Fuctions with argument (inside peremeter, ther's arg)
{
    // CHECK SIMPLE MATH & OPERATORS
    // SIMPLE MATH & OPERATORS INSIDE FUNCTION

 int plus = a + b; 
 printf("Equal to : %d\n", plus);

}

int main()
{ 
    Addition(25,26); // Egual to : 51

    //Also you can input your number

    //int c,d;
    //printf("Add Two Numbers\n");
    //printf("Input One:");
    //scanf("%d", &c);

    //printf("Input Two:");
    //scanf("%d", &d);


    //Addition(c,d); 
 
}
*/


/* 

int Multiple(int a, int b) // Void=returned nothing, Int=returned something
{
    //SIMPLE MATH & OPERATORS ON MULTIPLECATION
    //CHECK SIMPLE MATH & OPERATORS ON MULTIPLECATION

  return (a * b);

 // printf("Equal to : %d\n", return);

}

int main()
{ 
    int c,d;
    printf("Multiple Two Numbers\n");
    printf("Input One:");
    scanf("%d", &c);

    printf("Input Two:");
    scanf("%d", &d);

    int times = Multiple(c,d); 

    printf("Equal to : %d\n", times); 

  //Also 

    //int times = Multiple(5,4); 
    //printf("Equal to : %d\n", times); // Egual to : 20

    return 0;
}
*/

/* 
int main()
{
     //ARRAY
    //INDEX OF AN ARRAY START AT 0

    printf("------------- Array Number below --------------\n" ); // Ingnore, i used it to seperate codes

  // Array on numbers
    int ArrayNumbers [9] = {10,20,30,40,50,60,70,80,90,}; // square brackets indicate an array
    int PointArray= ArrayNumbers[5]; // 5 is an example index number of chosen on (0-9) array created
    printf("Chosen Number of Array: %d\n", PointArray); // answer is 60, because 60 it lies on index 5 

    printf("************ Array Character below ****************\n" );// ingnore
 
  // Array on Characters

    char ArrayCharacters [6] = {'a','b','c','d','e','f'};
    int TakeArray= ArrayCharacters[5]; 
    printf("Chosen Character of Array : %c\n", TakeArray); // Remember %c is a printf fuction of a char(character)

    printf("************ Array Character below ****************\n" );// ingnore
    
    for(int a=0; a<6;a++) {

        //printf("------------- Array on For loop below --------------\n" );

        printf("Chosen Number [%d] of Array = %d\n", a , ArrayNumbers[a]);

       // printf("------------- Array on For loop below --------------\n" );

        printf("Chosen Character [%d] of Array = %c\n", a , ArrayCharacters[a]);

    }

}
*/

/* 
int main()
{
    //MULTI DIMETIONAL ARRAY
    //CONTAIN ROWS AND COLUMNS

    int ArrayNumbers [3][4] = {
        //3 row, 4 column
        
        //column
        {2,4,6,8}, //row 1
        {1,3,5,7}, //row 2
        {4,6,3,2}, //row 3
    };

    int x=0, y=0;

   // while (x<3,y<4)
    
    //{
    //    printf("ArrayNumbers [%d][%d] = %d\n",x,y, ArrayNumbers[x][y]);
    //   x=x+1; // Increment can like x++;
    //    y=y+1; // Increment can like y++;
    //
    //
    //}


    for (int x =0; x<3; x++){ 
        for (int y =0; y<4; y++)

        printf("ArrayNumbers [%d][%d] = %d\n",x,y, ArrayNumbers[x][y]);
        
    }
} */

//    PONTER
// POINTER IS VARIABLES THAT STORE ADDRESS ANOTHER VARIABLES
//BASICS OF POINTERS

int main ()
{
    int a; // variable a with data type int
    int *p; //pointer pointing an int // value at adrress 
    p = &a; //p is pointing address a
    a = 5;

    printf("value of p = %d\n",p);   //2293564
    printf("value of &a = %d\n", &a); //2293564
    printf("value of &p = %d\n", &p); //2293560
    printf("value of *p = %d\n", *p); //5 //derefrencing

    //WORKING WITH POINTERS
    
    int a; //integer
    int *p; //pointer to integer
    char c; //chararcter
    char *p0; //pointer to character
    double d; //double 
    double *p1; //pointer to double 
    

}