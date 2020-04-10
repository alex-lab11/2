#include <iostream>
#include "book.h"
#include <stdlib.h>
#include <string.h>

using namespace std;
book::book():book ("none", "none", 0){}
book::book(char const * const name, char const * const author, int const pagesCount)
{
 this->name = 0;
    this->author = 0;

  setName(name);
  setAuthor(author);
  setPagesCount(pagesCount);
}

book::book( const book&p):book(p.name, p.author, p.pagesCount) {}
 void book::print() const
 {
     cout << "Name: " << name << "\nAuthor: " << author << "\nPagesCount: " << pagesCount <<endl;
 }
void book::setPagesCount(int const  pagesCount)
{
    this->pagesCount=pagesCount;
}
void book::setName(char const * const name)
{
   delete [] this->name;
   size_t l=strlen(name);
   this-> name = new char [l+1];
   strcpy(this->name, name);
}
void book::setAuthor(char const * const author)
{
   delete [] this->author;
   size_t len=strlen(author);
   this-> author = new char[len+1];
   strcpy(this->author, author);
}
 char *book::getAuthor() const
    {
       return author;
    }

char *book::getName() const
    {
        return name;
    }
int book::getPagesCount() const
    {
        return pagesCount;
    }

    book::~book()
    {
        delete [] name;
        delete [] author;
    }

 book& book::operator = (const book &otherbook)
 {
    int sizename = strlen(otherbook.name);
    delete [] (this-> name);
    this-> name = new char[sizename+1];
    for (int i = 0; i <= sizename; ++i)
    {
      this -> name[i] = otherbook.name[i];
    }
    int sizeauthor = strlen(otherbook.author);
    delete [] (this-> author);
    this-> author = new char[sizeauthor+1];
    for (int i = 0; i <= sizeauthor; ++i)
    {
      this -> author[i] = otherbook.author[i];
    }
    return *this;
 }
bool book::operator == (const book& otherbook) const
{
    if( this->pagesCount != otherbook.pagesCount)
    {
        return false;
    }
    if (strlen(this->name)!= strlen(otherbook.name))
    {
        return false;
    }
    if(strlen(this->author)!= strlen(otherbook.author))
    {
        return false;
    }
    for( int i=0; i < strlen(this->name); ++i)
    {
        if(this->name[i] != otherbook.name[i])
            return false;
    }
    for( int i=0; i< strlen(this->author); ++i)
    {
        if(this->author[i] != otherbook.author[i])
            return false;
    }
    return true;
}
bool book::operator != (const book& otherbook) const
{
    if( this->pagesCount == otherbook.pagesCount)
    {
        return false;
    }
    if (strlen(this->name) == strlen(otherbook.name))
    {
        return false;
    }
    if(strlen(this->author)== strlen(otherbook.author))
    {
        return false;
    }
    for( int i=0; i< strlen(this->name); ++i)
    {
        if(this->name[i] == otherbook.name[i])
            return false;
    }
    for( int i=0; i< strlen(this->author); ++i)
    {
        if(this->author[i] == otherbook.author[i])
            return false;
    }
    return true;
}

bool book::operator <= (const book& otherbook) const
{
    for (int i=0; i<(strlen(this->name)<strlen(otherbook.name)? strlen(this->name): strlen(otherbook.name)); ++i)
    {
        if(this->name[i]>otherbook.name[i])
            return false;
    }
    for (int i=0; i<(strlen(this->author)<strlen(otherbook.author)? strlen(this->author): strlen(otherbook.author)); ++i)
    {
        if(this->author[i]>otherbook.author[i])
            return false;
    }
     if( this->pagesCount > otherbook.pagesCount)
    {
        return false;
    }
    return true;
}
bool book::operator < (const book& otherbook) const
{
    for (int i=0; i<(strlen(this->name)<strlen(otherbook.name)? strlen(this->name): strlen(otherbook.name)); ++i)
    {
        if(this->name[i]<otherbook.name[i])
            return true;
        if(this->name[i]>otherbook.name[i])
            return false;
    }
    for (int i=0; i<(strlen(this->author)<strlen(otherbook.author)? strlen(this->author): strlen(otherbook.author)); ++i)
    {
        if(this->author[i]<otherbook.author[i])
            return true;
        if(this->author[i]>otherbook.author[i])
            return false;

    }
     if( this->pagesCount < otherbook.pagesCount)
    {
        return true;
    }
    return false;
}
bool book::operator > (const book& otherbook) const
{
    for (int i=0; i<(strlen(this->name)<strlen(otherbook.name)? strlen(this->name): strlen(otherbook.name)); ++i)
    {
        if(this->name[i]>otherbook.name[i])
            return true;
        if(this->name[i]<otherbook.name[i])
            return false;
    }
    for (int i=0; i<(strlen(this->author)<strlen(otherbook.author)? strlen(this->author): strlen(otherbook.author)); ++i)
    {
        if(this->author[i]>otherbook.author[i])
            return true;
        if(this->author[i]<otherbook.author[i])
            return false;
    }
     if( this->pagesCount > otherbook.pagesCount)
    {
        return true;
    }
    return false;
}
bool book::operator >= (const book& otherbook) const
{
    for (int i=0; i<(strlen(this->name)<strlen(otherbook.name)? strlen(this->name): strlen(otherbook.name)); ++i)
    {
        if(this->name[i]<otherbook.name[i])
            return false;
    }
    for (int i=0; i<(strlen(this->author)<strlen(otherbook.author)? strlen(this->author): strlen(otherbook.author)); ++i)
    {
        if(this->author[i]<otherbook.author[i])
            return false;
    }
     if( this->pagesCount < otherbook.pagesCount)
    {
        return false;
    }
    return true;
}
ostream& operator << (ostream &out, const book &book)
    {
        out << "Author:\t" << book.author << "\tName:\t" << book.name << "\tpagesCount:\t" << book.pagesCount;
        return out;
    }

    istream& operator >> (istream &in, book &book)
    {
        in >> book.author;
        in >> book.name;
        in >> book.pagesCount;
        return in;
    }
