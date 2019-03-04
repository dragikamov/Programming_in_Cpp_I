/*
CH08-320142
p3.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

class Book
{
private:
    const char* title;
    int pages;
public:
    Book(const Book&);
    Book(const char* t, int p);
    Book();
    void setTitle(char*);
    void setPages(int);
    const char* getTitle();
    int getPages();
    void print();
};

Book::Book(const Book& a)
{
    title=a.title;
    pages=a.pages;
}
Book::Book(const char* t, int p)
{
    title=t;
    pages=p;
}
Book::Book()
{
    std::cout<<"Empty constructor called:"<<std::endl;
}
void Book::setTitle(char* t)
{
    title=t;
}
void Book::setPages(int p)
{
    pages=p;
}
const char* Book::getTitle()
{
    return title;
}
int Book::getPages()
{
    return pages;
}
void Book::print()
{
    std::cout<<"Title: "<<title<<std::endl;
    std::cout<<"Pages: "<<pages<<std::endl;
}
/*
Compiler-created copy constructor does a bit-copy.
It is better for the programmer to provide his own
version for the class because he can choose which
information he is going to copy, because in some
situations we would not be needed to copy all
information in a way to save memory and time.
*/

/*
P.4 Explanation
Private informations can only be accessed by that
class and if other classes are introduced and they
want to access those informations they would not be
able to. And if in a class we use protected other
classes can access the informations from that class.
*/
