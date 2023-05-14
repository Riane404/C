#include <iostream>
using namespace std;

struct Book {
	string title;
	string author;
	float price;
	string publisher;
};

const int N = 5;  // Number of books
Book books[N] = {
	{"book 1", "author 1", 9.99, "publisher 1"},
	{"book 2", "author 2", 12.99, "publisher 2"},
	{"book 3", "author 3", 70.99, "publisher 3"},
	{"book 4", "author 4", 11.99, "publisher 4"},
	{"book 5", "author 5", 14.99, "publisher 5"},
};

int main() {
  // Find the book with the highest price
	Book mostExpensiveBook;
	mostExpensiveBook.price = 0.0;
	for (int i = 0; i < N; i++) {
	if (books[i].price > mostExpensiveBook.price) {
		mostExpensiveBook = books[i];
    }
  }

  // Print the details of the most expensive book
	cout << "Title: " << mostExpensiveBook.title << endl;
	cout << "Author: " << mostExpensiveBook.author << endl;
	cout << "Price: $" << mostExpensiveBook.price << endl;
	cout << "Publisher: " << mostExpensiveBook.publisher << endl;
  return 0;
}