#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Book {
private:
    int id;
    string title;
    string author;
    bool isAvailable;

int main() {
    int choice;
    do {
        cout << "\n===== ONLINE LIBRARY MENU =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Borrow Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string title, author;

            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();

            cout << "Enter Title: ";
            getline(cin, title);

            cout << "Enter Author: ";
            getline(cin, author);

            library.addBook(Book(id, title, author));
        }

        else if (choice == 2) {
            library.displayBooks();
        }

        else if (choice == 3) {
            int id;
            cout << "Enter Book ID to borrow: ";
            cin >> id;
            Book* book = library.searchBook(id);
            if (book)
                book->borrowBook();
            else
                cout << "Book not found.\n";
        }

        else if (choice == 4) {
            int id;
            cout << "Enter Book ID to return: ";
            cin >> id;

            Book* book = library.searchBook(id);
            if (book)
                book->returnBook();
            else
                cout << "Book not found.\n";
        }

    } while (choice != 5);

    cout << "Thank you for using the Library System.\n";
    return 0;
}
	
		
	

