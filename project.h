/*
    HEADER STRUCTURE (TENTATIVE)
*/

#ifndef PROJECT_H
#define PROJECT_H


typedef struct 
{
    char* title;
    int year;
    char* director;
    char* genre;
    int minute;
}MOVIE;


typedef struct treeNode
{
    MOVIE* data;
    struct treeNode* left;
    struct treeNode* right;
}TREE_NODE;

typedef struct hashNode
{
    MOVIE* dataPtr;
    struct hashNode* next;
}HASH_NODE;

typedef struct
{
    int collisionCount;
    HASH_NODE* data;
}HASH_UNIT;

namespace std{
	class xhash;		// forward declaration for xhash class from xhash.h
}

typedef struct
{
    xhash* pHash;
    int count;
    int arySize;
    TREE_NODE* pTree;
}listHead;

#endif