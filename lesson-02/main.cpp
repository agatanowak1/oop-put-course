#include <iostream>

using namespace std;

class Student
    {
        public:
            string name;
            int semester;
            int ID;
    };

    class House
    {
        public:
            string color;
            string street;
            int houseNr;
    };


    int main()
    {
        Student student1;
        student1.name = "Agata";
        student1.semester = 2;
        student1.ID = 123456;

        House house1;
        house1.color = "white";
        house1.street = "Garbary";
        house1.houseNr = 15;
        
        cout<<student1.name<<endl;
        cout<<student1.semester<<endl;
        cout<<student1.ID<<endl;
        
        cout<<house1.color<<endl;
        cout<<house1.street<<endl;
        cout<<house1.houseNr<<endl;

        return 0;
    }
