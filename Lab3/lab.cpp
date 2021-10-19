#include <iostream>

using namespace std;

class Goods
{
    string name;
    string date;
    int cost;
    int num;
    int id;

public:
    Goods(string goodsName, string goodsDate, int goodsCost, int goodsNum, int goodsId)
    {
        name = goodsName;
        date = goodsDate;
        cost = goodsCost;
        num = goodsNum;
        id = goodsId;

        cout << "Counstructor" << endl;
    }

    Goods()
    {
        name = "Unkown";
        date = "0000-00-00";
        cost = 0;
        num = 0;
        id = 0;
        cout << "Default constructor" << endl;
    }

    Goods(Goods &obj)
    {
        name = obj.name;
        date = obj.date;
        cost = obj.cost;
        num = obj.num;
        id = obj.id;

        cout << "CopyCounstructor" << endl;
    }

    ~Goods()
    {
        cout << "Destructor" << endl;
    };

public:
    void Show()
    {
        cout << endl
             << "Наименование: " << name << endl;
        cout << "Дата поступления: " << date << endl;
        cout << "Стоимость: " << cost << endl;
        cout << "Количество: " << num << endl;
        cout << "Идентификатор: " << id << endl
             << endl;
    }

    Goods operator=(Goods &obj);
};

Goods tovar(Goods &s)
{
    return s;
}

Goods Goods::operator=(Goods &obj)
{
    name = obj.name;
    date = obj.date;
    cost = obj.cost;
    num = obj.num;
    id = obj.id;
    cout << "Operator" << endl;
    return *this;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Goods sticker0("Knight", "03.03.2002", 1000, 15, 626);
    Goods sticker1(sticker0);
    Goods sticker2;
    tovar(sticker1);
    sticker0 = sticker2;
    sticker0.Show();
    sticker1.Show();
    return 0;
}
