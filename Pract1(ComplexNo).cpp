// Implement a class Complex which represents the Complex Number data type.
// Implement the following
// 1. Constructor (including a default constructor which creates the complex
// number 0+0i).
// 2. Overload operator+ to add two complex numbers.
// 3. Overload operator* to multiply two complex numbers.
// 4. Overload operators << and >> to print and read Complex Numbers.

#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
	complex()
	{
		x=0;
		y=0;
	}
	friend void operator >>(complex &u,complex &v)
	{
		cout<<"Please enter the real value for first no. (x1) =>"<<endl;
		cin>>u.x;
		cout<<"Enter the imaginary value of the first no. (y1)"<<endl;
		cin>>u.y;
		cout<<"Please enter the real value for second no. (x2) =>"<<endl;
		cin>>v.x;
		cout<<"Enter the imaginary value of the second no. (y2)"<<endl;
		cin>>v.y;
	}
	
	friend void operator <<(complex &u,complex &v)
	{
		cout<<"First complex no is =>"<<u.x<<"+"<<u.y<<"i"<<endl;
		cout<<"second complex no is =>"<<v.x<<"+"<<v.y<<"i"<<endl;
	}

	friend void operator +(complex &u,complex &v)
	{
		complex add;
		add.x=u.x+v.x;
		add.y=u.y+v.y;
		if(add.y>0)
		cout<<"addition  of the given complex nos. is =>"<<add.x<<"+"<<add.y<<"i"<<endl;
		else
		cout<<"addition  of the given complex nos. is =>"<<add.x<<(-1)*add.y<<"-i"<<endl;
	}

	friend void operator -(complex &u,complex &v)
	{
		complex sub;
		sub.x=u.x-v.x;
		sub.y=u.y-v.y;
		if(sub.y>0)
		cout<<"substraction  of the given complex nos. is =>"<<sub.x<<"+"<<sub.y<<"i"<<endl;
		else
		cout<<"substraction  of the given complex nos. is =>"<<sub.x<<(-1)*sub.y<<"-i"<<endl;
	}

	friend void operator *(complex &u,complex &v)
	{
		complex mul;
		mul.x=(u.x*v.x)-(u.y*v.y);
		mul.y =(u.x*v.y)+(v.x*u.y);
		if(mul.y>0)
		cout<<"Multiplication  of the given complex nos. is =>  "<<mul.x<<"+"<<mul.y<<"i"<<endl;
		else
		cout<<"Multiplication  of the given complex nos. is =>  "<<mul.x<<(-1)*mul.y<<"-i"<<endl;
	}
};

int main()
{
	char ch;
	char des;
	complex s1,s2;
	operator >>(s1,s2);
	operator <<(s1,s2);
	do
	{
		cout<<"Choose the operation to be performed=> "<<endl;
		cout<<"(+)addition"<<endl;
		cout<<"(-)subtraction"<<endl;
		cout<<"(*)Multiplication"<<endl;
		cin>>ch;
		switch(ch)
		{
			case '+':
			s1+s2;
			break;
			case '-':
			s1-s2;
			break;
			case '*':
			s1*s2;
			break;
			default:
 			cout<<"Invalid Operation"<<endl;
		}
		cout<<"Do you Wis To Perform Operation Again ? => (Y/N)";
		cin>>des;
	}while(des=='y'||des=='Y');
}

// Exp1 && "/Users/trushantramdasjadhav/Desktop/SEM-3(endsem)/Practical/oop/"exp1

// (base) trushantramdasjadhav@Trushants-MacBook-Air Practical % cd "/Users/trushantramdasjad
// hav/Desktop/SEM-3(endsem)/Practical/oop"
// (base) trushantramdasjadhav@Trushants-MacBook-Air oop % cd "/Users/trushantramdasjadhav/De
// sktop/SEM-3(endsem)/Practical/oop/" && g++ exp1.cpp -o exp1 && "/Users/trushantramdasjadha
// v/Desktop/SEM-3(endsem)/Practical/oop/"exp1


// Please enter the real value for first no. (x1) =>
// 3
// Enter the imaginary value of the first no. (y1)
// 2
// Please enter the real value for second no. (x2) =>
// 4
// Enter the imaginary value of the second no. (y2)
// 5
// First complex no is =>3+2i
// second complex no is =>4+5i
// Choose the operation to be performed=> 
// (+)addition
// (-)subtraction
// (*)Multiplication
// +
// addition  of the given complex nos. is =>7+7i
// Do you Wis To Perform Operation Again ? => (Y/N)Y
// Choose the operation to be performed=> 
// (+)addition
// (-)subtraction
// (*)Multiplication
// -
// substraction  of the given complex nos. is =>-13-i
// Do you Wis To Perform Operation Again ? => (Y/N)Y
// Choose the operation to be performed=> 
// (+)addition
// (-)subtraction
// (*)Multiplication
// *
// Multiplication  of the given complex nos. is =>  2+23i
// Do you Wis To Perform Operation Again ? => (Y/N)










// #include <iostream>
// using namespace std;

// class Complex
// {
//   public:
//     int x,y;
//     Complex()
//     {
//         x=0;
//         y=0;
//     }
    
//     friend void operator >> (Complex &u,Complex&v)
//     {
//         cout<<"\n Please enter real value of first no. ";
//         cin>>u.x;
//         cout<<"\n Please enter imaginary value of first no. ";
//         cin>>u.y;
//         cout<<"\n Please enter real value of second no. ";
//         cin>>v.x;
//         cout<<"\n Please enter imaginary value of second no. ";
//         cin>>v.y;
//     }
//     friend void operator << (Complex &u,Complex &v)
//     {
//         cout<<"\n First Complex no.: "<<u.x<<" + "<<u.y<<"i";
//         cout<<"\n Second Complex no.: "<<v.x<<" + "<<v.y<<"i";
        
//     }
    
//     friend void operator + (Complex &u,Complex&v)
//     {
//         Complex add;
//         add.x = u.x + v.x;
//         add.y = u.y + v.y;
//         cout<<"\n Sum of two complex number: "<<add.x<<" + "<<add.y<<"i";

//     }
//     friend void operator - (Complex &u,Complex&v)
//     {
//         Complex sub;
//         sub.x = u.x - v.x;
//         sub.y = u.y - v.y;
//         if(sub.y>=0)
//         {
//            cout<<"\n Substraction of two complex number: "<<sub.x<<" + "<<sub.y<<"i";
//         }
//         else
//         {
//               cout<<"\n Substraction of two complex number: "<<sub.x<<(-1)*sub.y<<"i";

//         }
        
//     }
    
//      friend void operator * (Complex &u,Complex&v)
//     {
//         Complex mul;
        
//         mul.x = (u.x*v.x) - (u.y*v.y);
//         mul.y = (u.x*v.y) + (u.y*v.x);

//         if(mul.y>=0)
//         {
//            cout<<"\n Multiplication of two complex number: "<<mul.x<<" + "<<mul.y<<"i";
//         }
//         else
//         {
//               cout<<"\n Multiplicaton of two complex number: "<<mul.x<<" + "<<(-1)*mul.y<<"i";

//         }

        
        
//     }
     
// };

// int main()
// {
//     Complex s1,s2;
//     operator >>(s1,s2);
//     operator <<(s1,s2);

//     operator +(s1,s2);
//     operator -(s1,s2);
//     operator *(s1,s2);

//     // another way
//     // s1+s2;
//     // s1-s2;
//     // s1*s2;



    
// }


// // input: 
// //  Please enter real value of first no. 2

// //  Please enter imaginary value of first no. 5

// //  Please enter real value of second no. 4

// //  Please enter imaginary value of second no. -3

// //  First Complex no.: 2 + 5i
// //  Second Complex no.: 4 + -3i
// //  Sum of two complex number: 6 + 2i
// //  Substraction of two complex number: -2 + 8i
// //  Multiplication of two complex number: 23 + 14i% 




