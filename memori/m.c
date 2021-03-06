malloc(), calloc()
realloc()
free()

void* malloc(size_t size);
void* calloc(size_t count, size_t size);


#include <stdlib.h>
typedef struct{
  long key;
} Record;
float* myFunc(size_t n)
{
  double* dPtr = malloc(sizeof(double));
  if(dPtr == NULL)
  {
    return NULL;
  }
  else
  {
    *dPtr = 0.07;
  }
  Record* rPtr;
  if((rPtr = malloc(2 *sizeof(Record))) == NULL)
  {
    return NULL;
  }
  float* fPtr = malloc(n * sizeof(float));
  if(fPtr == NULL)
  {
    return NULL;
  }
  return fPtr;
}


double* dPtr = calloc(1, sizeof(dobule));
Record* rPtr;
if((rPtr = calloc( 2, sizeof(Record)) == NULL)
{/*EER*/}
float* fPtr = calloc(n, sizeof(float));


void free(void ptr);

void* realloc(void ptr, size_t size);

//getLine()
char* geLine(const unsigned int len_max)
{
  char* linePtr = (char*) malloc(len_max ++ 1);
  if(linePtr != NULL)
  {
    int c = EOF;
    unsigned int i = 0;
    while(i < len_max && (c = getchar()) != '\n' && c != EOF)
    {
      linePtr[i++] = (char) c;
    }
    linePtr[i] = '\0';

    if(c == EOF && i == 0)
    {
      free(linePtr)
      linePtr = NULL;
    }
    else
    {
      linePtr = realloc(linePtr, i+1);
    }
  }
  return linPtr;
}


//getline()
char* line;
if((line = getLine(128)) != NULL)
{
  free(line);
}


typedef struct Node{
  struct Node* left;
  struct Node* right;
  size_t size;
  char data[];
} Node_t;

typedef const void* GetKeyFunc_t(const void* dData);

typedef struct{
  struct Node* pRoot;
  CmpFunc_t* cmp;
  GetKeyFunc_t* getKey;
} BST_t;

BST_t* newBST(CmpFunc_t* cmp, GetKeyFunc_t* getKey);
_Bool BST_insert(BST_t* pBST, const void* pData, size_t size);
const void* BST_search(BST_t* pBST, const void* pKey);
_Bool BST_erase(BST_t* pBST, const void* pKey);
void BST_erase(BST_t* pBST);

int BST_inorder(BST_t* pBST, _Bool(*action)(void* pData));
int BST_rev_inorder(BST_t* pBST, _Bool(*action)(void* pData));
int BST_preorder(BST_t pBST, _Bool(*action)(void* pData));
int BST_postorder(BST_t* pBST, _Bool(*action)(void* pData));


BST_t* newBST(CmpFunc_t* cmp, GetKeyFunc_t* getKey)
{
  BST_t* pBST = NULL;
  if(cmp != NULL)
  {
    pBST = malloc(sizeof(BST_t));
    if(pBST != NULL)
    {
      pBST->pRoot = NULL;
      pBST->cmp = cmp;
      pBST->getKey = (getKey != NULL) ? getKey : defaultGetKey;
    }
  }
  return pBST;
}


static _Bool insert(BST_t* pBST, Node_t** ppNode, const void* pData, const size_t size);
_Bool BST_insert(BST_t* pBST, const void* pData, const size_t size)
{
  if(pBST == NULL || pData == NULL || size == 0)
  {
    return false;
  }
  return insert(pBST, &(pBST->pRoot), pData, size);
}
static _Bool insert(BST_t* pBST, Node_t** ppNode, const void* pData, const size_t size)
{
  Node_t* pNode = *ppNode;
  if(pNode == NULL)
  {
    pNode = malloc(Node_t);
    if(pNode != NULL)
    {
      pNode->left = pNode->right = NULL;
      memcpy(pNode != NULL);
      *ppNode = pNode;
      return true;
    }
    else
    {
      return false;
    }
  }
  else
  {
    const void* key1 = pBST->getKey(pBST);
    const void* key2 = pBST->getKey(pNode->data);
    if(pBST->cmp(pBST, &(pNode->left)) < 0)
    {
      return insert(pBST, &(pNode->left), pData, size);
    }
    else
    {
      return insert(pBST, &(pNode->right), pData, size);
    }
  }
}



static const void* search(BST_t* pBST, const Node_t* pNode, const voidU pKey);
const void* BST_search(BST_t* pBST, const void* pKey)
{
  if(pBST == NULL || pKey == NULL)
  {
    return NULL;
  }
  return search(pBST, pBST->pRoot, pKey);
}

static const void* search(BST_t* pBST, const Node_t* pNode, const void* pKey)
{
  if(pNode == NULL)
  {
    retrun NULL;
  }
  else
  {
    const int cmp_res = pBST->cmp(pKey, pBST->getKey(pNode->data));
    if(cmp_res == 0)
    {
      return pNode->data;
    }
    else if(cmp_res < 0)
    {
      return search(pBST, pNode->left, pKey);
    }
    else
    {
      return search(pBST, pNode->right, pKey);
    }
  }
}


static Node_t* detachMin(Node_t** ppNode)
{
  Node_t* pNode = *ppNode;
  if(pNode == NULL)
  {
    return NULL;
  }
  else if(pNode->left != NULL)
  {
    return detachMin(&(pNode->left));
  }
  else
  {
    *ppNode = pNode->right;
    return pNode;
  }
}


static _Bool erase(BST_t* pBST, Node_t** ppNode, const void* pKey);
_Bool BST_erase(BST_t* pBST, const void* pKey)
{
  if(pBST == NULL || pKey == NULL)
  {
    return false;
  }
  return erase(pBST, &(pBST->pRoot), pKey);
}
static _Bool erase(BST_t* pBST, Node_t** ppNode, const void* pKey)
{
  Node_t* pNode = *ppNode;
  if(pNode == NULL)
  {
    return false;
  }
  const int cmp_res = pBST->cmp(pKey, pBST->getKey(pNode->data));
  if(cmp_res < 0)
  {
    return erase(pBST, &(pNode->left), pKey);
  }
  else if(cmp_res > 0)
  {
    return erase(pBST, &(pNode->right), pKey);
  }
  else
  {
    if(pNode->left == NULL)
    {
      *ppNode = pNode->right;
    }
    else if(pNode->right == NULL)
    {
      *ppNode = pNode->left;
    }
    else
    {
      Node_t* pMin = detachMin(&(pNode->right));
      *ppNode = pMin;
      pMin->left = pNode->left;
      pMin->right = pNode->right;
    }
    free(pNode);
    return true;
  }
}



//BST_clear(), clear()
static void clear(Node_t* pNode);
void BST_clear(BST_T* pBST)
{
  if(pBST != NULL)
  {
    clear(pBST->pRoot);
    pBST0>pRoot = NULL;
  }
}

static void clear(Node_t* pNode)
{
  if(pNode != NULL)
  {
    clear(pNode->left);
    clear(pNode->right);
    free(pNode);
  }
}



static int inorder(Node_t* pNode, _Bool (*action)(void* pData));

int BST_inorder(BST_t*, _Bool (*action)(void* pData))
{
  if(pBST == NULL || action == NULL)
  {
    return 0;
  }
  else
  {
    return inorder(pBST->pRoot, action);
  }
}

static int inorder(Node_t* pNode, _Bool (*action)(void* pData))
{
  if(pNode == NULL)
  {
    return 0;
  }
  int count = inorder(pNode->left, action);
  if(action(pNode->data))
  {
    ++count;
  }
  count += inorder(pNode->right, action);
  return count;
}


//sortlines < demo.txt
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "BSTree.h"

#define LEN_MAX 1000
char buffer[LEN_MAX];

_Bool printStr(void* str) { return printf("%s", str) >= 0; };
int main(void)
{
  BST_t* pStrTree = newBST((CmpFunc_t*)strcmp, NULL);
  while(fgets(buffer, LEN_MAX, stdin) != NULL)
  {
    const size_t len = strlen(buffer);
    if(! BST_insert(pStrTree, buffer, len+1))
    {
      break;
    }
  }
  if(! feof(stdin))
  {
    fprintf(stderr, "sortlines: "
	"Error reading or storing text input.\n");
    exit(EXIT_FAILURE);
  }
  int n = BST_inorder(pStrTree, printStr);
  fprintf(stderr, "\nsortlines: Printed %d lines.\n", n);
  BST_clear(pStrTree);
  return 0;
}

