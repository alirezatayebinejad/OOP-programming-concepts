#include <iostream>
using namespace std;

class student {
public:
    string name;
    int id;
private:
    int age;
public:
    void takeClass() {
        cout << "which lesson you take? ";
        string lesson;
        cin >> lesson;
        cout << "you took " << lesson;
    }
};

int main()
{

    student john;
    john.name = "john smith";
    john.id = 45656;
    //cannot john.age cause its private
    john.takeClass();
    
    student ahmad;
    ahmad.name = "john smith";
    ahmad.id = 45656;
    //cannot ahmad.age cause its private
    ahmad.takeClass();


    cout << john.name << " "<<john.id<<endl;
    cout << ahmad.name<<" "<<ahmad.id;

    getchar();
    return 0;
}
