#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

struct Book
{
    string title;
    string author;
    int price;
};

int main()
{
    Book arr[3];
    
    for(auto i = 0; i != std::size(arr); ++i){
        cout << "Enter data for book " << i + 1 << endl;
        cout << "Tile: "; 
        getline(cin >> std::ws, arr[i].title);

        cout << "author: ";
        getline(cin, arr[i].author);

        cout << "Price: ";
        cin >> arr[i].price;
        cout << endl;
    }

    cout << "\n--- print the Book information ---\n" << endl;
    for(auto i = 0; i != std::size(arr); ++i){
        cout << "\nBook " << i + 1 << ": \n---\n"
             << "Title: " << arr[i].title << endl
             << "Author: " << arr[i].author << endl
             << "Price: $" << arr[i].price << endl;
    }

    return 0;
}
