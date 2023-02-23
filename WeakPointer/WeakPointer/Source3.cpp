//#include<iostream>
//#include<string.h>
////#include <typeinfo>
//#include<map>
//
//class Book;
//
////template<typename T>
//class Author {
//	std::string name;
//
//public:
//	std::weak_ptr<Book> bPtr;
//	Author(std::string AuthName)
//	{
//		std::cout << "\nConstructor of Author called";
//
//		name = AuthName;
//		std::cout << "\nbPtr.use_count() == " << bPtr.use_count() << "; ";
//
//	}
//	/*Author& operator=(std::weak_ptr<Book>& shPtr)
//	{
//		std::cout << "\nCopy operator of Author is called\n";
//		name = shPtr.name;
//		std::cout << "bPtr.use_count() == " << bPtr.use_count() << "; ";
//		return *this;
//	}*/
//	Author& operator*()
//	{
//		return *this;
//
//	}
//	Author* operator->()
//	{
//		return this;
//	}
//	~Author() {
//		std::cout << "\n\nDestructor of Author called";
//		std::cout << "\nbPtr.use_count() == " << bPtr.use_count() << "; \n\n";
//	}
//
//};
//
//
////template<typename T>
//class Book {
//	std::string bookTitle;
//	int ISBN;
//	int publishYear;
//	std::string bookDetail;
//
//
//public:
//	std::weak_ptr<Author> aPtr;
//	//std::shared_ptr<Author> aPtr;
//
//	Book(std::string bTitle, int ID, int year, std::string detail)
//	{
//
//		std::cout << "\nConstructor of Book called";
//
//		bookTitle = bTitle;
//		ISBN = ID;
//		publishYear = year;
//		bookDetail = detail;
//
//		std::cout << "\naPtr.use_count() == " << aPtr.use_count() << "; ";
//
//	}
//	int ReturnPublishyear()
//	{
//		return publishYear;
//	}
//	std::string ReturnBookTitle()
//	{
//		return bookTitle;
//	}
//	/*Book& operator=(std::shared_ptr<Author>& shPtr)
//	{
//		std::cout << "\nCopy operator of Author is called\n";
//
//		return *this;
//	}*/
//	Book& operator*()
//	{
//		return *this;
//
//	}
//	Book* operator->()
//	{
//		return this;
//	}
//	~Book()
//	{
//		std::cout << "\n\nDestructor of Book called";
//		std::cout << "\naPtr.use_count() == " << aPtr.use_count() << "; \n\n";
//
//	}
//};
//
//
//
//
//int main()
//{
//	std::shared_ptr<Author> author1 = std::make_shared<Author>("Author1");
//	std::shared_ptr<Author> author2 = std::make_shared<Author>("Author2");
//	std::shared_ptr<Book> b1 = std::make_shared<Book>("ABC", 123, 2016, "Book about programming");
//	std::shared_ptr<Book> b2 = std::make_shared<Book>("ABCD", 1234, 2022, "Novel");
//	std::shared_ptr<Book> b3 = std::make_shared<Book>("ABCE", 567, 2011, "How to Program");
//
//	/*std::map<std::string, std::shared_ptr<Author>> mapAuthor;
//	mapAuthor.insert(std::make_pair("Programming", author1));
//	mapAuthor.insert(std::make_pair("Novel", author2));*/
//
//	std::map<std::string, std::shared_ptr<Book>> mapBook;
//	mapBook.insert(std::make_pair("Book1", b1));
//	mapBook.insert(std::make_pair("Book2", b2));
//	mapBook.insert(std::make_pair("Book3", b3));
//
//	
//	std::map<std::string, std::shared_ptr<Book>>::iterator ABC = std::find_if(mapBook.begin(), mapBook.end(), []( std::pair<std::string, std::shared_ptr<Book> > BookPtr)
//		{
//			return BookPtr.second->ReturnPublishyear() ==2022;
//
//		});
//
//	std::cout << "\n\nThe Book published in 2022 is : " << ABC->second->ReturnBookTitle() << '\n';
//
//
//	/*int findValue;
//	std::cout << "\nEnter Publish year to be found in books map: ";
//	std::cin >> findValue;
//	std::map<std::string, std::shared_ptr<Book>>::iterator ABC = std::find_if(mapBook.begin(), mapBook.end(), [findValue](std::pair<std::string, std::shared_ptr<Book> > BookPtr)
//		{
//			return BookPtr.second->ReturnPublishyear() == findValue;
//
//		});*/
//
//	// std::cout << "\n\nThe Book published in 2011 is : " << ABC->second->ReturnBookTitle() << '\n';
//
//
//	std::cout << "\n\n\n";
//	return 0;
//}
