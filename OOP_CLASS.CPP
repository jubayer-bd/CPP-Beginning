#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    float price;

    void display()
    {
        cout << "\nTitle : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price : " << price << " $" << endl;
    }
};

int main()
{
    Book b1;
    Book b2;

    b1.title = "The Great Gatsby";
    b1.author = "F. Scott Fitzgerald";
    b1.price = 10.99;
    b1.display();

    b2.title = "To Kill a Mockingbird";
    b2.author = "Harper Lee";
    b2.price = 12.99;
    b2.display();

    return 0;
}