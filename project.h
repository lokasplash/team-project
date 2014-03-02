/*
    HEADER STRUCTURE (TENTATIVE)
*/

typedef struct
{
    char* title;
    int year;
    char* director;
    char* genre;
    int minute;
}MOVIE;

typedef struct
{
    HASH_UNIT* pHash;
    int count;
    int arySize;
    TREE_NODE* pTree;
}listHead;

typedef struct treeNode
{
    MOVIE* data;
    struct treeNode* left;
    struct treeNode* right;
}TREE_NODE;

typedef struct
{
    int collisionCount;
    HASH_NODE* data;
}HASH_UNIT;

typedef struct hashNode
{
    MOVIE* dataPtr;
    struct hashNode* next;
}HASH_NODE;
