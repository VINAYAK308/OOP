/*      PROBLEM STATEMENT
 Write a C++ program that creates an output file, writes information to it, 
 closes the file and open it again as an input file and read the information 
 from the file.
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char Give_Info[200];
  	ofstream Out_file;   
  	Out_file.open("Information.bat", ios::out); 
  	cout<<"\n\t Enter information to store it in file.(Not more than 200 characters)\n";
  	fgets(Give_Info,200,stdin);
  	Out_file<<Give_Info;
  	Out_file.close();
  

	char Get_Info[200];
  	ifstream In_file;  
  	In_file.open("Information.bat", ios::in);  
  	In_file.getline(Get_Info, 200); 
  	cout<<"\n\n\t Given Information is :\n";
   	cout<<Get_Info;
  	In_file.close();
  
  	return 0;
  	
  
}


// // (base) trushantramdasjadhav@Trushants-MacBook-Air OOP Practical % cd "/Users/trushantramdasjadhav/Desktop/SEM-3(en
// // dsem)/OOP Practical/" && g++ Pract4.cpp -o Pract4 && "/Users/trushantramdasjadhav/Desktop/SEM-3(endsem)/OOP Practi
// // cal/"Pract4

// //          Enter information to store it in file.(Not more than 200 characters)
// // My name is Vinayak. I am working as a Webdeveloper in Hacker Central


// //          Given Information is :
// // My name is Vinayak. I am working as a Webdeveloper in Hacker Central%                                             
// // (base) trushantramdasjadhav@Trushants-MacBook-Air OOP Practical % 



























// #include<iostream>
// #include<cstring>
// #include<fstream>
// using namespace std;

// int main()
// {
//     ofstream outfile("example.txt");
//     if(!outfile)
//     {
//         cerr<<"Error in creating file";
//     }
//     outfile<<"Hello My name is Vinayak";
//     outfile<<"\nI am working in Hacker Central as Webdevelop intern";
//     outfile.close();

//     ifstream infile("example.txt");
//     if(!infile)
//     {
//         cerr<<"Error in opening file";
//     }

//     string line;
//     while(getline(infile,line))
//     {
//         cout<<line<<endl;
//     }
//     infile.close();
    
// }

//O/P:
// (base) trushantramdasjadhav@Trushants-MacBook-Air OOP Practical % cd "/Users/trushantramdasjadhav/Desktop/SEM-3(en
// dsem)/OOP Practical/" && g++ Pract4.cpp -o Pract4 && "/Users/trushantramdasjadhav/Desktop/SEM-3(endsem)/OOP Practi
// cal/"Pract4
// Hello My name is Vinayak
// I am working in Hacker Central as Webdevelop intern
// (base) trushantramdasjadhav@Trushants-MacBook-Air OOP Practical % 