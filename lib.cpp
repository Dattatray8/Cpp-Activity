#include <iostream>
#include <string>
using namespace std;
class Lib
{
    int bid;
    string bname;
    int bprice;
    string auth;
    int copies;

public:
    Lib()
    {
        bid = 0;
        bname = "NULL";
    }
    Lib(int id, string name, int price, string a, int copy)
    {
        bid = id;
        bname = name;
        bprice = price;
        auth = a;
        copies = copy;
    }
    void accept()
    {
        cout << "Enter details of book:" << endl;
        cout << "Enter book id:" << endl;
        cin >> bid;
        cout << "Enter book name:" << endl;
        cin >> bname;
        cout << "Enter book price:" << endl;
        cin >> bprice;
        cout << "Enter book author name:" << endl;
        cin >> auth;
        cout << "Enter no of copies having of that book:" << endl;
        cin >> copies;
    }
    void display()
    {
        cout << "Library details" << endl;
        cout << "Book id:" << bid;
        cout << "Book name:" << bname;
        cout << "Book price:" << bprice;
        cout << "Book author name:" << auth;
        cout << "Book copies have:" << copies;
    }
};
int main()
{
    Lib l[100];
    int ch;
    cout << "Welcome to library!" << endl;
    cout << "What you have to in library option are given below" << endl;
    cout << "1. Add books" << endl;
    cout << "2. Display Library Data:" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
        int n;
        cout << "Enter how many books you have to add in library:";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            l[i].accept();
        }
        break;
    case 2:
        cout << "Library details:" << endl;
        for (int i = 1; i <= n; i++)
        {
            l[i].display();
        }
        break;
    default:
    cout<<"Enter valid choice!"<<endl;
    }
}
