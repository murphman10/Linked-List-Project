/**************************
Asa Murphy
9/8/18
CS 3358
agm75_prog3StudentRecord.h
**************************/

#ifndef STUDENTRECORD_H
#define STUDENTRECORD_H
#include <iostream>

using namespace std;

class StudentRecord
{
private:

    struct NodeInfo
    {
        float gpa;
        string name;
        string address;
        double id;
        NodeInfo *next;
    };

    NodeInfo *head;

public:

    StudentRecord();
    void insertNode(double, string, string, float);
    void deleteNode(double, string, string, float);
    void displayList();
    ~StudentRecord();

};

#endif // STUDENTRECORD_H