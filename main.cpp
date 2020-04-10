#include <iostream>
#include<cstring>
using namespace std;
#include "book.h"
int main() {

book p;

    int i = 0,n=0,x;
    cout<<" input number of books"<<endl;
cin>>x;
while(n!=x){
     cout << "input 1(information by default)" << endl << "input 2(information about book)" << endl << "input 3 (for copy)" << endl << "input 4 (for comparison equivalent)" << endl << "input 5 (for comparison bigger or smaller)" << endl << "input 6 (for comparison bigger or smaller)" <<endl;
    cin >> i;
    switch (i)
    {
    case 1: {
        book p1;
        p1.print();
        break;
    }

    case 2: {
        int pagesCount;
        char name[100];
        char author[100];

        cout << "Enter the pagesCount: ";
        cin >> pagesCount;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  author: ";
        cin >> author;
        cout << "\n";

        book p2(name, author, pagesCount);
        cout << p2.getName() << " " << p2.getAuthor() << " " << p2.getPagesCount() << endl;
        break;
    }

    case 3: {
        book p3("Harry Potter", "Joanne Rowling", 230);
        p3.print();
        cout << endl;
        book p4(p3);
        p4.print();
        book p2;
        p2=p4;
        p2.print();
        break;
    }
    case 4: {
    int pagesCount;
        char name[100];
        char author[100];

        cout << "Enter the pagesCount: ";
        cin >> pagesCount;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  author: ";
        cin >> author;
        cout << "\n";

        book p1(name, author, pagesCount);
        int pagesCount2;
        char name2[100];
        char author2[100];
          cout << "Enter the pagesCount: ";
        cin >> pagesCount2;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name2;
        cout << "\n";

        cout << "Enter  author: ";
        cin >> author2;
        cout << "\n";

        book p2(name2, author2, pagesCount2);

    if (p1==p2)
    {
        cout << "p1 equivalent p2\n";
    }
      if (p1!=p2)
      {
          cout << "p1 unequivalent p2\n";
      }
      break;

    }
   case 5: {
    int pagesCount;
        char name[100];
        char author[100];

        cout << "Enter the pagesCount: ";
        cin >> pagesCount;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  author: ";
        cin >> author;
        cout << "\n";

        book p1(name, author, pagesCount);
        int pagesCount2;
        char name2[100];
        char author2[100];
          cout << "Enter the pagesCount: ";
        cin >> pagesCount2;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name2;
        cout << "\n";

        cout << "Enter  author: ";
        cin >> author2;
        cout << "\n";

        book p2(name2, author2, pagesCount2);

    if (p1>p2)
    {
        cout << "p1 bigger p2\n";
    }
      if (p1<p2)
      {
          cout << "p1 smaller p2\n";
      }
    break;
    }
       case 6: {
    int pagesCount;
        char name[100];
        char author[100];

        cout << "Enter the pagesCount: ";
        cin >> pagesCount;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  author: ";
        cin >> author;
        cout << "\n";

        book p1(name, author, pagesCount);
        int pagesCount2;
        char name2[100];
        char author2[100];
          cout << "Enter the pagesCount: ";
        cin >> pagesCount2;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name2;
        cout << "\n";

        cout << "Enter  author: ";
        cin >> author2;
        cout << "\n";

        book p2(name2, author2, pagesCount2);

     //if (p1<=p2)
    if (p1>=p2)
    {
        cout << "p1 bigger p2\n";
    }
     // if (p1>p2)
      if (p1<p2)
      {
          cout << "p1 smaller p2\n";
      }
    break;
    }
    }
    n++;
}
    return 0;

}

