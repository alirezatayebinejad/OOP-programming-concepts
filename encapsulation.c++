#include <iostream>
using namespace std;

//the idea of encapsulation is to gather all data (properties) and behaviers (methods/functions) that work based on that data in one place called class
//hope that these classes are not rely on each other or other part of program so the chance of interferences are low in developing and updating
//setters and getters are the way we access private properties to set and get values

class student {
private:
    string name;
    int id;
    int age;

public:
    student() {
    }
    student(string Nam, int I, int Ag) {
        name = Nam;
        id = I;
        age = Ag;
        cout << "constructor is called" << endl;
    }
    student(string Nam, int I) {
        name = Nam;
        id = I;
        cout << "constructor is called" << endl;
    }
    ~student() {
        cout << "desctructor is called" << endl;
    }
    //setter and getter
    void setName(string Nam) {
        name = Nam;
    }
    string getName() {
        return name;
    }
    void setId(int I) {
        id = I;
    }
    int getId() {
        return id;
    }
    void setAge(int Ag) {
        age = Ag;
    }
    int getAge() {
        return age;
    }

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
    john.setName("john smith");
    cout << john.getName() << endl;

    return 0;
}
