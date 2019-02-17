/****************************
Asa Murphy
9/8/18
CS 3358
agm75_prog3StudentRecord.cpp
****************************/
#include "StudentRecord.h"

StudentRecord::StudentRecord()
{
    head = NULL;
}

void StudentRecord::insertNode(double ids, string nm, string ads, float pavg)
{
    NodeInfo *newNode; // To point to a new node
    NodeInfo *nodePtr; // To move through the list
    NodeInfo *previousNode = NULL;

    newNode = new NodeInfo;//creates a new node.
    newNode->id = ids;
    newNode->name = nm;
    newNode->address = ads;
    newNode->gpa = pavg; //gpa,name,address, and ID are all stored in the node.

    if(!head)
    {
        head = newNode;
        newNode->next = NULL;
    }
    else
    {
        nodePtr = head;
        previousNode = NULL;

        while(nodePtr != NULL && nodePtr->id < ids)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if(previousNode == NULL)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }

    }

}

void StudentRecord::displayList()
{
    while(head)
    {
        cout << head->id << " " << head->name;
        cout << " " << head->address << " "<< head->gpa << endl;

        head = head->next;
    }
}

StudentRecord::~StudentRecord()
{
    NodeInfo *nodePtr;
    NodeInfo *nextNode;

    nodePtr = head;

    while(nodePtr != NULL)
    {
        nextNode = nodePtr->next;
        delete nodePtr;

        nodePtr = nextNode;
    }


}
