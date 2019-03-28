#include <QCoreApplication>
#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << "hi!" << endl;
    list<int> allNums(5000000 , 0);
    for(auto iter = allNums.begin(); iter != allNums.end(); iter++){
        cout << *iter << endl;

    };

    vector<int> nums;
    for(int i = 0; i < 30;i++){
        nums.push_back(i);
    }
    for(int i = 0; i < 30;i++){
       cout << nums[i] << endl;
    }










    return a.exec();
}
