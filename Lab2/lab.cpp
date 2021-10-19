#include <iostream>
#include <time.h>
#include <vector>
#include <iomanip>

using namespace std;

//Task 1

// class Test
// {
// protected:
//     int W;

//     void Z()
//     {
//         cout << "Это закрытая функция класса Test" << endl;
//     };

// public:
//     Test()
//     {
//         W = 1;
//     };

//     Test(int num)
//     {
//         W = num;
//     };

//     ~Test(){};

//     friend void Fun(Test _ob);
// };

// void Fun(Test _ob)
// {
//     cout << "W= " << _ob.W << endl;
//     _ob.Z();
// }

// int main()
// {
//     Test test;

//     Fun(test);

//     return 0;
// }

// Task 2

class Abonent
{
public:
    int id;

protected:
    string surname;
    string phoneNumber;

public:
    Abonent(int abonentId, string abonentSurname, string abonentPhoneNumber)
    {
        id = abonentId;
        surname = abonentSurname;
        phoneNumber = abonentPhoneNumber;
    };

    ~Abonent(){};

    friend class Notebook;
};

class Notebook
{
public:
    void change(Abonent &obj, string phoneNum)
    {
        obj.phoneNumber = phoneNum;
    }

    void show(Abonent &obj)
    {
        cout << "|" << setw(4) << obj.id;
        cout << "|" << setw(16) << obj.surname;
        cout << "|" << setw(12) << obj.phoneNumber << "|" << endl;
    }
};

int main()
{
    vector<Abonent> abonentArr;
    Notebook notebook;
    abonentArr.push_back(Abonent(100, "Ивнов", "89184005922"));
    abonentArr.push_back(Abonent(101, "Волин", "89184564581"));
    abonentArr.push_back(Abonent(102, "Шереметьев", "89184514120"));
    abonentArr.push_back(Abonent(103, "Антонов", "89183562979"));
    abonentArr.push_back(Abonent(104, "Петров", "89184513337"));
    for (int i = 0; i < abonentArr.size(); i++)
    {
        if (abonentArr[i].id == 103)
        {
            notebook.change(abonentArr[i], "89990548400");
            break;
        }
    }
    cout << "|" << setw(4) << "id";
    cout << "|" << setw(16) << "surname";
    cout << "|" << setw(12) << "phoneNumber"
         << "|" << endl;
    cout << setw(30) << "------------------------------------" << endl;
    for (int i = 0; i < abonentArr.size(); i++)
    {
        notebook.show(abonentArr[i]);
    }

    return 0;
}