/*       PROBLEM STATEMENT
--Imagine a publishing company which does marketing for book and audiocassette versions.
Create a class publication that stores the title (a string) and price (type float) of a publication.
From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in minutes (type float).
Write a program that instantiates the book and tape classes, allows user to enter data and displays the data members. If an exception is caught, replace all the data member values with
zero values.
*/
#include <iostream>
using namespace std;

class Publication {
private:
    string title;
    float price;

public:
    void add() {
        cin.ignore(); // Clear the input buffer
        cout << "Enter the title of publication: " << endl;
        getline(cin, title);
        cout << "Enter the publication price: " << endl;
        cin >> price;
    }

    void display() const {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
private:
    int page_count;

public:
    void add_book() {
        try {
            add();
            cout << "Enter the page count of the book: ";
            cin >> page_count;

            if (page_count <= 0)
                throw page_count;

        } catch (...) {
            cout << "Invalid page count" << endl;
            page_count = 0;
        }
    }

    void display_book() const {
        display();
        cout << "Page count of book: " << page_count << endl;
        cout << "__________________________________" << endl;
    }
};

class Tape : public Publication {
private:
    float play_time;

public:
    void add_tape() {
        try {
            add();
            cout << "Enter the play time: ";
            cin >> play_time;

            if (play_time <= 0)
                throw play_time;

        } catch (...) {
            cout << "Invalid play time" << endl;
            play_time = 0;
        }
    }

    void display_tape() const {
        display();
        cout << "Play time for tape: " << play_time << " min" << endl;
        cout << "__________________________________" << endl;
    }
};

int main() {
    Book books[10];
    Tape tapes[10];
    int choice = 0, b_count = 0, t_count = 0;

    do {
        cout << "_______MENU_______" << endl;
        cout << "1. Add info to book" << endl;
        cout << "2. Add info to tape" << endl;
        cout << "3. Display info of book" << endl;
        cout << "4. Display info of tape" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (b_count < 10) {
                    books[b_count].add_book();
                    b_count++;
                } else {
                    cout << "Book storage is full!" << endl;
                }
                break;

            case 2:
                if (t_count < 10) {
                    tapes[t_count].add_tape();
                    t_count++;
                } else {
                    cout << "Tape storage is full!" << endl;
                }
                break;

            case 3:
                cout << "Displaying Information of Books....." << endl;
                for (int j = 0; j < b_count; j++) {
                    books[j].display_book();
                }
                break;

            case 4:
                cout << "Displaying Information of Tapes....." << endl;
                for (int j = 0; j < t_count; j++) {
                    tapes[j].display_tape();
                }
                break;

            case 5:
                cout << "Exiting..." << endl;
                return 0;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (true);

    return 0;
}


// O/P:

// (base) trushantramdasjadhav@Trushants-MacBook-Air OOP Practical % cd "/Users/trushantramdasjadhav/Desktop/SEM-3(en
// dsem)/OOP Practical/" && g++ Pract3.cpp -o Pract3 && "/Users/trushantramdasjadhav/Desktop/SEM-3(endsem)/OOP Practi
// cal/"Pract3
// _______MENU_______
// 1. Add info to book
// 2. Add info to tape
// 3. Display info of book
// 4. Display info of tape
// 5. Exit
// Enter your choice: 1
// Enter the title of publication: 
// Harry Potter
// Enter the publication price: 
// 2000
// Enter the page count of the book: 100
// _______MENU_______
// 1. Add info to book
// 2. Add info to tape
// 3. Display info of book
// 4. Display info of tape
// 5. Exit
// Enter your choice: 2
// Enter the title of publication: 
// Harry 1
// Enter the publication price: 
// 100
// Enter the play time: 10
// _______MENU_______
// 1. Add info to book
// 2. Add info to tape
// 3. Display info of book
// 4. Display info of tape
// 5. Exit
// Enter your choice: 3
// Displaying Information of Books.....
// Title: Harry Potter
// Price: 2000
// Page count of book: 100
// __________________________________
// _______MENU_______
// 1. Add info to book
// 2. Add info to tape
// 3. Display info of book
// 4. Display info of tape
// 5. Exit
// Enter your choice: 3
// Displaying Information of Books.....
// Title: Harry Potter
// Price: 2000
// Page count of book: 100
// __________________________________
// _______MENU_______
// 1. Add info to book
// 2. Add info to tape
// 3. Display info of book
// 4. Display info of tape
// 5. Exit
// Enter your choice: 3
// Displaying Information of Books.....
// Title: Harry Potter
// Price: 2000
// Page count of book: 100
// __________________________________
// _______MENU_______
// 1. Add info to book
// 2. Add info to tape
// 3. Display info of book
// 4. Display info of tape
// 5. Exit
// Enter your choice: 
// 3
// Displaying Information of Books.....
// Title: Harry Potter
// Price: 2000
// Page count of book: 100
// __________________________________
// _______MENU_______
// 1. Add info to book
// 2. Add info to tape
// 3. Display info of book
// 4. Display info of tape
// 5. Exit
// Enter your choice: 4
// Displaying Information of Tapes.....
// Title: Harry 1
// Price: 100
// Play time for tape: 10 min
// __________________________________
// _______MENU_______
// 1. Add info to book
// 2. Add info to tape
// 3. Display info of book
// 4. Display info of tape
// 5. Exit
// Enter your choice: 
// 4
// Displaying Information of Tapes.....
// Title: Harry 1
// Price: 100
// Play time for tape: 10 min
// __________________________________
// _______MENU_______
// 1. Add info to book
// 2. Add info to tape
// 3. Display info of book
// 4. Display info of tape
// 5. Exit
// Enter your choice: 5
// Exiting...
// (base) trushantramdasjadhav@Trushants-MacBook-Air OOP Practical % 