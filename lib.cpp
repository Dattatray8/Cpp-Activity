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
        bprice = 0;
        auth = "NULL";
        copies = 0;
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
        cout << "---------------------------------" << endl;
        cout << "Library details" << endl;
        cout << "Book id:" << bid << endl;
        cout << "Book name:" << bname << endl;
        cout << "Book price:" << bprice << endl;
        cout << "Book author name:" << auth << endl;
        cout << "Book copies have:" << copies << endl;
    }
};
int count = 2;
int main()
{
    Lib l[100];
    l[0] = Lib(1, "C++", 500, "Bjarne Stroustrup", 5);
    l[1] = Lib(2, "Database Systems", 600, "Elmasri & Navathe", 3);
    int ch;

    do
    {
        cout << "---------------------------------" << endl;
        cout << "Welcome to library!" << endl;
        cout << "What you have to do in library option are given below" << endl;
        cout << "1. Add books:" << endl;
        cout << "2. Display Library Data:" << endl;
        cout << "3. Exit from library." << endl;
        cout << "Choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int n;
            cout << "Enter how many books you have to add in library:";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                if (count >= 100)
                {
                    cout << "Library is full! Cannot add more books." << endl;
                    break;
                }
                l[count].accept();
                count++;
            }
            break;
        case 2:
            cout << "Library details:" << endl;
            for (int i = 0; i < count; i++)
            {
                l[i].display();
            }
            break;
        case 3:
            cout << "Exiting the Library System..." << endl;
            break;
        default:
            cout << "Enter valid choice!" << endl;
        }
    } while (ch != 3);
    return 0;
}
