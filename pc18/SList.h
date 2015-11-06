/*
 * SList.cpp
 *
 * written by Carlos D. Escobedo
 * created on 26 Oct
 *
 * References:
 */

#ifndef SLIST_H
#define SLIST_H

#include "SLNode.h"
#include <iostream>
#include <cassert>
#include <string>
#include <sstream>

using namespace std;

class SLNode;
class SList {
public:
    SList();
        
    ~SList();
        
    void insertHead(int value);
    
    void removeHead();
        
    void clear();
        
    unsigned int getSize() const;
        
    string toString() const;
        
private:
    SLNode* head;
    unsigned int size;
};

#endif