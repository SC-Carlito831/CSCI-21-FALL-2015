//SLNode.h

#ifndef SLNODE_H
#define SLNODE_H

#include<cstdlib>
 
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