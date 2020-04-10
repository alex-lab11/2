#pragma once
#include <string>
#include <stdlib.h>

using namespace std;


class book {


private:
  char *name;
    char *author;
    int pagesCount;

public:

    book();
    book( char *name ,  char *author , int pagesCount);
    book(book &);
    void print();

    void setName( char* );
    void setAuthor( char* );
    void setPagesCount(int);

    char *getName();
    char *getAuthor();
    int getPagesCount();
    book& operator = ( const book &otherbook);
    bool operator == (const book& otherbook);
    bool operator != (const book& otherbook);
    bool operator <= (const book& otherbook);
    bool operator < (const book& otherbook);
    bool operator > (const book& otherbook);
    bool operator >= (const book& otherbook);
    friend ostream& operator << (ostream &out, const book &book);
    friend istream& operator >> (istream &in, book &book);
    ~book();
};


