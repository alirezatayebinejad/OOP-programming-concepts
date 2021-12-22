#include <iostream>
using namespace std;

class student {
public:
    string name;
    int id;
    int age;

    void takeClass() {
        cout << "which lesson you take? ";
        string lesson;
        cin >> lesson;
        cout << "you took " << lesson;
    }
    student() {
        cout << "no input constructor called" << endl;
    }
    student(string Name, int Id) {
        name = Name;
        id = Id;
        cout << "constructor called" << endl;
    }
    student(string Name, int Id, int Age) {
        name = Name;
        id = Id;
        age = Age;
        cout << "constructor called" << endl;
    }
    ~student() {
        cout << "destructor called with the end of program and free every object" << endl;
    }
};

int main()
{
    student john;
    student ahmad("ahmad smith", 6874687);
    student ali("ali smith", 6874687, 15);



    return 0;
}