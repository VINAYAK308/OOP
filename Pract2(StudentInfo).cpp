// Develop a program in C++ to create a database of student’s information system
// containing the following information: Name, roll number, Class, Division, Date of
// Birth, Blood group, Contact address, Telephone number, Driving license no. and
// other. Construct the database with suitable member functions. Make use of
// constructor, default constructor, copy constructor, destructor, static member
// functions, friend class, this pointer, inline code and dynamic memory allocation
// operators-new and delete as well as exception handling.
#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
      string name;
      int Rollno;
      string className;
      string division;
      string dob;
      string bloodgroup;
      string address;
      string telephone;
      string drivinglic;

      static int totalstudent;
      
      public:
       Student():Rollno(0),division("A")
       {
           totalstudent++;
       }

       Student(string name,int Rollno,string className,string division,string dob,string bloodgroup,string address,string telephone,string drivinglic):
       name(name),Rollno(Rollno),className(className),dob(dob),bloodgroup(bloodgroup),address(address),telephone(telephone),drivinglic(drivinglic)
       {
           totalstudent++;

       }

       Student(const Student &other)
       {
         name = other.name;
         Rollno=other.Rollno;
         className=other.className;
         division=other.division;
         dob=other.dob;
         bloodgroup=other.bloodgroup;
         address=other.address;
         telephone=other.telephone;
         drivinglic=other.drivinglic;

         totalstudent++;
       }

       ~Student() {
        totalstudent--; 
       }
       
       static int getTotalStudents() {
          return totalstudent;
        }
        inline string getName() const {
          return name;
        } 

        friend class StudentDatabase;

        void displayInfo() const
        {
            cout<<"Name: "<<name<<"\n"<<"Roll Number: "<<Rollno<<"\n"<<"Class: "<<className<<"\n"<<"Division: "<<division<<"\n"<<"DOB: "<<dob<<"\n"<<"Blood Group: "<<bloodgroup<<"\n"<<"Address: "<<address<<"\n"<<"Telephone: "<<telephone<<"\n"<<"Driving Lic: "<<drivinglic<<"\n"; 

        }

};

int Student::totalstudent=0;

class StudentDatabase{
    public:
      void printTotalStudents(){
        cout<<"Total Students: "<<Student::getTotalStudents()<<endl;

      }
};


int main() {
    Student S1("Vinayak Jadhav", 6, "Second Year", "A", "3 August 2005", "O +ve", "Chinchwad", "7498564907", "DL1234");
    S1.displayInfo();

    cout << "\nCopy Constructor:" << endl;

    Student* S2 = new Student("Aniket Jadhav", 7, "Second Year", "A", "4 August 2005", "A +ve", "Pune", "9175047953", "DL5678");
    S2->displayInfo();

    StudentDatabase db;
    db.printTotalStudents();

    delete S2;

    return 0;
}



// dsem)/OOP Practical/" && g++ Pract2.cpp -o Pract2 && "/Users/trushantramdasjadhav/Desktop/SEM-3(endsem)/OOP Practi
// cal/"Pract2
// Name: Vinayak Jadhav
// Roll Number: 6
// Class: Second Year
// Division: 
// DOB: 3 August 2005
// Blood Group: O +ve
// Address: Chinchwad
// Telephone: 7498564907
// Driving Lic: DL1234

// Copy Constructor:
// Name: Aniket Jadhav
// Roll Number: 7
// Class: Second Year
// Division: 
// DOB: 4 August 2005
// Blood Group: A +ve
// Address: Pune
// Telephone: 9175047953
// Driving Lic: DL5678
// Total Students: 2
// (base) trushantramdasjadhav@Trushants-MacBook-Air OOP Practical % 