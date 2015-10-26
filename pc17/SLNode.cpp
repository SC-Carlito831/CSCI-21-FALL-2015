/*
 * SLNode.cpp
 * 
 * written by Carlos D. Escobedo
 * created on 20 oct
 * 
 * References: 
 */
#include "SLNode.h"
#include <iostream>
#include <cstdlib>
#include <cassert>
using namespace std;

SLNode::SLNode() {
    nextNode = NULL;
    contents = 0;
}
        
SLNode::SLNode(int value) {
    nextNode = NULL;
    contents = value;
}
        
SLNode::~SLNode() {
    nextNode = NULL;
}
        
void SLNode::setContents(int newContent) {
    contents = newContent;
}
        
int SLNode::getContents() const {
    return contents;
}
        
void SLNode::setNextNode(SLNode* newNode) {
    nextNode = newNode;
}
        
SLNode* SLNode::getNextNode() const {
    return nextNode;
}