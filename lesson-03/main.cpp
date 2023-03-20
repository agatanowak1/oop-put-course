#include <iostream>
#include <vector>
#include <optional>

using namespace std;

class Book
{
    private:
        string title;
    
    public:
    Book ReTitle(string newTiltle)
    {
    this->title = std::move(newTiltle);
    return *this;
    }
    
    string CurrentTitle()
    {
        return this->title;
    }
    
};

class Author
{
    string name;
    optional <vector<Book>>authorsBook;
    
    public:
    string AuthorsName()
    {
        return this->name = "Jan";
    }
    
    void WhriteBook(const Book &book)
    {
     this->authorsBook->push_back(book);
    }
    Book DeleteBook()
    {
        Book renamedBook = this->authorsBook->back();
        this->authorsBook->pop_back();
        return renamedBook;
    }
};

int main()
{
    Author author1;
    cout<<author1.AuthorsName()<<endl;
    Book book1;
    Book book2 = book1.ReTitle("SomeNewTiltle");
    cout<<book2.CurrentTitle()<<endl;
    author1.WhriteBook(book2);
    Book book3 = author1.DeleteBook();
    cout<<book3.CurrentTitle()<<endl;
    
    
    return 0;
}
