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

    book(const char * const name , const char * const author , const int pagesCount);
    book(const book &);
    void print() const;

    void setName(const char* const );
    void setAuthor(const char* const);
    void setPagesCount(const int);

    char *getName() const;
    char *getAuthor() const;
    int getPagesCount() const;
    book& operator = (const book &otherbook);
    bool operator == (const book& otherbook) const;
    bool operator != (const book& otherbook) const;
    bool operator <= (const book& otherbook) const;
    bool operator < (const book& otherbook) const;
    bool operator > (const book& otherbook) const;
    bool operator >= (const book& otherbook) const;
    friend ostream& operator << (ostream &out, const book &book);
    friend istream& operator >> (istream &in, book &book);
    ~book();
};


