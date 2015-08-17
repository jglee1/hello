#include <QCoreApplication>
#include <iostream>

using namespace std;

#git
#git2

void hello()
{
    cout << "Please enter your name\n";
    string str;
    cin >> str;
    cout << "Hello, " << str << "!\n";
}

void hello2()
{
    cout << "Please enter your name\n";
    string str;
    getline(cin,str);
    cout << "Hello, " << str << "!\n";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //hello();
    hello2();

    return a.exec();
}
