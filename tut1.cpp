// There are two types of header files
//1.System header files : it comes with compoler 
#include <iostream>
// 2. User define header file : written by user 
//#include "run.h" This will be produce error if run.h is not present in the current directiory
#include<iomanip>
using namespace std; 


// Call by refrence --------------->
// void swapPointer(int* a, int* b)
// {
//   int temp = *a;
//   *a = *b;
//   *b = temp; 
// } 

// int main()
// {
//    int a =5 , b = 8;

//    cout<<"The value of  a is "<<a<<"and the value of b is" <<b<<endl;
//    swapPointer(&a,&b);
//   cout<<"The value of  a is "<<a<<"and the value of b is "<<b<<endl;
   
//   return 0;


// void swap (int a, int b)
// {
//   int temp = a;
//   a = b;
//   b = temp; 
// } 

// int main()
// {
//    int a =5 , b = 8;

//    cout<<"The value of  a is "<<a<<"and the value of b is" <<b<<endl;
//    swap(a,b);
//   cout<<"The value of  a is "<<a<<"and the value of b is "<<b<<endl;
   
//   return 0;

}



//Function Protyping----------->

// int sum(int a, int b);

// int main(){
//   int num1, num2;
//   cout<<"Enter the first number"<<endl;
//   cin>>num1;
//   cout<<"Enter the second number"<<endl;
//   cin>>num2;
//   cout<<"The sum is"<<sum(num1 ,num2);
//   return 0;
// }
// int sum(int a, int b)
// {
//   int c= a+b;
//   return c;
// }



// int sum(int a, int b)
// {
//   int c= a+b;
//   return c;
// }
// int main(){
//   int num1, num2;
//   cout<<"Enter the first number"45<<endl;
//   cin>>num1;
//   cout<<"Enter the second number"<<endl;
//   cin>>num2;
//   cout<<"The sum is"<<sum(num1 ,num2);
//   return 0;
// }



//**************Struct union & enum***************
// int main()
// {
//   enum Hotel{breakfast, lunch, dinner  };
//   Hotel m1= dinner;
//   cout<<m1<<endl;

  
// }


// union dowrry
// {
//   int money;
//   int car ;
//   float house;

// };

// int main()
// { 
//  union dowrry m1;
//  m1.money = 10;
//  m1.car= 12;
//  cout<<m1.car <<endl;
//   return 0;

// }


// struct employee
// {
//   int eid ;
//   float salary;
// };

// int main()
// {
//   struct employee harsh ;
//   harsh.eid = 3;
//   harsh.salary = 150000;
//   cout<<"The salary of harsh "<<harsh.salary<<endl;

//   return 0;
// }

//*************** Pointer to Array *************
// int main()
// {
//   int marks[] = {45, 54,49,67};
//   int* p = marks ;
//   cout<<*(p++)<<endl;
//   cout<<*(++p)<<endl;
//   return 0;

// }
 //***************** Array------------>
// int main()
// {
//   int marks[] = {45, 54,49,67};
//   cout<<marks[0]<<endl;
//   cout<<marks[1]<<endl;
//   cout<<marks[2]<<endl;
//   cout<<marks[3]<<endl;
//   for (int i = 0; i < 4; i++)
//   {
//     cout<<"The value of marks is "<<marks[i]<<endl;
//   }
  
// } 


//**********Pointer ------>
// int main()
// { 
//   // Pointer -------> Data types which holds the address of other data types 
//   int a = 5;
//   int*b = &a;
//   //&---> (Address of) operator
//   cout<<"The address of a is "<<&a<<endl;
//   cout<<"The address of a is "<<b<<endl;

//   //*---> (Value at)operator 
//   cout<<"The Value at address b is "<<*b<<endl;
// }


//************************* Break & Continue statement*********************
// int main()
// {
//   for (int  i = 0; i < 4; i++)
//   {
//     if (i==2)
//     {
//       continue;
//     }
    
//     cout<<i<<endl; 
     
//   }
  
// }



// int main()
// {
//   for (int  i = 0; i < 4; i++)
//   {
//     if (i==2)
//     {
//       break;
//     }
    
//     cout<<i<<endl; 
     
//   }
  
// }




//****************Do- while loop******************
// int main()
// {
//   int i = 1 ;
//   do
//   {
//     cout <<i<<endl;
//     i++;

//     /* code */
//   } while (i<=40);
  
// }



//**********************While loop***************
// int main()
// {
//   int i = 1;
//   while (i<=40)
//   {
//     cout<<i<<endl;
//     i++;
//   }
  
//   return 0;

// }



//*******************For loop********** 
// int main()
// { 
//   /*For loop in c++ */
  // for (int  i = 0; i < 45; i++)
  // {
  //   /* code */
  //   cout<<i<<endl;
    
  // }
  

  // return 0;
//}





//*********************Switch case statement**********************************

//int main()
//{
  //int age;
 // cout<<"What is your age "<<endl;
  // cin>>age;
  //switch (age)
  //{
  //case 18:
   // cout<<"You are 18"<<endl;
    //break;

    //case 22:
    //cout<<"You are 22"<<endl;
    //break;

    //case 10:
    //cout<<"You are 10"<<endl;
    //break;
   
  //default:
 // cout<<" NO special cases"<<endl;
   // break;
  //}
  //return 0;
   
//}







//****************************Selection control ----> If-else statment 
//int main()
//{
 // int age;
   //cout<<"What is your age "<<endl;
   //cin>age;
   //if(age<18)
   //{
   //cout<<"You are not eligable "<<endl;

   //}
   //else{
     //cout<<"You are eligable  "<<endl;

   //}

  //return 0;

//}







//******************Manipulaors **************************
//int main()
//{
  //int a = 32 ,  b = 43.44, c = 221;
 // cout<<"The value of a is :"<<a<<endl;
 // cout<<"The value of b is :"<<b<<endl;
  //cout<<"The value of c is :"<<c<<endl;

  //cout<<"The value of a is :"<<setw(5)<<a<<endl;
  //cout<<"The value of b is :"<<setw(5)<<b<<endl;
  //cout<<"The value of c is :"<<setw(5)<<c<<endl;
//}


//int main()
//{  
  //int a = 30 ;

  //cout<<"The value of  a was :"<<a<<endl;
  // a = 45; 
  //cout<<"The value of a is : "<<a<<endl;'
  
  
   // ********* Constant  in c++*********
 // const  int a = 45; 
  //cout<<"The value of  a was :"<<a<<endl;
   //a = 5; 
  //cout<<"The value of a is : "<<a<<endl;

  // return 0;

//}




//{

 // *************************Build in Data types***************************************
 //int r =54;

//int main()
  //int p,q,r;
    
  //cout<<"Enter the value of p :"<<endl;
  //cin>>p;
  //cout<<"Enter the value of q :"<<endl;
  //cin>>q;
  //r = p+q;
  //cout<<"The sum is  :"<< r<<endl;
  //cout<<"The r is global varible "<<::r;





//**********************************float, Double and long double literals ******************************

 // float g = 45.4f;
  //long double e = 45.4l ;  
    //cout << "The size od 45.4   is "<<sizeof(45.4)<<endl;
    //cout << "The size od 45.4f  is "<<sizeof(45.4f)<<endl;
    //cout << "The size od 45.4F  is "<<sizeof(45.4F)<<endl;
    //cout << "The size od 45.4l  is "<<sizeof(45.4l)<<endl;
   // cout << "The size od 45.4L  is "<<sizeof(45.4L)<<endl;
   

 // cout <<"The value od t is "<<t<<endl<<"The value of e is "<<e;



 

 //*****************************Refrence Variables ********************************************
     // Harshvardhan -----> Harshul-------->Mota BHai-------->Annna chattkaraa 
     //float  y =300;
     //float & z =y;
     //cout<<y<<endl;
    // cout<<z<<endl;




//****************************Typecasting *********************************************************
//int k = 35;
//float j = 43.45;
//cout<<"The value of k is :"<<(float)k<<endl;
//cout<<"The value of j is :"<<(int)j<<endl;
 //int a = int(k);
//cout<<"The value of a is :"<<(int)a<<endl;

//cout<<"The expression is  : "<<k+j<<endl;
//cout<<"The expression is  : "<<k+(int)j<<endl;

 // return 0;
//}
//{ 
  //int  a = 5 , b = 7;
 // cout<<"Operators in c++:"<<endl;
 // cout <<"Types of operators in c++"<<endl;




  //******************************** Arithmetics operators**************************************
 
 // cout<<"The value of a + b  is "<<a+b<<endl;
 // cout<<"The value of a - b  is "<<a-b<<endl;
 // cout<<"The value of a * b  is "<<a*b<<endl;
 // cout<<"The value of a / b  is "<<a/b<<endl;
 // cout<<"The value of a % b  is "<<a%b<<endl;
 // cout<<"The value of a ++  is "<<a++<<endl;
 // cout<<"The value of a --  is "<<a--<<endl;
//  cout<<"The value of ++a  is "<<++a<<endl;
 // cout<<"The value of --a  is "<<--a<<endl;




  // *******************************Assignment operators***************************************
 // int p= 3 , q=4;
 // char d= 'd';
  //cout<<q;



  
  //******************************Comparsion operators***************************************** 
 // cout<<"The value of a == b  is "<<(a==b)<<endl;
 // cout<<"The value of a != b  is "<<(a!=b)<<endl;
 // cout<<"The value of a >= b  is "<<(a>=b)<<endl;
 // cout<<"The value of a <= b  is "<<(a<=b)<<endl;
 // cout<<"The value of a > b  is "<<(a>b)<<endl;
  //cout<<"The value of a < b  is "<<(a<b)<<endl;
  //cout<<endl;



   
   //**************************** Logical operators*****************************************
  // cout<<"The value of the logical and operator((a==b)&&(a<b)) is :"<<((a==b)&&(a<b))<<endl;
   //cout<<"The value of the logical or  operator((a==b)||(a<b)) is :"<<((a==b)||(a<b))<<endl;
   //cout<<"The value of the logical not  operator(!(a==b)) is :"<<(!(a==b))<<endl;
//} 




//int main()
//{
  //int num1, num2;
  //cout<<"Enter the value of num1: \n";/* '<<'is called insertion operator*/
  //cin>>num1; /*'>>'is called extraction operator*/
 //cout<<"Enter the value of num2: \n";/* '<<'is called insertion operator*/
 //cin>>num2; /* '>>'is called extraction operator */
//cout  <<"The sum is "<< num1+num2;

//return 0;
//}


//************************************Global variable ***************************************
//int glo = 9;
//void sum()

//{
   //int g;
    //cout<< glo; 
//}



//***************************************Data Types***********************************************
 // int main()
//{
    //int glo = 10;
    //glo = 78;
    //int a = 5;
    //int b = 7;
    //int a = 5, b = 7;
   // float pi = 3.14;
   // char c = 'd';
   // bool is_false =true;
       
    //sum();
    //cout<<glo<< is_false;

   // cout<<"Hello World .\n Here the value of  a "<<a<<".\n Here the value of b"<<b;
    
    //cout<<"\nHere  the value of pi "<<pi;
    //cout<<"\nHere  the value of c "<<c;
    //return 0;

//}




