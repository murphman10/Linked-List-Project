/*******************
Asa Murphy
9/8/18
CS 3358
Linked List 
agm75_prog3main.cpp
*******************/
#include <iostream>
#include "StudentRecord.h"

using namespace std;

int main()
{
//Allocates storage for printing the array of students and their information
    struct records
    {
        float gpa;
        string name;
        string address;
        double id;
    };
//we stored the information into each slot of the array.
    const int SIZE = 15;
    records rostr[SIZE];
    rostr[0].id = 9999;
    rostr[0].name = "Tom Jerry";
    rostr[0].address = "Main St.";
    rostr[0].gpa = 2.2;

    rostr[1].id = 1001;
    rostr[1].name = "Albert Hanson";
    rostr[1].address = "Root Ave.";
    rostr[1].gpa = 2.4;

    rostr[2].id = 1010;
    rostr[2].name = "Jack Daniel";
    rostr[2].address = "Greenville Ave.";
    rostr[2].gpa = 2.0;

    rostr[3].id = 1100;
    rostr[3].name = "Paul Clay";
    rostr[3].address = "Wonder World Dr.";
    rostr[3].gpa = 3.4;

    rostr[4].id = 1208;
    rostr[4].name = "April May";
    rostr[4].address = "Blanco Dr.";
    rostr[4].gpa = 2.6;

    rostr[5].id = 1234;
    rostr[5].name = "Alvin Chip";
    rostr[5].address = "Arlington Blvd.";
    rostr[5].gpa = 1.4;

    rostr[6].id = 4567;
    rostr[6].name = "Ray Johnson";
    rostr[6].address = "Cooper St.";
    rostr[6].gpa = 1.0;

    rostr[7].id = 2121;
    rostr[7].name = "Jake Holten";
    rostr[7].address = "Sienna Dr.";
    rostr[7].gpa = 2.9;

    rostr[8].id = 6776;
    rostr[8].name = "Janet Hernandez";
    rostr[8].address = "Rockwell Dr.";
    rostr[8].gpa = 3.0;

    rostr[9].id = 4279;
    rostr[9].name = "Shepard Williams";
    rostr[9].address = "Rochester Ave.";
    rostr[9].gpa = 4.0;

    rostr[10].id = 4559;
    rostr[10].name = "Evan Loodoot";
    rostr[10].address = "6th st.";
    rostr[10].gpa = 3.8;

    rostr[11].id = 8971;
    rostr[11].name = "Bryson Washington";
    rostr[11].address = "North Ave.";
    rostr[11].gpa = 2.7;

    rostr[12].id = 6234;
    rostr[12].name = "Isaiah Crawford";
    rostr[12].address = "South Ave.";
    rostr[12].gpa = 2.4;

    rostr[13].id = 1346;
    rostr[13].name = "Jacob Muller";
    rostr[13].address = "East Ave.";
    rostr[13].gpa = 2.5;

    rostr[14].id = 1652;
    rostr[14].name = "Sam Swanson";
    rostr[14].address = "West Ave.";
    rostr[14].id = 1652;
    rostr[14].gpa = 2.5;

    cout << "Result from array: " << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << rostr[i].id << ", " << rostr[i].name << ", ";
        cout << rostr[i].address << ", " << rostr[i].gpa << endl;
    }

    //takes info from array and stores it into the Linked List
    cout << endl;
    cout << "Result from link list: " << endl;

    StudentRecord logs; //object that references the Class

    for (int j = 0; j < SIZE; j++)
    {
        logs.insertNode(rostr[j].id,rostr[j].name,rostr[j].address,rostr[j].gpa);
    }

    logs.displayList(); // Displays Linked list

    logs.~StudentRecord();//releases memory previously asked for

    return 0;
}