#include <iostream>
using namespace std;
//abstraction is when you hide the complex codes of a function so others just use simple side of that
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
    void takeClass() {
        cout << "which lesson you take? ";
        string lesson;
        cin >> lesson;
        cout << "you took " << lesson;
    }
    //setter getter
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

    //getting an abstracted code function
    int getBirthAge() {
        return birthAge();
    }
private:
    //abstract code in function
    int birthAge() {
        int b = 2022 - age;

        return b;
    }
};

int main()
{
    student john;
    john.setName("john smith");
    cout << john.getName() << endl;
    john.setAge(21);
    cout << john.getBirthAge() << endl;

    return 0;
}
