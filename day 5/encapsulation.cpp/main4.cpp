//Library Management System
    #include <iostream>
    using namespace std;

    class Book
    {
    private:
        int bookPrice;

    protected:
        int bookID;

    public:
        string title;

        Book()
        {
            bookPrice = 500;
            bookID = 1001;
            title = "C++ Programming";
        }

        void showPrice()
        {
            cout << "Book Price = " << bookPrice << endl;
        }
    };

    class Library : public Book
    {
    public:
        void showBook()
        {
            cout << "Book ID = " << bookID << endl;
            cout << "Title = " << title << endl;
        }
    };

    int main()
    {
        Library l;

        l.showBook();
        l.showPrice();

        return 0;
    }