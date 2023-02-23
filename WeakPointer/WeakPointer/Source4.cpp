#include<iostream>
#include<string.h>
//#include <typeinfo>
#include<map>
#include<vector>

class Book;

//template<typename T>
class Author {
	std::string name;
	std::vector<int> bookID;
	int* IDCounter;
public:
	//Author(std::string AuthName, std::vector<int> ID)
	Author(std::string AuthName)
	{
		std::cout << "\nConstructor of Author called";

		name = AuthName;
		IDCounter = new int(0);
	/*	for (auto itr = ID.begin(); itr != ID.end(); itr++) {
			bookID.push_back(*itr);
		}*/
	}
	Author(Author& newAuth)
	{
		std::cout << "\nCoppy Constructor of Author called";

		name = newAuth.name;

		IDCounter = new int(0);
		IDCounter = newAuth.IDCounter;

		for (auto itr = newAuth.bookID.begin(); itr != newAuth.bookID.end(); itr++) {
			bookID.push_back(*itr);
			(*IDCounter)++;
		}
		
	}
	void setBookID(int id)
	{
		bookID.push_back(id);
		(*IDCounter)++;
	}
	std::vector<int> getBookIDs()
	{
		return bookID;
	}
	/*Author& operator=(std::weak_ptr<Book>& shPtr)
	{
		std::cout << "\nCopy operator of Author is called\n";
		name = shPtr.name;
		std::cout << "bPtr.use_count() == " << bPtr.use_count() << "; ";
		return *this;
	}*/
	Author& operator*()
	{
		return *this;

	}
	Author* operator->()
	{
		return this;
	}
	~Author() {
		std::cout << "\n\nDestructor of Author called";
	}

};


//template<typename T>
class Book {
	std::string bookTitle;
	int ISBN;
	int publishYear;
	std::string bookDetail;


public:
	
	Book(std::string bTitle, int ID, int year, std::string detail)
	{

		std::cout << "\nConstructor of Book called";

		bookTitle = bTitle;
		ISBN = ID;
		publishYear = year;
		bookDetail = detail;

	}
	int getPublishyear()
	{
		return publishYear;
	}
	int getISBN()
	{
		return ISBN;
	}
	std::string getBookTitle()
	{
		return bookTitle;
	}
	/*Book& operator=(std::shared_ptr<Author>& shPtr)
	{
		std::cout << "\nCopy operator of Author is called\n";

		return *this;
	}*/
	Book& operator*()
	{
		return *this;

	}
	Book* operator->()
	{
		return this;
	}
	~Book()
	{
		std::cout << "\n\nDestructor of Book called";
	}
};




int main()
{
	std::shared_ptr<Book> b1 = std::make_shared<Book>("ABC", 123, 2016, "Book about programming");
	std::shared_ptr<Book> b2 = std::make_shared<Book>("ABCD", 1234, 2022, "Novel");
	std::shared_ptr<Book> b3 = std::make_shared<Book>("ABCE", 567, 2011, "How to Program");
		
	/*Book b1("ABC", 123, 2016, "Book about programming");
	Book b2("ABCD", 1234, 2022, "Novel");
	Book b3("ABCE", 567, 2011, "How to Program");*/
	
	Author author1("Author1");

	
	author1.setBookID(b1->getISBN());
	author1.setBookID(b2->getISBN());
	author1.setBookID(b3->getISBN());

	
	std::cout << "\nGet Author's 2nd book: " << (author1.getBookIDs())[1];
	
	std::map<std::string, std::shared_ptr<Book>> mapBook;
	mapBook.insert(std::make_pair("Book1", b1));
	mapBook.insert(std::make_pair("Book2", b2));
	mapBook.insert(std::make_pair("Book3", b3));

	for (auto itr = mapBook.begin(); itr != mapBook.end(); itr++)
	{
				//std::cout << "\nInside Iterator\n";
				//std::cout << "\nPublish Year : " << itr->second->ReturnPublishyear();
		if (itr->second->getISBN() == (author1.getBookIDs())[2])
		{
			std::cout << "\n\n\nThe book with ISBN " << (author1.getBookIDs())[2] << " is: " << itr->first;
			std::cout << "\nName of this book: " << itr->second->getBookTitle();
		}
				
	}

	/*std::map<std::string, std::shared_ptr<Book>>::iterator ABC = std::find_if(mapBook.begin(), mapBook.end(), [](std::pair<std::string, std::shared_ptr<Book> > BookPtr)
		{
			return BookPtr.second->ReturnPublishyear() == 2022;

		});

	std::cout << "\n\nThe Book published in 2022 is : " << ABC->second->ReturnBookTitle() << '\n';*/


	/*int findValue;
	std::cout << "\nEnter Publish year to be found in books map: ";
	std::cin >> findValue;
	std::map<std::string, std::shared_ptr<Book>>::iterator ABC = std::find_if(mapBook.begin(), mapBook.end(), [findValue](std::pair<std::string, std::shared_ptr<Book> > BookPtr)
		{
			return BookPtr.second->ReturnPublishyear() == findValue;

		});*/

		// std::cout << "\n\nThe Book published in 2011 is : " << ABC->second->ReturnBookTitle() << '\n';


	std::cout << "\n\n\n";
	return 0;
}
