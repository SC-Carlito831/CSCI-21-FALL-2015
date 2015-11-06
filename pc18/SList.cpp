/*
 * SList.cpp
 *
 * written by Carlos D. Escobedo
 * created on 26 Oct
 *
 * References: programmingforums.org (printing linked lists), stackoverflow
 *             (.h file linking issues)
 */
 
#include "SList.h"


SList::SList() {
    head = NULL;
    size = 0;
}

SList::~SList() {
    SList::clear();
    delete head;
}

void SList::insertHead(int value) {
    
    if(head == NULL) {
        head = new SLNode(value);
    } else {
        SLNode* temp = new SLNode(value);
        temp->setNextNode(head);
        head = temp;
    }
    size++;
}

void SList::removeHead() {
    if (head != NULL) {
        //temp pnter -> head, increment head to next, call delete on ptr
        SLNode* temp  = head;
        head = head->getNextNode();
        temp = NULL;
        delete temp;
        size--;
    }
}

void SList::clear() {
    head = NULL;
    size = 0;
}

unsigned int SList::getSize() const {
    return size;
}

string SList::toString() const {
    stringstream ss;
    if (head == NULL) {
        ss.str("");
    } else {
        int i = 1;
        for (SLNode* n = head; n != NULL; n = n->getNextNode()) {
            ss << n->getContents();
            if  (i < size)
                ss << ",";
            i++;
        }
    }
    return ss.str();
}
