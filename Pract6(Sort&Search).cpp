/*Write C++ program using STL for sorting and searching user defined records 
such as personal records (Name, DOB, Telephone number etc) using vector container.*/



#include<iostream>
#include<algorithm>
using namespace std;



class Person
{
    public:
     string name;
     string dob;
     long tel;

     void getdata()
     {
        cout<<"\nEnter Name: ";
        cin>>name;
        cout<<"\nEnter DOB: ";
        cin>>dob;
        cout<<"\nEnter Telphone: ";
        cin>>tel;
     }

     void displaydata()
     {
        cout<<"\nName: "<<name;
        cout<<"\nDOB: "<<dob;
        cout<<"\nTelphone: "<<tel;
     }

     static bool compare(const Person &a,const Person &b)
     {
        return a.name < b.name;
     }
};

int main()
{
    int n,c;
    cout<<"\nEnter no. of record: ";
    cin>>n;

    string z[n];
    Person p[n];

    for(int i=0;i<n;i++)
    {
        p[i].getdata();
    }
    cout<<"\nSorted Record.";
    sort(p,p+n,Person::compare);
    for(int i=0;i<n;i++)
    {
        p[i].displaydata();
    }
    cout<<endl;
    string nm;
    cout<<"\nEnter Name to be search:";
    cin>>nm;
    for(int i;i<n;i++)
    {
        z[i]=p[i].name;
    }
    if(binary_search(z,z+n,nm))
    {
        cout<<"\nRecord Found"<<endl;
    }
    else{
        cout<<"\nRecord Not found"<<endl;
    }

    
}


// O/P:

// (base) trushantramdasjadhav@Trushants-MacBook-Air OOP Practical % cd "/Users/trushantramdasjadhav/Desktop/SEM-3(en
// dsem)/OOP Practical/" && g++ Pract6.cpp -o Pract6 && "/Users/trushantramdasjadhav/Desktop/SEM-3(endsem)/OOP Practi
// cal/"Pract6

// Enter no. of record: 2

// Enter Name: Vinayak

// Enter DOB: 30-08-2005

// Enter Telphone: 7498564907

// Enter Name: Trushant

// Enter DOB: 19-12-2001

// Enter Telphone: 9175047953

// Sorted Record.
// Name: Trushant
// DOB: 19-12-2001
// Telphone: 9175047953
// Name: Vinayak
// DOB: 30-08-2005
// Telphone: 7498564907

// Enter Name to be search:Vinayak

// Record Found
// (base) trushantramdasjadhav@Trushants-MacBook-Air OOP Practical % 