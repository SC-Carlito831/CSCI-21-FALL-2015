/*
 * SLNode.cpp
 * 
 * written by Carlos D. Escobedo
 * created on 20 oct
 * 
 * References: 
 */

#ifndef SLNODE_H
#define SLNODE_H

#include <iostream>

class SList;
class SLNode {

public:
    SLNode();
        
    SLNode(int contents);
    
    ~SLNode();
    
    void setContents(int newContent);
    
    int getContents() const;
    
    void setNextNode(SLNode* newNode);
    
    SLNode* getNextNode() const;
        
private:
    SLNode* nextNode;
    int contents;
};
#endif