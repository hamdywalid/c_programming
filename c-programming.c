// Online C compiler to run C program online

/* int main() {
    // Write C code here
    printf("Hello world\n");
     char temp;
     temp = 25;
    printf("temp= %d\n",temp);
    printf("%d",100);
    
    printf("%i",100);
    
    return 0;
}  */

/* int main ()
{
     char temp;
     temp = 35;
    printf("%d\n",temp);
    printf("%d",100);

} */

/* int main ()
{
     int x=10;
     int y=20;
     int z;
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d",z);

} */
/*int main()
{
    int x=10;
    int y=20;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("%d\n%d\n",x,y);
    printf("%d_%d\n",x,y);
    printf("x+y=%d\n",x+y);
} */

/*  int main ()
{
     int x=10;
     int y=20;
     int z=424;
     int h=577;
    printf("x= %d\n",x);
    printf("y= %d\n",y);
    printf("%d   %d",z,h);
  

}  */

/*   int main ()
{
    float pi1 = 3.14159265359;
    double pi2 =3.14159265359;
    double pi3 =3.15;
    printf("%.4f",pi1);
    printf("\n%f",pi2);
    printf("\n%f",pi3);
    printf("\n%g",pi3);
    
    printf("\n%i",100);
    
    
} */
/*int main ()
{
     char letter= 'A';
    printf("%C",letter);
    printf("\n%d",letter);
    
} */

/* int main ()
{
     int x =65 ;
    printf("%C",x);
    printf("\n%d",x);
    
}  */

/*int main()
{
 int x = 65 ;
 printf("%c",x);
 int y = 67 ;
 printf("\n%c",y);
} */

/*int main()
{
 char letter1='A';
 char letter2='H'; 
 char letter3='M'; 
 char letter4='E'; 
 char letter5='D'; 
 printf("%c%c%c%c%c",letter1,letter2,letter3,letter4,letter5);
}*/

/*  int main ()
{
     int x;
    scanf("%d",&x);
    printf("\n%d",x);
    printf("\n%c",x);
}   */


 /*int main ()
{
    char x;
    scanf("%c",&x);
    printf("\n%d",x);
    printf("\n%c",x);
} */

   /*int main ()   //task
{
    int x;
    printf("Enter the value of x");
    scanf("%d",&x);
    printf("the value of x = %d",x);
    
}  */

/*int main ()
{
     int x;
     printf("enter the value of x=");
     scanf("%d",&x);
    printf("Ascii=%d\n",x);
    printf("Letter=%c",x);
} */


// Online C compiler to run C program online
//#include <stdio.h>


 /*int main()  {
 
unsigned char x= 255;
unsigned char y =256 ;
unsigned char z=257;
unsigned char t=258;
  
  
  printf("\n%d",x);
  printf("\n%d",y);
  printf("\n%d",z);
  printf("\n%d",t);
  
 
}*/
/*int main()
{
 
unsigned char x=127;
x=x+1;
signed char y=127;  
y=y+1;
  printf("\n%d",x);
  printf("\n%d",y);
  
unsigned char p=128;
p=p+1;
signed char r=128;  
r=r+1;
  printf("\n%d",p);
  printf("\n%d",r);

 
}*/
/* int main() {
    // Write C code here
    char x=255;       // -128+127
    char y=256;      // out of range
    char z=257;     // 256+1
    char h=258;    // 256+2
    
   unsigned char x1=255;   // 128+127 
   unsigned char y1=256;
  unsigned  char z1=257;
  unsigned  char h1=258;
    
    //x=x+1;
    //x=x+2;  
    
    printf("\n%d",x);
    printf("\n%d",y);
    printf("\n%d",z);
    printf("\n%d",h);
    
    
    printf("\n");
    printf("\n");
    
    printf("\n%d",x1);
    printf("\n%d",y1);
    printf("\n%d",z1);
    printf("\n%d",h1);
  

    return 0;
}  */

/*int main()
{
 
unsigned char x=255;
signed char y=255;  
unsigned char z=-20;
signed char t=-20;
signed char h=128;
  printf("\n%d",x);
  printf("\n%d",y);
  printf("\n%d",z);
  printf("\n%d",t);
  printf("\n%d",h);

 
}*/

/*int main() {
    signed char x=-127;
  unsigned char y=-127;
    
    printf("%d\n",x);
    printf("%d\n",y);
    
    signed char h=-128;
  unsigned char t=-128;
    
    printf("%d\n",h);
    printf("%d\n",t);

 
}*/
/*int main ()  {
int a= 8;
int x= 2;
x= a++; // put a on x,increase a ,
  
//x=++a; //increase a , put a on x
  
  printf("\n%d",a);
  printf("\n%d",x);
 
} */


/*int main()  {
 
int a= 8;
int b= 8;
   ++a;
   --b;
  printf("\n%d",a);
  printf("\n%d",b);
 
} */ 


/*  int main()  {
 
int a= 8;
int x =2 ;
  x= a++;
  
  printf("\n%d",a);
  printf("\n%d",x);
 
}  */

/*int main()  {
 
int x= 8;
int y =2 ;
int z;
int t;
  z = x==y;
  t = x!=y;
  
  
  printf("\n%d",z);
  printf("\n%d",t);
  
 
}  */


/*  int main()  {
 
int x= 8;
int y =2 ;
int z;
int t;
  z = x<=y;
  t = x>=y;
  
  
  printf("\n%d",z);
  printf("\n%d",t);
  
 
}  */


/*  int main () {
    
    char x =8;
    x =x  && 5;
    printf("\n%d",x);
    
    char y =1;
    y =y && -6;
    printf("\n%d",y);
    
    char z =4;
    z =z && 0;
    printf("\n%d",z);
}     */


/* int main () {
    
    char x =3;   //0000  0011
    x =x  & 2;   //0000  0010  &
    printf("\n%d",x);
  
}  */

/* int main () {
    
    char x =3;   //0000  0011
    x =x  & 2;   //0000  0010  &
    printf("\n%d",x);
  
} */

/* int main () {
    
    char x =3;   //0000  0011
    x =x  & 2;   //0000  0010  &
    printf("\n%d",x);
  
}  */
/*int main () {
    
    char x =3;        
    char x1 =7;
    char y =25;
    x =x  | 0;     //3
    x1 =x1  | 7;   //
    y =y | 10;
    printf("\n%d",x); 
    printf("\n%d",x1);
    printf("\n%d",y);
  
}*/

/*int main () {
    
    char x =3;        
    char z =7;
    char y =25;
    x =x  || 0;     //3
    z =z  || 7;   //
    y =y || 10;
    printf("\n%d",x); 
    printf("\n%d",z);
    printf("\n%d",y);
  
}*/

/*  int main () {
    
unsigned char x =3;  //0000 0011
unsigned char y =0;  //1111 1100
y=~x;  // one complement

    printf("\n%d",y);
}  */

/*int main () {
    
    char x =3;        
    char z ;
    z =~x;   
    printf("\n%d",x);  //3   0000 0011
    printf("\n%d",z);  //-5  1111 1100    -128+124
    
   unsigned char x1 =3;        
   unsigned char z1 ;
    z1 =~x1;   
    printf("\n%d",x1);  //3   0000 0011
    printf("\n%d",z1);  //252 1111 1100    128+124
  
}

/* int main () {
    unsigned char x =4;  //0000 0100
              //right shift >>
x=x>>1;     //0000  0010
printf("%d",x);

unsigned char y =5;  //0000 0101
         //left shift <<
y=y<<1;     //0000  1010

printf("\n%d",y);
 }  */

/*int main () {
    unsigned char x =10;  //0000 1010
              //right shift >>
x=x>>1;     //0000  0101
printf("%d",x);

unsigned char y =10;  //0000 1010
         //left shift <<
y=y<<1;     //0001  0100

printf("\n%d",y);
 }*/

/*int main () {
    signed char x =-10;  //1111 0110
              //right shift >>
x=x>>1;      //1111 1011    =-5
printf("%d",x);

signed char y =-10;  //1111 0110
           //left shift <<
y=y<<1;   //1110  1100     =-20

printf("\n%d",y);
 } */ 

/*int main () {
    
signed char x =-1; // 1111 1111
              //right shift >>
x=x>>1;     
printf("%d",x);

signed char y =-5; // 1111 1011
             //right shift >>
y=y>>1;     // 1111 1101

printf("\n%d",y);
}  */

/* int main (){
  int x=5;
  int y=7;
  int h=6;
  int z=9;
  y+=x;
  z-=h;
  printf("\n%d",y);
  printf("\n%d",z);
  
}  */

/* int main ()  {

  int y=7;     //  0000 0111
  int z=9;    // 0000 1001
  y<<=1;     //  0000 1110
  z>>=1;    // 0000   0100

  printf("\n%d",y);
  printf("\n%d",z);
} */

/*int main ()  {

  int y=7;     //  0000 0111
  int z=9;    // 0000 1001
  y*=2;     //  0000 1110
  z/=1;    // 0000   0100

  printf("\n%d",y);
  printf("\n%d",z);
}*/

/*int main ()  {

  char y=8;     // 0000 0100
  char z=15;    // 0000 1001

y=y>>1;    // 4
y=y<<1;   //  8 =8   even
z=z>>1;  //7    
z=z<<1;  //14  not= 15   odd

  printf("\n%d",y);
  printf("\n%d",z);
}*/

/*int main ()  {

  char y=8;     // 0000 0100
  char z=15;    // 0000 1001

y=y>>1;   // 8/2
y=y>>1;  //4/2

z=z<<1;  // 15*2
z=z<<1;  // 30*2
  printf("\n%d",y);
  printf("\n%d",z);
}*/

/*int main ()  {

  char y=8;     // 0000 0100
  char z=15;    // 0000 1001

y=y>>2;   // 8/4  = 2
y=y>>1;  //2/2 =1

z=z<<2;  // 15*4 =60
z=z<<1;  // 60*2 = 120
  printf("\n%d",y);
  printf("\n%d",z);
}*/






































////////////////////////////////////////////////////// lec 2
//////////////////////////////////////////////////






































/*int main() {
int x = 5 ;
if(x== 5)
{
 printf("hello world");   
}
}*/

/* int main() {
int x = 5 ;
if(x=4)
{
 printf("hello world");
}
 printf("\n%d",x);
} */

 /*int main() {
int x = 5 ;
if(x==4)
{
 printf("hello world");
}
 printf("\n%d",x);
}*/

/*int main() {
int x = 5 ;
if(x=0)
{
 printf("hello world");
}
 printf("\n%d",x);
}*/

/* int main() {
int x  ;
if(4)
{
 printf("hello world");
}
 printf("\n%d",x);
} */
/*int main() {
int x = 5 ;
if(x=4)
{
 printf("case_1 is true\n");
 printf("%d\n",x);
}
if(x=-8)
{
 printf("case_2 is true\n");
 printf("%d\n",x);
}
if(printf("case_3 is true\n"))
{
 printf("true");
 printf("\n%d",x);
}
 printf("\n%d",x);
}*/

/*int main() {
int x = 5 ;
if(x==4)
 printf("case_1 is true\n");
 printf("%d\n",x);
}*/
/*int main() {
int x = 5 ;
if(x==5)
 printf("case_1 is true\n");
 printf("%d\n",x);
}*/

/*int main() {
int x = 5 ;
if((x<10) && (x>1))
{
 printf("hello world");   
}
}*/
/*int main() {
int x = 5 ;
if((x==56)&&(x>2))
{
 printf("case_1 is true\n");
 printf("%d\n",x);
}
 return 0;
}*/

/* int main() {
 int x;  
scanf("%d",&x);
printf("\nthe value of x : %d",x);

if((x<10) && (x>1))
{
 printf("\nhello world");   
} */

/*int main() {
int x ;
 scanf("%d",&x);   
if((x<10) || (x>1))
{
 printf("hello world");   
}
printf("\nhello wgrhrhyrld");
}*/


/*  int main() {
int x = 5 ;
if((x==5) && (printf("hello world") ))
{
 printf("\n%d",x);   
}
if((x==7) && (printf("hello world") ))
{
 printf("\n%d",x);   
}
}  */

/* int main() {
int x =7 ;
 // int x =5 ; 
if((x==5) || (printf("hello world") ))       // (x=5)
{
 printf("\n%d",x);   
}
if( (printf("\nhello world")) ||(x==5) )
{
 printf("\n%d",x);   
}
}  */   


/* int main() {
int x =7 ;
 // int x =5 ;   (x=5)
if((x=5) || (printf("hello world") ))       // (x=5)
{
 printf("\n%d",x);   
}
}  */  

/*int main() {
int x =7 ;
 // int x =5 ;   (x=5)
if((x==5) || (printf("hello world") ))       // (x=5)
{
 printf("\n%d",x);   
}
}*/

/*int main() {
int x = 5 ;
if(x== 6)
{
 printf("hello world");   
}
else 
{
 printf("hello egypt");   
}
}*/

/*int main () {
  int x;
 printf("enter your grades: ");
 scanf ("\n%d",&x);
 if ((x>=0)&&(x<=100))
 {
  if ((x>=0) && ( x<=49))       // (x=5)
  {
  printf("fail");   
  }
  else if ((x>=50) && ( x<=64))       // (x=5)
  {
  printf("pass");   
  }
  else if ((x>=65) && ( x<=74))       // (x=5)
  {
  printf("good");   
  }
  else if ((x>=75) && ( x<=84))       // (x=5)
  {
  printf("very good");   
  }
  else if ((x>=85) && ( x<=100))       // (x=5)
  {
  printf("excellent");   
  }
 }
}*/

/*int main() {

  int x  ;   
  printf("please enter your grades: ");
  scanf("%d",&x);
  if ((x<=60) && (x>=50))
{
 printf("fail:%d",x);   
 
} 
else if ((x<=75) && (x>=60))
{
 printf("good:%d",x);   
 
} 
else if ((x<=90) && (x>=75))
{
 printf("very good:%d",x);   
} 
else if ((x<=100) && (x>=90))
{
 printf("excellent:%d",x);   
} 
}*/


/* int main() {
int x = 4 ;
(x== 4)?printf("true\n"):printf("false\n");

int y= 7 ;
(y==5)?printf("true\n"):printf("false\n");

int p= 7 ;
(p=455)?printf("true\n"):printf("false\n");

int a= 4 ;
(7)?printf("T\n"):printf("F\n");

int h= 45 ;
(0)?printf("T\n"):printf("F\n");

int z=75 ;
(1)?printf("T\n"):printf("F\n");
} */

/* int main() {
int x = 7 ;
(x%2)? printf("odd\n"):printf("even\n");
// odd=1 ; even=0
} */

 /* int main() {
int x = 25 ;
int y      ;
int z      ;
y = (x>5)? 100:200;  //100=1
z = (x<5)? 100:200;  //200=0
printf("%d\n",y);
printf("%d",z);
} */

/* int main () {
 int x = 25 ;
 switch(x)
 {
  case(15):
  printf("y=15\n");
  break;
  
  case(25):
  printf("y=25\n");
  break;
  
  case(35):
  printf("y=35\n");
  break;
 }
}*/

/*int x = 25 ;
 switch(x)
 {
  case(15):
  printf("y=15\n");
  
  case(25):
  printf("y=25\n");
  
  case(35):
  printf("y=35\n");
  
  case(45):
  printf("y=45\n");
  
 }
}   */

/*int main () {
int x = 100;
 switch(x)
 {
  default:
  printf("error\n"); 
  break;  
  case(15):
  printf("y=15\n");
  break;
  case(25):
  printf("y=25\n");
  break;
  case(35):
  printf("y=35\n");
  break;
  case(45):
  printf("y=45\n");
  break;
 }
}*/










/*int main() {
  int x = 35;
  switch(x)
  {
   case(20):
   printf("Hello world_1");
   break;
   case(25):
   printf("Hello world_2");
   break;
   case(60):
   printf("Hello world_3");
   break;
   default:
   printf("Hello world_4");
  } 
}  */

/* int main() {
 int x = 35;
   switch(x)
   {
   default:
   printf("Hello world_4\n");   
   case(85):
   printf("Hello world_1\n");
   break;
   case(25):
   printf("Hello world_2\n");
   break;
   case(60):
   printf("Hello world_3\n");
   break;
   }
 }  */
 
/*  int main() {
// char letter ='A';
 //char letter ='B';
  switch(letter)
  {
   case('A'):
   printf("Hello world_1");
   break;
   case(66):
   printf("Hello world_2");
   break;
   case('C'):
   printf("Hello world_3");
   break;
   default:
   printf("Hello world_4");
  } 
}    */

/* int main () {
    int i;
    for(i=0;i<10;i++)
    {
     printf("loop_%d\n",i);
     printf("Hello world\n");
    }
 } */
 
 /*int main () {
    int i;
    for(i=0;i<10;i++);
    {
     printf("loop_%d\n",i);
    }
 } */
 
/*int main ()
{
    int i;
    printf("start loop\n"); 
     
    for(i=0;i<10;i++)
    {
     printf("loop_%d\n",i);
     printf("Hello world\n");
     printf("\n"); 
    }
    printf("end loop");
}*/

 /* int main () {
    int j;
    for(j=0;j<10;j++)
    {
     if (j>=2) //23456789
     printf("loop_%d\n",j);
    }
 }*/

/*int main () {
    int j;
    for(j=0;j<10;j++)
    {
     if (j>=2); //0123456789
     printf("loop_%d\n",j);
    }
 }*/

/* int main () {
    int i;
    for(i=0;i<10;i++)
    {
     if(i==5)
     break;
   printf("loop_%d\n",i);
    }
} */

/*int main () {
    int i;
    for(i=0;i<10;i++)
    {
     printf("loop_%d\n",i);   
     if(i==5)
     break;
    }
} */
 /* int main () {
    int j;
    for(j=0;j<10;j++)
    {
     if ((j>2) && ( j<7))
     printf("loop_%d\n",j);
    }
 } */
 /*int main () {
    int i;
    for(i=0;i<10;i++)
    {
     if(i==7) //0123456789 
     continue;
   printf("loop_%d\n",i);
    }
} */
/* int main () {
    int i;
    for(i=0;i<10;i++)
    {
     if((i==7) || (i==9))
     continue;
   printf("loop_%d\n",i);
    }
} */

/*int main () {
    int i;
    for(i=0;i<10;i++)
    {
     if((i==2) || (i==4) || (i==6) || (i==8))
     continue;
   printf("loop_%d\n",i);
    }
} */

/* int main () {
    int i;
    for(i=0;i<10;i++)
    {
     if(i/7)
     continue;
   printf("loop_%d\n",i);
    }
} */

/*int main () {
   int i=10;
    for(;5; )
    {
   printf("loop_%d\n",i);
    }
}  */

/*int main () {
   int i,j;
    for(i=0,j=10;(i<10)&&(j>5);i++,j-- )
    {
   printf("loop_%d\n",i);
    }
} */

/*int main () {
    int i=0;
    while(i<20)
    {
     printf("loop_i_%d\n",i); 
     i++;
    }
} */

/*int main () {
   int i=200;
   while(i>=40)
    {
          printf("loop_%d\n",i);
           i--;
    }
} */
/* int main () {
    int j=5;
    while(j<15)
    {
     printf("loop_j%d\n",j); 
     j++;
    }
} */

/*int main () {
   int i=0;
   while(i<100)
    {
          printf("loop_%d\n",i);
           i++;     //0:49
           if(i==50)   
           break;
    }
} 
*/

 /*int main () {
    int v=3;
    while(0)
    {
     printf("loop_v_%d\n",v); 
     v++;
    }
}*/

 /* int main () {
    int v=3;
    while(v<20)
    {
     if(v==16)
     {
      break;   
     }
     printf("loop_v_%d\n",v); 
     v++;
    }
} */


/*int main () {
    i nt v=-3;
    while(v<20)
    {
     if(v==16)
     {
      break;   
     }
     printf("loop_v_%d\n",v); 
     v++;
    }
}*/
/*int main () {
  int x=15;
  do{
      printf("%d\n",x);
      x--;
    }

    while (x>10);
    {
   printf("%d\n",x);
    }
    return 0;
} */


















































//////////////////////////////////////////////////////////////////////////////// lec 3












































/*int main() {
float z =5/2; //2
float z =5.0/2.0;  //2.5
    printf("%g",z);
}*/

/*int main(){
    float x=5;
    int   y=2;
    float   z;
    z=x/y;
   // printf("%f",z);  //2.50000
   // printf("%g",z);   //2.5
    printf("%d",z);
}*/

/*int main(){
    float x=5;
    int   y=3;
    float   z;
    z=x/y;
  //  printf("%f",z);  //1.666667
  // printf("%g",z);   //1.66667
  //  printf("%d",z);
}*/

/*int main() {
float z =5.0/2.0; 
    printf("%g",z);  //2.50000
   // printf("%f",z); //2.5
}*/


/*int main() {
float x = 10;
float y = 5;
int z =x/y;  //0
    printf("%g",z);
}
*/
/*int main() {
int x = 10;
int y = 5;
float z =x/y; //2
    printf("%g",z);
}*/

/*int main() {
int x = 10;
float y = 4;
float z =x/y; 
    printf("%g",z);
}*/

/*int main() {
float x = 10;
int y = 4;
float z =x/y; 
    printf("%g",z);
}*/

/*int main() {
    float z = (float)5/2; //2.5
    printf("%g",z);
}*/

/*int main() {
//// goto = forbidden
    printf("1\n");
    printf("2\n");
    printf("3\n");
    goto hamdy;
    printf("4\n");
    printf("5\n");
    printf("6\n");
    hamdy:
    printf("7\n");
    printf("8\n");
    printf("9\n");
    printf("10\n");
}*/

/*int add(int,int);
 
int main() {
int result=0;
result=add(5,2);
printf("%d",result);
return 0;
} 
int add(int x,int y)
{
    int z=x+y;
    return z;
}*/

/*float substract (float, float);
int main (){
float error =0;
error=substract(80.5,4.8);
printf("%g",error);
return 0;
} 
float  substract (float x, float y){
    return x/y;    
}
*/
 /*control ();
   //void control ();
   ////void control (void);
int main (){
    control();
}
control()
 {
     printf("hello world");
 } */


/* control ();
// void control();
int main (){
    control();
}
control()
 {   
     int z = 20;
     printf("%d\n",z);
     printf("hello world");
 }*/
 
/*add(int,int,int);

int main() {
    add(5,13,4);
  }

add(int x,int y,int h)
{
    int z  = x +y +h ;
    printf("%d\n",z); 
}*/

/*
int add(int,int,int);
int main (){
    int z=0;
    z=add(5,13,7);
    printf("%d\n",z);
    return 0;
}
int add(int x,int y,int u)
 {   
     int z = x + y + u;
     return z;
    
 }*/

/* int add(int,int,int);

int main() {
    int z=0;
    z=add(5,13,4);
    return 0;
  }

 int add(int x,int y,int h)
 {
    int z  = x +y +h ;
    return z;
 } */

/*int add(int,int,int);
//void add(int,int,int);
int main() {
    int m = 20, n = 45,f = 74, z = 0;
    z=add(m,n,f);
    printf("%d\n",z);
    return 0;
}

int add(int x,int y,int h)
//void add(int x,int y,int h)
{
    int z  = x +y +h ;
    return z;
}*/

/*int add(int,int,int);

int main() {
  int result =0;
  result = add(20,45,75);
  printf("%d\n",result);
  return 0;
}

int add(int x,int y,int h)
{
     int z  = x +y +h ;
     return z;
}*/

/*int add(int,int,int);
//void add(int,int,int);
int main() {
    
    printf("%d\n",add(10,77,475));
    return 0;
}

int add(int x,int y,int h)
//void add(int x,int y,int h)
{
    int z  = x +y +h ;
    return z;
}*/


/*int add(int,int,int);

int main() {
  printf("%d\n",add(20,45,75));
  return 0;
}

int add(int x,int y,int h)
{
     int z = x +y +h ;
     return z;
}*/

/*int add(int,int,int);

int main() {
  printf("%d\n",add(20,45,75));
  return 0;
}

int add(int x,int y,int h)
  {
     return x +y +h ;
  }*/

/*//void add(int,int,int);
int add(int,int,int);

int main() {
  int  result1  =0;
  result1 = add(20,45,75);
  printf("%d\n",result1);
  return 0;
}

int add(int x,int y,int z);
//void add(int x ,int y ,int z )
  {   
       int  result1 = x +y +z ;
      return result1 ;
  }*/


/*void add(int,int,int);

int main() {
  int  result  =0;
  result = add(20,45,75);
  printf("%d\n",add(20,45,75));
  return 0;
}

void add(int x ,int y ,int z )
  {
  }*/
  
/*int add(void);

int main() {

  printf("HELLO WORLD");
   
}*/

/*int add(void)
  {
    return 50;  
  }*/
  
/* int main() {
int x;
  return 22;  
}

 void main() {
int x;
  
}*/

/*void test ();
//void test (void);
//int test (void);
int main (){
    test();
    return 0;
}
void test ()
//void test (void)
//int test (void)
{
    int x =20;
    printf("%d\n",x);
}
*/






/*void test (void);

int main (){
    printf("HELLO WORLD\n");
    test();
    printf(" C\n ");
    return 0;
}
void test(void)
{
    int x =20;
    printf("%d\n",x);
}*/

/*int test( int x, int y);

int main(){
    int x;
    int y;
    printf("enter two numbers");
     scanf("%d %d",&x,&y);
     
    printf("the max is:%d",test(x,y));
     
   
    return 0;
}
int test( int x, int y)
{
if (x>y){
  return x;
}
  else
 return y;

}*/


/*void average(float,int,int,int);

int main(){
    int x,y,z,s;
    printf("enter four numbers");
     scanf("%d %d %d %d",&x,&y,&z,&s);
     average(x,y,z,s);
   }

void average(float x ,int y ,int z,int s )
{
 float result= (x+y+z+s)/4.0;
 printf("the average is:%f",result); 
}*/

/*void add(int,int);

int main (){
    int m=20,n=30;
    add(20,30);
 } 
 void add(int x,int y)
 {
    //int z = x+y;
    //printf("%d",z);
    printf("%d",x+y);
 }*/   
 
/*void add(int,int);
void sub(int,int);
void mul(int,int);
void Div(int,int);

int main (){
    printf("start code\n");
    add(10,50);
    printf("end code");
    return 0;
 } 
 
 void add(int x,int y)
 {
    printf("add:");
    printf("%d\n",x+y);
    sub(86,45);
 }
 
 void sub(int f,int g)
 {  
    printf("sub:");
    printf("%d\n",f+g);
    mul(75,20);
 }
 void mul(int d,int q)
 {  
    printf("mul:");
    printf("%d\n",d*q);
    Div(250,50);
 }
 void Div(int l,int k)
 {  
    printf("Div:");
    printf("%d\n",l/k);
 }*/
 //////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
//////////////////
/* void check (int);

int main (){
    
 int num_1=10;
 check (num_1);
} 
 void check (int x)
 {
  x%2 ? printf("odd:%d",x):printf("even:%d",x); 
 }*/


/*
int v;   // .bss       //global variable
 int t = 45; //.data   //global variable
 int w = 45; //.data  //global variable
int add(int,int);
int main (){
    int result ;
    result= add(20,30);    //local variable
     printf("the result: %d\n",result);
    printf("global variable w:%d\n",w);   //global variable
     return 0;
}
int add (int x ,int y) 
{
  int z = x+y;          //local variable
  printf("local variable X:%d\n",x);    //local variable 
  printf("local variable Y:%d\n",y);    //local variable
  printf("local variable Z:%d\n",z);    //local variable
  printf("global variable T:%d\n",t);  //global variable
    return z;
}
  */
























////////////////////////////////////////////////////////////////////////////////lec4
























/* void check(int);
int main()
{
    // Write C code here
    int num=12;
    check(num);
    return 0;
}

void check(int x)
{
    if(x>5)
    return;
    printf("\n this massage will not show up if x>5\n");
}*/

/* void check(int);
int main()
{
    // Write C code here
    int num=2;
    check(num);
    return 0;
}

void check(int x)
{
    if(x>5)
    return;
    printf("\n this massage will not show up if x>5\n");
}*/

//#include <stdio.h>

 
/*int add(int , int);
int main()
{

    int result=0;
    result=add(5,6);
    printf("%d\n",result);
    printf("hello");
    return 0;
}

int add(int x, int y)
{
   int z= x+y;
    printf("hamdy\n");
    return z;  // stop 
    printf("WORLD");
}*/


/*void add(int , int);
int main()
{
    // Write C code here
    int result=0;
    add(5,6);
    printf("hello");
}

void add(int x, int y)
{
   int z= x+y;
    printf("hamdy\n");
   return z;
    printf("WORLD");
}*/

/*int add(int , int);
int main()
{
    // Write C code here
    int result=0;
    result=add(5,6);
    printf("%d\n", result);
    printf("hello");
    return 0;
}

int add(int x, int y)
{
   int z= x+y;
    printf("hamdy\n");
   return z;
    printf("WORLD");
}*/

/* void check(int);
int main()
{
    // Write C code here
    int num=12;
    check(num);
    return 0;
}



void check(int x)
{   
    for(;;)
    {
    if(x>5)
    break;
    }
    printf("\n this massage will not show up if x>5\n");
}*/

/*void check(int);
int main()
{
    // Write C code here
    int num=12;
    check(num);
    return 0;
}

void check(int x)
{   
    for(;;)
    {
    if(x>5)
    break; //stop loop only
    }
    printf("\n this massage will not show up if x>5\n");
}*/

/*void add(int , int);
int main()
{
    
    printf("before\n");
  
    add(5,6);
   
    printf("hello");
    return 0;
}

void add(int x, int y)
{
   int z= x+y;
   for (;;)
   {
     if(z>10)
     printf("hamdy\n");
     break;
     printf("yyyyyyyyyyyy\n");
   }
   
    printf("WORLD\n");
    
}*/

/*void add(int , int);
int main()
{
    
    printf("before\n");
  
    add(5,6);
   
    printf("hello");
    return 0;
}

void add(int x, int y)
{
   int z= x+y;
   for (;;)
   {
     if(z>10)
     printf("hamdy\n");
     return;
   }
   
    printf("WORLD\n");
    
}*/



/*void loop(void);
int main()
{
    loop();
    return 0;
}

void loop(void)
{   
    printf("hi");
    loop();
}*/

/*int recursion(int);
int main()
{
   int result;
   result=recursion(3);
   printf("%d",result);
   return 0;
}

int recursion(int x)
{   
   if(x==1) 
   {
    return 1;
   }
    return x*recursion(x-1);
}*/


/*int v;   // .bss       //global variable
 int t = 45; //.data   //global variable
 int w = 45; //.data  //global variable
int add(int,int);
int main (){
    int result ;
    result= add(20,30);    //local variable
    printf("the result: %d\n",result);
    printf("global variable w:%d\n",w);   //global variable
    return 0;
}
int add (int x ,int y) 
{
  int z = x+y;          //local variable
  printf("local variable X:%d\n",x);    //local variable 
  printf("local variable Y:%d\n",y);    //local variable
  printf("local variable Z:%d\n",z);    //local variable
  printf("global variable T:%d\n",t);  //global variable
    return z;
}*/

/*void add(void);
int g=10;
int main()
{
    int x=20;
    printf("local variable x:%d\n",x);
    add();
    printf("global variable g:%d\n",g);
    return 0;
}
void add()
{  
   printf("global variable g:%d\n",g); 
   g=200;
}*/

/*void add(void);
int x=10;
int main()
{
    int x=20;
    printf("local variable x:%d\n",x);
    add();
    printf("local  variable g:%d\n",x);
    return 0;
}
void add()
{  
   int x=50;
   printf(" variable g:%d\n",x); 
}*/

/*void add(void);
int x=10;
int main()
{
    int x=20;
    printf("local variable x:%d\n",x);
    add();
    printf("local  variable x:%d\n",x);
    return 0;
}
void add()
{  
   
   printf("global variable x:%d\n",x); 
}*/




/*void increment(void);
int main()
{
  increment(); //1
  increment(); //1
  increment(); //1
  increment(); //1
    return 0;
}
void increment(void)
{  
   int z=0;
   z++;
   printf("z:%d\n",z); 
}*/


/*void increment(void);
int z=0;
int main()
{
  increment(); //1
  increment(); //2
  increment(); //3
  increment(); //4
    return 0;
}
void increment(void)
{  
   z++;
   printf("z:%d\n",z); 
}*/

/*void increment(void);
int main()
{
  increment(); //1
  increment(); //1
  increment(); //1
  increment(); //1
  printf("z:%d\n",z); //out of time
    return 0;
}
void increment(void)
{  
   static int z=0;  //.data lifetime
   z++;
   printf("z:%d\n",z); 
}*/

/*
//////////// main.c
#include <stdio.h>
#include <stdlib.h>
//#include "hamdy.h"
int main()
{
    test(5,6);
    return 0;
}
//////////// hamdy.c
void test (int x ,int y)
{
    int z=x+y;
    printf("%d",z);
}

//////////// hamdy.h
#ifndef HAMDY_H_INCLUDED
#define HAMDY_H_INCLUDED

void test(int, int)

#endif // HAMDY_H_INCLUDED
*/


/*int main()
{
    int z;
    z=printf("hello");
    printf("%d\n",z);
    return 0;
}*/

/*int main()
{
    char z=20;
    printf("%d\n",&z); //adress in ram
    printf("%d\n",z); //value in ram
    return 0;
}*/


/*int main () {
    int z =8987;
    int  *p=&z;
    printf("%d\n",*p);
    printf("%d\n",z);
    printf("%d\n",p);
    printf("%d\n",&z);
}*/

/*int main()
{
    char  x=20;
    char *p=&x;
    *p=50;
    printf("%d\n",*p); //50
    printf("%d\n",&x); //1973616919
    printf("%d\n",p); //1973616919
    printf("%d\n",x); //50
}*/

/*int main()
{
    char  x=20;
    int y;
    x=50;
    y=70;
    printf("%d\n",&y); //adress in ram
    return 0;
}*/

/*int main()
{
    char  x=20;
    char *p=&x;
    printf("%d\n",p); //adress  of x in ram
    printf("%d\n",*p); //20
    return 0;
}*/

/*int main()
{
    char  x=20;
    char *p=&x;
    p=50;
    printf("%d\n",p); //adress  of x in ram
    printf("%d\n",*p); //20
    return 0;
}*/

/*int main()
{
    char  x=256;
    char *p=&x;
     *p=255;
    //*p=0;
    printf("%d\n",x); 
    return 0;
}*/ 

/*int main()
{
    char x=20;
    int y;
    y=&x;
    printf("%d\n",&y); //adress in ram
    printf("%d\n",x); //value in ram
    return 0;
}*/
/*int main()
{
    char x=20 ;
    char *p;
    *p=&x;   
     printf("%d\n",&p); 
     printf("%d\n",x); 
    return 0;
}*/

/*int main()
{
    char x=20 ;
    int *y=&x; //pointer
     printf("%d\n",&x); // adress x
     printf("%d\n",x); //20
     printf("%d\n",y); //adress x
     printf("%d\n",&y); //adress y
    y=70;       //adress in ram
    printf("%d\n",y); //change value from adress in ram
    printf("%d\n",&x);
    printf("%d\n",&y);
    printf("%d\n",x); //value in ram
    return 0;
}*/



/*int main()
{
int x=256;
short int*p=&x;
*p=0;
printf("%d",x);
    return 0;
}*/

/*int main()
{
int x=257;
char *p=&x;
*p=0; 
printf("%d",x);
    return 0;
}*/

/*int main()
{
int x=255;
char *p=&x;
*p=1; 
printf("%d\n",*p);
printf("%d",x);
    return 0;
}*/


/*int main()
{
int x=257;
char *p=&x;
*p=1; 
printf("%d\n",x);
printf("%d",*p);
    return 0;
}*/

/*int main()
{
int x=256;
char *p=&x; // 0000 0000  ==0
            // 0000 0001  ==256
*p=1; 
printf("%d\n",x); // 0000 0001  ==1
                  // 0000 0001  ==256
                  
printf("%d",*p);  // 0000 0001  ==1
    return 0;   
}*/

/*int main()
{
int x=258;
char *p=&x; // 0000 0010  ==2
            // 0000 0001  ==256
*p=0; 
printf("%d\n",*p);  // 0000 0000  ==0

printf("%d\n",x); // 0000 0000  ==1
                  // 0000 0001  ==256
    return 0;   
}*/

/*int main()
{
int x=258;
char *p=&x; // 0000 0010  ==2
            // 0000 0001  ==256

printf("%d\n",*p); // 0000 0010  ==2
    return 0;   
}*/

/*int main()
{
int x=255;
char *p=&x; // 1111 1111  ==255
*p=3;
printf("%d\n",*p); // 0000 0011  ==3
    return 0;   
}*/

/*

int main() {
 char x=10;
 char *p_1=&x;
 char **p_2=&p_1;
 
printf("value of x: %d\n",x);
printf("address of x: %d\n",p_1);
printf("value of x: %d\n",*p_1);

printf("address of p_1 :%d\n",p_2);
printf("address of x: %d\n",*p_2);
printf("value of x : %d\n",**p_2);
printf("\n");
*p_1=20;
printf("\n");
printf("value of x: %d\n",x);
printf("address of x: %d\n",p_1);
printf("value of x: %d\n",*p_1);

printf("address of p_1 :%d\n",p_2);
printf("address of x: %d\n",*p_2);
printf("value of x : %d\n",**p_2);

 return 0;
}*/

/*int main() {
   int z=52;
  char  *p_1=&z;
  char **p_2=&p_1;
  
  printf("z :%d\n",z);
  printf("%d\n",*p_1);
  printf("%d\n",**p_2);
  printf("\n");
  
  printf("%d\n",&z);
  printf("%d\n",p_1);
  printf("%d\n",*p_2);
  
  printf("\n");
  printf("%d\n",p_2);
  printf("%d\n",&p_1);
  
  printf("%d\n",&p_2);
}*/

/*int main() {
 char x=10;
 char *p_1=&x;
 char **p_2=&p_1;
 
printf("value of x: %d\n",x);
printf("address of x: %d\n",p_1);
printf("value of x: %d\n",*p_1);

printf("address of p_1 :%d\n",p_2);
printf("address of x: %d\n",*p_2);
printf("value of x : %d\n",**p_2);

printf("\n");
*p_2=452730;
printf("\n");
printf("value of x: %d\n",x);
printf("address of x: %d\n",p_1);
printf("value of x: %d\n",*p_1);

 return 0;
}*/

















//////////////////////////////////////////////////////////// lec 5























// Online C compiler to run C program online
/*int main() {
    char x=12;
    char *ptr=&x;
    printf("BEFORE : X =%d ,pointer = %d\n",x,ptr);
    //++*ptr;    //value 13
    //++*(ptr);  //value 13
   // ++(*ptr);  //value 13
    //ptr++;     //adress
    //*(ptr)++;  //adress
    //*(ptr++);  //adress 
      (*ptr)++;  //value 13
    printf("AFTER : X =%d ,pointer = %d\n",x,ptr);
    return 0;
}*/

/*int main() {
    int x=20;
    int *p;
    //int *p=&x;
    *p=50;
    printf(" X : %d\n",x );
    printf(" p : %d\n",p );
    return 0;
}*/

/*int main() {
    int x=20;
    int *p=NULL; // 0 IN HEX
    p=&x;
    *p=50;
    printf(" X : %d\n",x );
    printf(" p : %d\n",p ); //RUN TIME ERROR
    return 0;
}*/
/*int main() {
    const int y=15;
     int *p=&y;
     *p=50;  
    printf(" y : %d\n",y );
    return 0;
}*/

/*int main() {
    const int y=15;
    const int *p=&y; 
     *p=50; //    error
    printf(" y : %d\n",y );
    return 0;
}*/

/*int main() {
     int y=15;
    const int *p=&y; 
     *p=50; //    error
    printf(" y : %d\n",y );
    return 0;
}*/

/*int main() {
    int *p=&y; 
     *p=50; //    error
    printf(" y : %d\n",y );
    return 0;
}*/

/*int main() {
    const int x=17;
    int y;
     int * const p=&x; 
    *p=22; 
    printf(" x : %d\n",x );
    return 0;
}*/

/*int main() {
    const int x=17;
    int y;
    const int * const p=&x; 
    // *p=22; 
    printf(" x : %d\n",x );
    return 0;
}*/

/*nst int x=10;
int main ()
{
  const int y =20;
  const int *ptr_1=&x;
  const int *ptr_2=&y;
  int *ptr_3=&y;
  int *ptr_4=&x;
  //x=3;   //error
  //y=4;   //error
  //*ptr_1=2;   //error
  //*ptr_2=7;   //error
   *ptr_3=4;   //run time error
   *ptr_4=10;  //run time error
   printf(" %d %d ",x,y);

}*/

/*int main ()
{
  char x =10;
  int y=256;
  void*p;
  p=&y; 
  *(int*)p=1; //0000 0001
              //0000 0000
              //0000 0000
              //0000 0000
   printf(" %d ",y);

}*/

/*int main ()
{
  char x =10;
  int y=256;//0000 0000
              //0000 0001
              //0000 0000
              //0000 0000
  void*p;
  p=&y; 
  *(char*)p=1; //0000 0001
              //0000 0001
              //0000 0000
              //0000 0000
   printf(" %d ",y);

}*/

// Online C compiler to run C program online
#include <stdio.h>

/* int main() {
int arr_1 [5]={2,4}  //2,4,0,0,0
int arr_2 [5];   //garbage
int arr_3 [5]={0};  //0,0,0,0,0
int arr_4 []={2,8,7,6,22}; //[5]
int arr_5 [3];
arr_5 [0]=25;
arr_5 [1]=35;
arr_5 [2]=97;
int arr_6 [x];
} */

/*int main() {
    
int x [3];
x [0]=25;
x [1]=35;
x [2]=97;
printf("%d",x [0]);
printf("\n%d",x [1]);
printf("\n%d",x [2]);
 
}*/

/* int main() {
    
int x [3];
scanf("%d",&x[0]);
scanf("%d",&x[1]);
printf("\n%d",x [0]);
printf("\n%d",x [1]);
printf("\n%d",x [2]);
 
}*/

/*int main() {
    
int x [3];
int i;
for (i=0;i<3;i++)
{
scanf("%d",&x[i]);
}
printf("\n%d",x [0]);
printf("\n%d",x [1]);
printf("\n%d",x [2]);
}*/

/*int main() {
    
int x [3];
int i;
for (i=0;i<3;i++)
{
scanf("%d",&x[i]);
}
for (i=0;i<3;i++)
{
printf("%d\n",x[i]);
}
}*/

/*
int main(){

char arr [3]={14,59,78};
char *p=&arr;
printf("%d\n",*p);
p++;
}*/

/*int main () {
   int arr[3]={179,82,3};
   int*p=&arr;
   printf("%d\n",*p);  //179
   printf("%d\n",&arr);  // adress of first element
   printf("%d\n",arr);
   printf("%d\n",*p+1); //180
   printf("%d\n",*p+2); //181
   return 0;
}*/

/*
int main(){

char arr [3]={14,59,78};
char *p=&arr;
printf("%d\n",*p);
p++;
printf("%d\n",*p);
p++;
printf("%d\n",*p);
p++;
}*/

/*
int main(){
char arr [3]={14,59,78};
printf("%d\n",&arr); // first adress
printf("%d\n",arr); // first adress  
}*/

/*
int main(){
char arr [3]={14,59,78};
char *p=arr;
int i;
for(i=0;i<3;i++,p++)
{
printf("%d\t",*p);
}
}*/

/*
int main(){
char arr [3]={14,59,78};
char *p=arr;
int i;
for(i=0;i<3;i++,p++)
{
printf("%d\t",p[i]);
}*/


/*
void test (int*p);
int main() {
    int arr[11]={1,2,3,4,5,6,7,8,9,10,11};
    test(&arr);
    return 0;
}
void test (int*p) 
{
   int i;
   for (i=0;i<11;i++)
   {
       printf("%d\t",p[i]);
   }
}*/

/*int main() {
    char arr[10];
    printf("%d\t",arr);
    printf("%d\n",arr+1); // add 1
    printf("%d\t",&arr);
    printf("%d\t",&arr+1); // add all element of array 10
    return 0;
}*/

/*int main() {
    int x=10;
    int y=50;
    int z=60;
    int *arr[3]={&x,&y,&z};
    int i=0;
    for (i=0;i<3;i++)
    {
      printf("%d\t",*arr[i]);   
    }
    
    return 0;
}*/

/*int main (){

int arr_1 [2]={10,20};
int *arr_2 [2]={&arr_1 [0],&arr_1 [1]};
printf("%d\n",*arr_2 [0]);
printf("%d\n",*arr_2 [1]); 
*arr_2 [0]=675;
*arr_2 [1]=653;
printf("%d\n",arr_1 [0]);
printf("%d\n",arr_1 [1]);
}*/


/*void edit (int*,int);
int main(){
    int arr[5]={1,2,3,4,5};
    printf("\n before edit\t");
    int i=0;
    for(i=0;i<5;i++)
    {
       printf("%d\t",arr[i]);
    }
    edit (&arr,5);
    printf("%d\n",arr[i]);
    for(i=0;i<5;i++)
    {
       printf("%d\n",arr[i]);
    }
    return 0;
}*/


/*int main (){

int arr_1 [2]={10,20};
int *arr_2 [2]={&arr_1 [0],&arr_1 [1]};
printf("%d\n",*arr_2 [0]);
printf("%d\n",*arr_2 [1]); 
*arr_2 [0]=675;
*arr_2 [1]=653;
printf("%d\n",arr_1 [0]);
printf("%d\n",arr_1 [1]);
}*/




/*int main (){
    int arr[5]={78,954};
    printf("%d\n",arr[8]);
    int x[5]={};
    printf("%d\n",x[8]);
}*/

/*void edit (int*,int);
int main(){
    int arr[5]={1,2,3,4,5};
    printf(" before edit\t");
    int i=0;
    for(i=0;i<5;i++)
    {
       printf("%d\t",arr[i]);
    }
    edit(&arr,5);
    printf("\nafter edit\t");
    for(i=0;i<5;i++)
    {
       printf("%d\t",arr[i]);
    }
    return 0;
}
void edit (int *p, int x)
{
    print("\n");
    int i=0;
    for(i=0;i<x;i++)
    {
      scanf("%d",&p[i]);
    }
}*/   


/*int main()
{
    int x;
    printf("%d\n",sizeof(x)); //4 
}*/

/*int main()
{
    char x;
    printf("%d\n",sizeof(x)); //4     char x;
    short int y;
    printf("%d\n",sizeof(y)); //4 
    int arr[5];
    printf("arr[0]:%d\n",sizeof(arr[0])); 
    printf("arr[1]:%d\n",sizeof(arr[1])); 
    printf("arr[2]:%d\n",sizeof(arr[2])); 
    printf("arr[3]:%d\n",sizeof(arr[3])); 
    printf("arr[4]:%d\n",sizeof(arr[4])); 
    printf("arr[5]:%d\n",sizeof(arr[5])); 
    printf("%d\n",sizeof(arr)); 
}*/

/* int main()
{
    int*p1;
    char*p2;
    printf("%d\n",sizeof(p1)); 
    printf("%d\n",sizeof(p2)); 
    printf("%d\n",sizeof(*p1)); 
    printf("%d\n",sizeof(*p2));
    short int *p3;
    printf("%d\n",sizeof(p3)); 
    printf("%d\n",sizeof(*p3)); 
}*/

/*int main()
{
    int arr1 [5];
    char arr2 [8];
    printf("arr1:%d\n",sizeof(arr1)); 
    printf("*arr1:%d\n",sizeof(*arr1)); 
    printf("&arr1:%d\n",sizeof(&arr1));
    printf("\n"); 
    printf("arr2:%d\n",sizeof(arr2)); 
    printf("*arr2:%d\n",sizeof(*arr2)); 
    printf("&arr2:%d\n",sizeof(&arr2));

}*/

/*void main (){
    int arr[3]={20,78,96};
    int (*p) [3];
    p=&arr;
    printf("%d\n",p); // address of array
    p++;
    printf("%d\n",p); // ++ all array  12 bytes (3 element)
}*/

/*void main (){
    int arr[3]={20,78,96};
    //int (*p) [3];
    //p=&arr;
    int *p=&arr;
    printf("%d\n",(*p)[0]); 
    printf("%d\n",(*p)[1]); 
    printf("%d\n",(*p)[2]); 
}*/

// Online C compiler to run C program online
#include <stdio.h>

/*int main() {
  //int arr[3][3] = {(1,2,3),(4,5,6),(7,8,9)};
  int arr[3][3] = {10,20,30,40,50,60,70,80,90};
  int i,j;
  for(i=0;i<3;i++)
  {
       for(j=0;j<3;j++)
       {
           printf("%d ",arr[i][j]);
       }
       printf("\n");
  }
}*/

/*int main() {
 
  char arr[2][2] = {{10,20},{30,40}};
  printf("[%d %d\n",arr[0][0],arr[0][1]);
  printf(" %d %d]\n",arr[1][0],arr[1][1]);
  
}*/

/*int main() {
 
  char arr[2][2] = {{10,20},{30,40}};
  //printf("%d %d\n",arr[0][0],arr[0][0]+1);
  printf("%d %d\n",arr[0],arr[0]+1);
  printf("%d %d\n",arr,arr+1);
  printf("%d %d\n",&arr,&arr+1);
}*/

/*int main() {
 
  int arr[2][2] = {{10,20},{30,40}};
  
  printf("%d %d\n",arr[0],arr[0]+1);  
  printf("%d %d\n",arr,arr+1);
  printf("%d %d\n",&arr,&arr+1);
}*/

/*int main()
{
char arr [5]= {'a','h','m','e','d'};
int i;
 for(i=0;i<5;i++)
 {
   printf("%c",arr[i]);
 }
}*/

/*int main()
{
char arr[11]= {'e','g','y','p','t',' ','h','a','m','d','y'};
for(int i=0;i<11;i++)
{
  printf("%c",arr[i]);
}

}*/

/*int main() {
 char arr1 [5]= {'a','h','m','e','d'};
 int i;
 char arr2 [5] ="ahmed";
 //printf("%c\n",arr2[i]);
 for(i=0;i<5;i++)
  {
    //printf("%c\n",arr2[i]);  
    printf("%c",arr1[i]);
  }
}*/

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
/*int main()
{
char arr [5]= {'a','h','m','e','d'};
int i;
 for(i=0;i<5;i++)
 {
//printf("%c",arr[i]);
   printf("%d ",arr[i]);
 } 
}*/

/*int main() { 
 char arr1 [5]= {'a','h','m','e','d'};
 int i;
 char arr2 [5] ="ahmed";
 //printf("%c\n",arr2[i]);
 for(i=0;i<5;i++)
  {
    printf("%c",arr2[i]);  
   // printf("%c",arr1[i]);
  }
}*/

/*int main() {
 
 char arr2 [5] ="ahmed";
 printf("%s",arr2);
}*/

/*int main() {
 int i;
 char arr2 [20];
 scanf("%s",arr2);
 printf("%s ",arr2);
}*/

/*int main() {
 int i;
 char arr2 [20];  hamdy_walid
 scanf("%s",arr2);
 printf("%s ",arr2);
}*/

/*int main() {
 int i;
 char arr2 [20];
 gets(arr2);
 printf("%s ",arr2);
}*/

/*int main() {
 char arr2 [12];
 fgets(arr2,12,stdin); //hamdy walid =11+null
 printf("%s ",arr2);
}*/

/*int main() {
 char arr2 []="hamdy";
 printf("%d byte\n",sizeof(arr2));
 printf("%d ",strlen(arr2));
}*/

/*int main() {
 char a[20]="hamdy walid";
 char b[20];
 strcpy(b,a);  /// copy hamdy walid
 printf("%s ",b);
 
}*/

/*int main() {
 char name1[20]="hamdy ";
 char name2[20]="walid";
 if(strcmp(name2,name1)==0)  /// compare name1 with name2
  printf("matched");
 else
  printf(" not matched");  
 return 0;
}*/

/*int main() {
 char name1[20]="hamdy";
 char name2[20]="hamdy";
 if(strcmp(name2,name1)==0)  /// compare name1 with name2
  printf("matched");
 else
  printf(" not matched");  
 return 0;
}*/

/*int main() {
 char name1[20]="hamdy";
 char name2[20]="hamdy";

  printf("%d",strcmp(name2,name1));
  return 0;
}*/

/*int main() {
//char name1[20]="hamdY";
//char name2[20]="hamdy";   //32
 
char name1[20]="hamdy";
char name2[20]="hamdY";   //-32

  printf("%d",strcmp(name2,name1));
  return 0;
}*/

/*int main() {
 char name1[20]="A";
 char name2[20]="B";  //1  A>>>B

 char name3[20]="B";
 char name4[20]="C";  //-1  A<<<B
  printf("%d\n",strcmp(name2,name1));
  printf("%d",strcmp(name3,name4));
  return 0;
}*/

/*int main() {
 char name1[7]="hamdy ";
 char name2[7]=" walid";
 strcat(name1,name2);
 printf("%s",name1);  
 return 0;
}*/

/*int main() {
 char name1[7]="hamdy";
 char name2[7]="WALID";
 strupr(name1);
 strlwr(name2);
 printf("%s\n",name1);
 printf("%s",name2);  
 return 0;
}*/


/*int main () {
    char arr1[20]="12";
    char arr2[20]="12.5";
    int x,y,z;
    
    x=atoi(arr1);
    y=atoi(arr2);
    z=x+y;
    printf("z = x + y = %d",z);
    return 0;
}*/

/*int main () {
    char arr[20];
    int x,y,z;
    printf("enter the value of x\t");
    gets(arr);
    x=atoi(arr);
    printf("enter the value of y\t");
    gets(arr);
    y=atoi(arr);
    z=x+y;
    printf("z = x + y = %d",z);
    return 0;
}*/


















///////////////////////////////////////////////////////////////////////////////////////              lec6                   ////////////////////////


























#include <stdio.h>

struct test{
char x;
int y;
float z;
}b;  // b=global 

/*int main()
{
 struct test b={'A',20,84.1}; //create struct object
                       // b is object from struct test
    b.x='A';
    b.y=20;
    b.z=84.1
    return 0; 
}*/
/*int main()
{
 struct test b; //create struct object
                       // b is object from struct test
    b.x='A';
    b.y=20;
    b.z=84.1;
    printf("%d\n",b.x);
    printf("%d\n",b.y);
    printf("%g\n",b.z);
    return 0; 
}*/

/*int main()
{
 struct test b; //create struct object
                       // b is object from struct test
    b.x='A';
    b.y=20;
    b.z=84.1;
    scanf("%d\n",&b.y);
    printf("%d\n",b.y);
    return 0; 
} */ 

/*struct student {
    int id;
    char name[15];  //array
    char age;
    float grade;
};

int main () {
    struct student student_1 = {122,"hamdy walid",20,88.7};
    
    student_1.id=145;
    strcpy(student_1.name,"ahmed walid");
    student_1.age=20;
    student_1.grade= 90.2;
    printf("id: %d\n",student_1.id);
    printf("name: %s\n",student_1.name);
    printf("age: %d\n",student_1.age);
    printf("grade: %g\n",student_1.grade);
    
}*/

/*struct football_team {
    char name[15];
    int est;
    float rank;
    char captin[ 15];
};

int main ()  {
    struct football_team football_team_1;
    
    strcpy(football_team_1.name,"al ahly");
    football_team_1.est=1895;
    football_team_1.rank=45.6;
    strcpy(football_team_1.captin,"rgr rhr");
    
    printf("football_team.name : %s\n",football_team_1.name);
    printf("football_team.est : %d\n",football_team_1.est);
    printf("football_team.rank : %g\n",football_team_1.rank);
    printf("football_team.captin : %s\n",football_team_1.captin);
}*/

/*struct example {
   char x;
   char b;
   int  y; 
 //  double  y;  // size of struct 24
   char z;
}example_1;

int main (){
    
  printf("%d",sizeof(example_1));  //12
  return 0;
}*/

/*struct example {
   char x;
   char b;
   char r; 
   char t;  //  zero babing
   int  z;
}example_1;

int main (){
    
  printf("%d",sizeof(example_1));  //8
  return 0;
}*/

/*struct example {
   char x;
   char b;
   int  z;
   char r; 
   char t;  //  4 bytes babing
   
}example_1;

int main (){
    
  printf("%d",sizeof(example_1));  //12
  return 0;
}*/

/*#pragma pack(1)
struct example {
   char x;  //1
   char b;  //1
   int  z;  //4
   char r;  //1
   char t;  // 1
}example_1;

int main (){
  printf("%d",sizeof(example_1));  //8
  return 0;
}*/

/*#pragma pack(3)
struct example {
   char x;  //1
   char b;  //1
   int  z;  //4
   char r;  //1
   char t;  // 1
}example_1;

int main (){
  printf("%d",sizeof(example_1));  //8
  return 0;
}*/

/*struct value{
    char x:3;
    char y:2;
    char z:1;
    char k:2;
}v1;
int main (){
  printf("bytes : %d",sizeof(v1));  // 1 
  return 0;
}*/

/*struct value{
    int x:5;
    int y:11;
    int z:1;
    int k:15;
}v1;
int main (){
  printf("bytes : %d",sizeof(v1));  // 4
  return 0;
}*/

/*struct value{
    int x:5;
    int y:11;
    int z:1;
    int k:16;
}v1;
int main (){
  printf("bytes : %d",sizeof(v1));  // 8
  return 0;
}*/

/*//#pragma pack(1); 
#pragma pack(2); 
struct value{
    int x:5;
    int y:11;
    int z:1;
    int k:16;
}v1;
int main (){
  printf("bytes : %d",sizeof(v1));  // 6
  return 0;
}*/

/*struct value{
    int x:1;
    int y:1;
    int z:32;
}v1;
int main (){
  printf("bytes : %d",sizeof(v1));  // 8
  return 0;
}*/

/*struct value{
    int x:32;
    int y:1;
    int z:1;
}v1;
int main (){
  printf("bytes : %d",sizeof(v1));  // 8
  return 0;
}*/

/*//#pragma pack(1);  //5
struct value{
    int x:1;
    int y:32;
    int z:1;
}v1;
int main (){
  printf("bytes : %d",sizeof(v1));  // 12
  return 0;
}*/

/*//#pragma pack(1);  //bytes : 9 
struct value{
    int x:32;  //4  byte
    char y:8;  //1 byte
    char z:8;  //1 byte
    char r:8;  //1 byte 
    char t:7;  // 7 bits
    char w:2;  // 2 bits 
}v1;  
int main (){   // 8 bytes + 4 bytes
  printf("bytes : %d",sizeof(v1));  // 12
  return 0;
}*/

/*//#pragma pack(1);  //bytes : 9 
//#pragma pack(2);  //bytes : 10
struct value{
    int x:2;  
    int y:30;  
    int z:5;  
    int r:30;  
}v1;  
int main (){   
  printf("bytes : %d",sizeof(v1));  // 12
  return 0;
}*/

/*//#pragma pack(1);  //bytes : 9 
//#pragma pack(2);  //bytes : 10
struct value{
    int x:2;  
    int y:31;  
    int z:5;  
    int r:30;  
}v1;  
int main (){   
  printf("bytes : %d",sizeof(v1));  // 16
  return 0;
}*/


/*struct value{
    char a:2;  
    char b:31;   // max 8 bits
    char c:5;    
    char d:30;   // max 8 bits
    char e:17;    // max 8 bits
    char f:10;    // max 8 bits
    char g:10;    // max 8 bits
}v1;  
int main (){   
  printf("bytes : %d",sizeof(v1)); // error
  return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
/*//#pragma pack(1);  //bytes : 9 
//#pragma pack(2);  //bytes : 10
struct value{
    int x:2;  
    int y:31;  
    int z:5;  
    int r:30;  
}v1;  
int main (){   
  printf("bytes : %d",sizeof(v1));  // 16
  return 0;
}*/


/*struct value{
    char a:2;  
    char b:31;   // max 8 bits
    char c:5;    
    char d:30;   // max 8 bits
    char e:17;    // max 8 bits
    char f:10;    // max 8 bits
    char g:10;    // max 8 bits
}v1;  
int main (){   
  printf("bytes : %d",sizeof(v1)); // error
  return 0;
}*/

/*struct value{
    char a:3;  
    char b:3;   // 

}v1;  
int main (){   
  printf("bytes : %d",sizeof(v1)); // bytes : 1
  return 0;
}*/

/*struct value{
    char x:3;  
    char y:3;   // 

}v1;  
int main (){
   v1.x=0b111;    //   -4+2+1
  printf("%d\n",v1.x); 
   v1.x=0b011;     //   0+2+1
  printf("%d\n",v1.x);
   v1.y=0b101;    // -4+0+1
  printf("%d",v1.y);
  return 0;
}*/

/*struct value{                       
   unsigned char x:3;         
   unsigned char y:3;   

}v1;  
int main (){
   v1.x=0b111;    //   4+2+1
  printf("%d\n",v1.x); 
   v1.x=0b011;     //   0+2+1
  printf("%d\n",v1.x);
   v1.y=0b101;    // 4+0+1
  printf("%d",v1.y);
  return 0;
}*/

/*struct data{    //struct of array
    int y[3];
}a,b,c;
int main () {
a.y[0]=20;
a.y[1]=30;
a.y[2]=40;
printf("%d\n",a.y[0]);
printf("%d\n",a.y[1]);
printf("%d\n",a.y[2]);
return 0;
}*/

/*struct data{    // array of struct 
    int a,b,c;
}arr[10];
int main () {
struct data arr[10];
arr[0].a=20;
arr[0].b=30;
arr[0].c=40;
printf("%d\n",arr[0].a);
printf("%d\n",arr[0].b);
printf("%d\n",arr[0].c);
return 0;
}*/

/*struct student{    // pointer and array 
    int   id;
    char age;
};

int main () {
struct student student_1={55,22};
struct student  *p=&student_1;
printf("student  id: %d\n",student_1.id);
printf("student age: %d\n",student_1.age);

(*p).id=1;  //over write using pointer
(*p).id=2;
printf("student  id: %d\n",student_1.id);
printf("student age: %d\n",student_1.age);
return 0;
}*/

/*struct student{    // pointer and array 
    int   id;
    char age;
}student_1,*p;

int main () {

p=&student_1;

p->id=1;  //over write using pointer
p->age=2;
printf("student  id: %d\n",student_1.id);
printf("student age: %d\n",student_1.age);
return 0;
}*/


/*struct employee{
char age;
int salary;
char week;
}emp1;

//void display (struct employee*);

int main () {
struct employee emp1;
emp1.salary=20;
display(&emp1);  
return 0;
}
void display(struct employee*ptr)
{ 
  printf("%d\n",ptr->salary);  
}*/


/*struct employee{
char age;
int salary;
char week;
}emp1;

void display (struct employee*);
int main () {

struct employee emp1;
emp1.salary=20;
display(&emp1); 
printf("%d\n",emp1.salary);
return 0;
}
void display(struct employee*ptr)
{ 
  ptr->salary = 40;  
}*/

/*union test {
    char x;
    int  y;
}v1;

int main () {
    v1.x=1;
    v1.y=2;
    printf("size: %d bytes\n",sizeof(v1));
    printf("x: %d bits\n",v1.x);  // overwrite 2 
    printf("y: %d bits\n",v1.y);  // 2
    printf("size of x: %d bytes\n",sizeof(v1.x));
    printf("size of y: %d bytes\n",sizeof(v1.y));
}*/

/*union test {
    char x;
    int  y;
}v1;

int main () {
    v1.x=1;
    v1.y=256;
    printf("size: %d bytes\n",sizeof(v1));
    printf("x: %d bits\n",v1.x);  // overwrite 0 
    printf("y: %d bits\n",v1.y);  // 256
    printf("size of x: %d bytes\n",sizeof(v1.x));
    printf("size of y: %d bytes\n",sizeof(v1.y));
}*/

/*//struct data_base{ //size: 60 bytes
union data_base{    //size: 20 bytes
  struct books{
      char name[12];
      int pages;
      int sales;
  }book;
  struct shirts{
      char color[12];
      int size;
      int model;
  }shirt;
  struct computers{
      char brand[12];
      int ram;
      int hdd;
  }computer;
}souq;

int main () {
   printf("size: %d bytes\n",sizeof(souq.computer));
   printf("size: %d bytes\n",sizeof(souq. book));
   printf("size: %d bytes\n",sizeof(souq.shirt));
   printf("size: %d bytes\n",sizeof(souq));
   souq.book.sales=20;
   printf("%d",souq.book.sales);
   printf("size: %d bytes\n",sizeof(souq.book.sales));
};*/








///////////////////////////////////////////////////////////////////// lec 7 ////////////////////////////








#include <stdio.h>
#include <stdio.h>
#include <stdlib.h> 

/*enum status {released,pressed};

int main () {
    //printf("%d",released);
    int button, led ;
    if(button == pressed)
    led =1 ;
    return 0;
}

/*int main () {
    printf("%d\n",released);
    printf("%d\n",pressed);
    return 0;
}*/

/*enum week { saturday,
            sunday,
            monday,
            tusday=22,
            wendsday,
            thursday,
            friday } W_1;

int main () {
    printf("%d\n",saturday);
    printf("%d\n",sunday);
    printf("%d\n",monday);
    printf("%d\n",tusday);
    printf("%d\n",wendsday);
    printf("%d\n",thursday);
    printf("%d\n",friday);    
    printf("\n"); 
    printf("%d\n",sizeof(W_1));   
}*/


/*typedef unsigned char uint8;
typedef   signed char sint8;
typedef unsigned short int uint16;
typedef   signed short int sint16;
typedef unsigned long  int uint32;
typedef   signed long  int sint32;
typedef float  float32;
typedef double float64;

int main ()
{
    uint32 x=20;
    printf("%d",x);
    return 0;
}*/

/*typedef struct test {
    int      id;
    char    age;
    float grade;
    }test_1;
int main () {
  test_1 ahmed;
  ahmed.age = 40;
  printf("%d",ahmed.age);
  return 0;
}*/

/*typedef struct {
    int      id;
    char    age;
    float grade;
    }test_1;
int main () {
  test_1 ahmed;
  ahmed.age = 40;
  printf("%d",ahmed.age);
  return 0;
}*/

/* struct test {
    int      id;
    char    age;
    float grade;
    }test_1;
    
int main () {
  struct test test_2;
  test_1.age = 40;
  test_2.grade = 40.5;
  printf("test_1.age : %d\n",test_1.age);
  printf("test_2.grade : %g",test_2.grade);
  return 0;
}*/

/*int main () 
{   
    // printf("\n%d",sizeof(x)); error 
    int x;
    printf("%d\n",sizeof(x));
    int y=2050;
    x = printf("hello");
    printf("\n%d",x);
    printf("\n%d",sizeof(20));
    char c;
    printf("\n%d",sizeof(c));
    c = 20;
    return 0;
}*/

/*int main () 
{   

    int x;
    int y=2070;
    x = printf("\n%d",y); 
    printf("\n%d",x);
    return 0;
}*/


/*int main () 
{   

    char x = 10;
    int y=257;
    x = (char)y; 
    printf("\n%d",x);
    return 0;
}*/

/*int main () 
{   

    char x = 10;
    int y=257;
   
    printf("size x: %d\n",sizeof(x));
    printf("size y: %d\n",sizeof(y));
    printf("number :%d\n",sizeof(6534));
    printf("%d\n",sizeof(453456343300));
    return 0;
}*/

/*int main () 
{   

    char x = 10;
    int y=257;
   
    printf("x: %d\n",sizeof((char)x));
    printf("y: %d\n",sizeof((char)y));
    printf("x: %d\n",sizeof((short int)x));
    return 0;
}*/

                       
/*int main () 
{   

    long int x;
    long long int y;
    float  r;
    double long  z;
    printf("long int x: %d\n",sizeof(x));
    printf("long long int y: %d\n",sizeof(y));
    printf("float r: %d\n",sizeof(r));
    printf("double long z: %d\n",sizeof(z));
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/*void test (int*);
int main () {
    int x,y;
    test(&x);
    printf("%d",x);
    return 0;
}
void test (int* p){
    *p=45;
}*/

/*int test (void);
int main () {
    int x;
    x=test();
    printf("%d",x);
    return 0;
}
int test (void){
    return 45;
}*/

/*#define size 5
typedef struct {
    
    int arr[size];
    int head;
    int tail;
}queue;

void init(queue*);
void in(queue*,int);
void out(queue*,int*);

  
int main () {
  int data;
  int x;
  int ptr;
  queue q_1;
  init (&q_1);
  in (&q_1,10);
  in (&q_1,20);
  in (&q_1,30);
  in (&q_1,40);
  //out (&q_1,&x);
 // out (&q_1,&ptr);
 //   display(&q_1);
 printf("%d",q_1.arr[0]);
 return 0;
}

void init (queue*p) {
    p->head = 0;
    p->tail = 0;
}

void in (queue*p, int x) {
    if(p->tail == size)
    printf("the queue is full");
    else{
    p->arr[p->tail] = x;
    p->tail++; }   
    }

void out (queue*p, int*ptr) {
    if(p->tail == p->head)
    printf("the queue id empty");
    else{
    *ptr = p->arr[p->head];   // store 10 in x
    int i;
    for(i=0; i< p->tail;i++)
    p->arr[i] = p->arr[i+1];
    p->tail--;}
    }
}*/



/*#define max 5
typedef struct {
    int arr[max];
    int top;
}stack;

void init(stack*);
void push(stack*,int);
void pop (stack*,int*);
void display(stack*); 

int main () {
    int x;
    stack s_1;
    init (&s_1);
    push(&s_1,10);
    push(&s_1,20);
    push(&s_1,30);
    push(&s_1,40);
    push(&s_1,50);
     
    pop(&s_1,&x);
    //printf("%d",x);
    display(&s_1);
    return 0;
}

void init (stack*p){
    p->top = -1;
}

void push (stack*p,int data){
    if (p->top == max-1)
    printf("the stack is full\n");
    else{
    p->top++;
    p->arr[p->top] = data;}
}

void pop (stack*p,int*ptr){
    if (p->top == -1)
    printf("the stack is empty\n");
    else{
    *ptr = p->arr[p->top];
    p->top--;}
}

void display (stack*p){
    if(p->top == -1)
    printf("the stack is empty\n");
    else{
    int i;
    for (i=p->top;i>=0;i--)  
    printf("%d\n",p->arr[i]);}
    
}*/




/*#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

typedef struct {
    int data;
    struct node*next;
}node;

typedef struct {
           node*top ;
}head;

void init (head*);
void push_node(head*,int);
void pop_node(head*,int*);

int main () {
    head h_1;
    int x;
    int data;
    init(&h_1);
    push_node(&h_1,10);
    push_node(&h_1,20);
    push_node(&h_1,30);
    pop_node(&h_1,&data);
    printf("%d",data);
    return 0;
}

void init (head*p) {
    p->top = NULL;
}

void push_node (head*p,int x) {
    node*P_1 = malloc(sizeof(node));
    p_1->data = x;
    p_1->next = p->top;
    p->top = p_1;
}

void pop_node (head*p,int*ptr) {
  *ptr = p->top->data;
  node*temp;
  temp = p->top;
  p->top = p->top->next;
  free(temp);
  //printf("%d",p->top->data);
} */










///////////////////////////////////////////////////////////////////// lec 8 ////////////////////////////


/*int func(int);
int main() {
  
    func(5);
    func(6);
    func(2);
    return 0;
}

int func(int x) {
    int y;
    y = x+ 10;
    return y;
}*/

/*void func(int*,int); 

int main () {
    int arr[8] ={2,2,1,4,5,5,6,0};
    func (&arr,8);
    return 0;
} 

void func(int*p,int size) {
    int i;
    for(i=0;i<size;i++){
    if(p[i]==0)
    return;}
}*/

/*void search(int*,int,int);

int main () {
    int arr[8] = {1,2,0,1,4,5,5,7};
    search(&arr,8,4);
    return 0;
} 

void search(int *p,int size,int target) {
    int i;
    for(i=0;i<size;i++)
    {
       if(p[i] == target) 
       {
        printf("the value %d is located in position %d   address %d\n",p[i],i,&p[i]);       
        return;
       }
    printf("not found");
}
*/

// Online C compiler to run C program online
/*void binary_search (int*,int,int);

int main() {
    int arr[6]={10,20,30,40,50,60};
    binary_search(&arr,6,40);
    return 0;
}

void binary_search (int*arr,int size,int target) {
    
    int first,last,mid;
    first=0;
    last=size-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(arr[mid]==target)
        {
          printf("target is found");
          return;
        }
        if(arr[mid]<target)
        {
            first=mid+1;
        }
        if(arr[mid]<target)
        {
            last=mid-1;
        }
    }
    //printf("target is not found");
}
*/

// Online C compiler to run C program online
/*void binary_search (int*,int,int);

int main() {
    int arr[6]={10,20,30,40,50,60};
    binary_search(&arr,6,40);
    return 0;
}

void binary_search (int*arr,int size,int target)
{
    
    int first,last,mid;
    first=0;
    last=size-1;
    while(first<=last)
       {
        mid=(first+last)/2;
        if(arr[mid]==target)
        {
          printf("target is found");
          return;
        }
        if(arr[mid]<target)
        {
            first=mid+1;
        }
        if(arr[mid]<target)
        {
            last=mid-1;
        }
    }
    //printf("target is not found");
}*/

/*int main () {
    int n;
    int arr[4]={11,13,4,2};
    for (n=0;n<4;n++)
    {
        printf("%d\t",arr[n]);
    }
        printf("\n\n");
    selection_sort(arr,4);
    for (n=0;n<4;n++)
    {
        printf("%d\t",arr[n]);
    }
        printf("\n\n");
    return 0;
}


void selection_sort(int*arr,int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
       for(j=i+1;j<size;j++)
       {
           if(arr[j]<arr[i])
           {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
           }
       }
    }
}*/

/*int main () {
    int n;
    int arr[4]={11,13,4,2};
    for (n=0;n<4;n++)
    {
        printf("%d\t",arr[n]);
    }
        printf("\n\n");
    buble_sort(&arr,4);
    for (n=0;n<4;n++)
    {
        printf("%d\t",arr[n]);
    }
        printf("\n\n");
    return 0;
}

void buble_sort(int*arr,int size) {
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}*/


/*int main () {
    int arr[5]={1,6,8,7,4};
    printf("%d\n",arr);
    printf("%d\n",arr+1);
    return 0;
}*/

/*struct test {
const int x;
float y;
char z[10];
}arr[10];

int main () {

      fgets(arr[0].z,10,stdin); 
      scanf("%d",&arr[0].x);
      scanf("%f",&arr[0].y);
      fflush(stdin); 

      printf("%d\n",arr[0].x);
      printf("%f\n",arr[0].y);
      printf("%s\n",arr[0].z);
   
    return 0;
}*/



