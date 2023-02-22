//#include<iostream>
//#include<string.h>
//
//class Book;
//
////template<typename T>
//class Author {
//	std::string name;
//	//= std::make_shared<Book>("ABC", 123, 2016, "Book about programming");
//
//public:
//	std::shared_ptr<Book> bPtr;
//	Author(std::string AuthName)
//	{
//		std::cout << "\nConstructor of Author called";
//
//		name = AuthName;
//
//		std::cout << "\nbPtr.use_count() == " << bPtr.use_count() << "; ";
//	}
//	/*Author& operator=(std::shared_ptr<Book>& shPtr)
//	{
//		std::cout << "\nCopy operator of Author is called\n";
//
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
//		std::cout << "\nDestructor of Author called";
//
//		std::cout << "\nbPtr.use_count() == " << bPtr.use_count() << "; ";
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
//	std::shared_ptr<Author> aPtr;
//
//	Book(std::string bTitle, int ID, int year, std::string detail)
//	{
//		std::cout << "\nConstructor of Book called";
//
//		bookTitle = bTitle;
//		ISBN = ID;
//		publishYear = year;
//		bookDetail = detail;
//
//
//		std::cout << "\naPtr.use_count() == " << aPtr.use_count() << "; ";
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
//		std::cout << "\nDestructor of Book called";
//
//
//		std::cout << "\naPtr.use_count() == " << aPtr.use_count() << "; ";
//	}
//};
//
//
//
//
//int main()
//{
//	std::shared_ptr<Author> a = std::make_shared<Author>("Lewis");
//	std::shared_ptr<Book> b = std::make_shared<Book>("ABC", 123, 2016, "Book about programming");
//	a->bPtr = b;
//
//	std::cout << "\na.use_count() == " << a.use_count() << "; ";
//	b->aPtr = a;
//	std::cout << "\nb.use_count() == " << b.use_count() << "; ";
//
//
//	std::cout << "\n\n\n";
//	return 0;
//}