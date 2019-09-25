#include<stdio.h> /*ensure print work or not*/
#include <math.h> /*preprocessor detective. check pow worls correctly or not*/
#include <unistd.h> 
#include <string.h>

//void message(); /*declaring that there is a func that will not take any argument and wil not return any value. thats the meaning of void*/
//int calsum();

// int main()
// {
//     int p,n;
//     float r,si; /*decleration necessary before usage*/
//     printf("Enter values of p,n,r");
//     scanf("%d %d %f",&p,&n,&r); /*its a input type*/

//     /* formulae */

//     si = p*n*r/100;

//     printf("%f",si);
// }

// int main()
// {
//     int num;

//     printf("enter a number:");
//     scanf("%d", &num);

//     printf("your num is %d", num);
// }

// int main()
// {
//     int a;
//     a = pow(3,3);
//     printf("%d",a);
// }

// int main()
// {
//     int a, b ;
// a = -3 - - 3 ;
// b = -3 - - ( - 3 ) ;
// printf ( "a = %d b = %d", a, b ) ;
// }

// int main()
// {
//     int num;

//     printf("enter a number");
//     scanf("%d", &num);

//     if(num<=23)
//         printf("yur number is less than 23");
// }

// int main()
// {
//     int pr, qt;
//     float newpr;

//     printf("Enter Quantity \n");
//     scanf("%d", &qt);
//     printf("Enter the price \n");
//     scanf("%d", &pr);

//     printf("Quantity bought %d \n", qt);
//     printf("Original Price to pay %d \n", pr);

//     if(pr>1000)
//         newpr = pr*0.1;
//         printf("discouted price to pay is %f \n", newpr);

//     if(pr < 1000)
//         printf("nishta discount, purchase more for discount");
// }

// int main()
// {
//     int this_year, year_joined, time_duration;

//     this_year = 2019;
//     printf("Enter the year joined: \n");
//     scanf("%d", &year_joined);

//     time_duration = this_year - year_joined;

//     if( time_duration > 3)
//         printf("Congrats, U get 2500 bonus");
    
//     if( time_duration < 3)
//         printf("Wait for bonus bro u ll get it soon, work af");

// }

// int main()
// {
//     int basic_salary;
//     float gross_salary, HRA, DA;

//     printf("Enter the basic salary \n");
//     scanf("%d", &basic_salary);

//     if( basic_salary < 1500)
//         {
//             HRA = 0.1* basic_salary;
//             DA = 0.9* basic_salary;
//             gross_salary = HRA + DA + basic_salary;
//             printf("Nigga your Salary is %f \n", gross_salary);
//         }
    
//     if ( basic_salary >= 1500)
//         {
//             HRA = 500;
//             DA = 0.98* basic_salary;
//             gross_salary = HRA + DA + basic_salary;
//             printf("Your Salary sir is %f \n", gross_salary);
//         }
        
// }

// int main()
// {
//     int num;

//     printf("Kuch bhi daal yaar");
//     scanf("%d", &num);

//     if( num < 0)
//         printf("negative value kyun di? \n");

//     else
//         {
//             if( num <= 10)
//                 printf("10 se kam kyun daali ? \n");

//             else 
//                 printf("10 se bari kyun daali? \n");
//         }
// }

// EXAMPLE 2.5 FROM LET US C //

// int main()
// {
//     int age;
//     char sex, status;

//     printf("Enter the gender: \n");
//     scanf("%c", &sex);
//     printf("Enter the marital status: \n");
//     scanf("%c", &status);
//     printf("Enter the age \n");
//     scanf("%d", &age);

//     if( status == 'm')
//         printf("You get the insurance \n");

//     else
//         { 
//             if( sex == 'M')
//                 {
//                     if(age > 30)
//                         printf("You get the insurance \n");
//                     else
//                         printf("Bare ho kr aao \n");
                   
//                 }
//             else 
//                 {
//                     if(age > 25)
//                         printf("babe, u get the insurance \n");
//                     else
//                         printf("Bachion ki jagah nahi hai \n");
//                 }
//         }
// }

// int main()
// {
//     int p,n,count;
//     float r,si;

//     count=1;

//     while(count<=3)
//     {
//         printf("\n Enter");
//         scanf("%d%d%f",&p,&n,&r);
//         si= p*n*r/100;
//         printf("SI= %f", si);

//         count = count + 1;
//     }
// }

// int main()
// {
//     int i = 5;
//     while (i>=0)
//     {
//         printf("\ndimagh ka dahi\n");
//         i = i-1;

//     }
// }

// int main()
// {
//     float a=0.5;
//     while(a<=9.0)
//     {
//         printf("\nlldjdha...");
//         printf("afhahfauhfh");

//         a = a+0.25;
//     }
// }

// int main( )
// {
// int i = 1 ;
// while ( i <= 10 )
// {
// printf ( "%d\n", i ) ;
// i = i + 1 ;
// }
// }

// int main ( )
// {
// int p, n, count ;
// float r, si ;
// for ( count = 1 ; count <= 3 ; count = count + 1 )
// {
// printf ( "Enter values of p, n, and r " ) ;
// scanf ( "%d %d %f", &p, &n, &r ) ;
// si = p * n * r / 100 ;
// printf ( "Simple Interest = Rs.%f\n", si ) ;
// }
// }

// int main( )
// {
//     int num, i ;
//     printf ( "Enter a number " ) ;
//     scanf ( "%d", &num ) ;
//     i = 2 ;
//     while ( i <= num - 1 )
//     {
//         if ( num % i == 0 )
//         {
//         printf ( "Not a prime number" ) ;
//         break ;
//     }
//         i++ ;
//     }
//     if ( i == num )
// printf ( "Prime number" ) ;
// }

// int main( )
// {
//     message( ) ;
//     return 0;
// }
// void message( )
// {
//      printf ( "\nCan't imagine life without C" ) ;
//     // main( ) ;
// }

// int main ()
// {
//     int a,b,c,sum;

//     printf("give threee val");
//     scanf("%d%d%d",&a,&b,&c);

//     sum = calsum(a,b,c);
//     printf("Sum is %d", sum);
// }

// int calsum(x,y,z)
// int x,y,z;
// {
//     int d;

//     d = x+y+z;
//     return(d);
// }

// int main( )
// {
//     int i = 3, *j, **k ;
//     j = &i ;
//     k = &j ;
//     printf ( "\nAddress of i = %u", i ) ;
//     printf ( "\nAddress of i = %u", j ) ;
//     printf ( "\nAddress of i = %u", *k ) ;
//     printf ( "\nAddress of j = %u", &j ) ;
//     printf ( "\nAddress of j = %u", k ) ;
//     printf ( "\nAddress of k = %u", &k ) ;
//     printf ( "\nValue of j = %u", j ) ;
//     printf ( "\nValue of k = %u", k ) ;
//     printf ( "\nValue of i = %d", i ) ;
//     printf ( "\nValue of i = %d", * ( &i ) ) ;
//     printf ( "\nValue of i = %d", *j ) ;
//     printf ( "\nValue of i = %d", **k ) ;
// }

// int main()
// {
//     int radius;
//     float area,perimeter;

//     printf("enter the value of the radii: ");
//     scanf("%d",&radius);
//     calculation(radius,&area,&perimeter);

//     printf("\n Area is = %f", area);
//     printf("\n Perimeter is= %f", perimeter);
// }
// int calculation(int r, float *a, float*p)
// {
//     *a = 3.14*r*r;
//     *p = 2*3.14*r;
// }
// int factorial(); /*declaration of func zaroori*/

// int main()
// {
//     int a,fact;

//     printf("Enter the value:");
//     scanf("%d",&a);

//     fact = factorial(a);
//     printf("Value is %d", fact);
// }
// int factorial(int x)
// {
//     int f=1, i;

//     for(i=x;i>=1;i--)
//         f = f*i;
//     return(f);
// }

// int main()
// {
//     int avg, sum = 0 ;
//     int i ;
//     int marks[30] ; /* array declaration */
//     for ( i = 0 ; i <= 29 ; i++ )
//     {
//     printf ( "\nEnter marks " ) ;
//     scanf ( "%d", &marks[i] ) ; /* store data in array */
//     }
//     for ( i = 0 ; i <= 29 ; i++ )
//     sum = sum + marks[i] ; /* read data from an array*/
//     avg = sum / 30 ;
//     printf ( "\nAverage marks = %d", avg ) ;
// }

// int main( )
// {
// int stud[4][2] ;
// int i, j ;
// for ( i = 0 ; i <= 3 ; i++ )
// {
// printf ( "\n Enter roll no. and marks" ) ;
// scanf ( "%d %d", &stud[i][0], &stud[i][1] ) ;
// }
// for ( i = 0 ; i <= 3 ; i++ )
// printf ( "\n%d %d", stud[i][0], stud[i][1] ) ;
// }
// 

// int main( )
// {
//     int b = 50 ;


//     b = b ^ 12 ;
//     printf ( "\n%d", b ) ; /* this will print 62 */
    
//     b = b ^ 12 ;
//     printf ( "\n%d", b ) ; /* this will print 50 */
// }