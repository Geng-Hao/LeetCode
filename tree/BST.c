
#include <stdlib.h>
#include <stdio.h>
#include "assert.h"

/*樹之宣告與結構 */

typedef int (*cmp_fn)(int a, int b);

int cmp(int a, int b){
 if(a>b) return 1;
  else if (a==b) return 0;
  else return -1;
} 

typedef struct node node_t;
struct node{ 
  int data;
  node_t *left;
  node_t *right; 
};

typedef struct tree tree_t;
struct tree{ 
  node_t *root;
  cmp_fn cmp; 

};

/*樹之建構函式*/

tree_t* tree_create(cmp_fn cmp){
  tree_t *tr = (tree_t *)malloc(sizeof(tree_t)); 
  if (!tr) 
    return tr; 

  tr->root = NULL; 
  tr->cmp = cmp;

  return tr; 
}

/*樹之解構函式*/

static void recur_delete(node_t *node);

void tree_delete(void* tr) {
  if (!tr) return;
  
  node_t* root = ((tree_t*) tr)->root; 
  if (root)
   recur_delete(root); 
  
  free(tr); 

}


static void recur_delete(node_t* node) {
  if (!node) return;

  recur_delete(node->left); 
  recur_delete(node->right); 
  free(node);
}

/*二元搜尋樹之高度*/

int maxDepth(node_t* root){
    
    if (root == NULL) return 0;
    
    int l,r,h;
    
    l = maxDepth(root->left);    
    r = maxDepth(root->right);
    
    h = (l>r)?l :r;
    
    return h+1;
    

}

/*二元搜尋樹之插入節點*/

void insertNode(tree_t* tr, int data){
  
  // 建立新節點
  node_t* newNode = (node_t*)malloc(sizeof(node_t));
  newNode->data = data;
  newNode->right = NULL;
  newNode->left = NULL;  

  node_t** realRoot = &(tr->root); // 樹之真正的根指標(指向會被更改因此使用指標的指標)
  node_t* root = tr->root; // 走訪指標
  cmp_fn cmp = tr->cmp; //比較函式

  /*若樹為空樹*/
  if(root==NULL){
    *realRoot = newNode; //更改樹的root指標指向新節點
    return;
  }
  
  /*樹不為空樹*/
  
  while(1){

    if(cmp((root)->data,data)>0){ // 若data比root小,往左走
       if((root)->left != NULL)
           root = root ->left;
       else{
           root ->left = newNode;
           break;
       }

    }
    else{
       if((root)->right != NULL)
           root = root ->right;
       else{
           root ->right = newNode;
           break;
       }
      
    }
  } // end of while(1)
  

}

/*樹之走訪*/
 
 //中序走訪：二元搜尋樹之排序列印
 void inOrder(node_t* root){

  if (root != NULL){
     inOrder(root->left);
     printf("%d ",root->data);
     inOrder(root->right);
  
  }

 }

 //後序走訪：深度優先搜尋(DFS)
 void postOrder(node_t* root){

  if (root != NULL){
     postOrder(root->left);
     postOrder(root->right);     
     printf("%d ",root->data);
  }

 }

 //前序走訪
 void preOrder(node_t* root){

  if (root != NULL){
     printf("%d ",root->data);
     preOrder(root->left);
     preOrder(root->right);        
  }

 }

 //lever order traversal: 廣度優先搜尋(BFS)


 /*C++寫法
  void printLevelOrder(node_t* root)
  {
    // 若樹為空
    if (root == NULL)  return;
 
    // 建立一個空queue
    queue<node_t*> q;
 
    // 將root放進queue裡
    q.push(root);
 
    while (q.empty() == false)
    {
        // 印出queue之最前面元素並移除
        node_t* node = q.front();
        cout << node->data << " ";
        q.pop();
 
        // 將左子節點丟進queue 
        if (node->left != NULL)
            q.push(node->left);
 
        // 將右子節點丟進queue 
        if (node->right != NULL)
            q.push(node->right);
    }
  }   

 */

 //建立queue函數(queue為存放node_t*之一維陣列)
 node_t** createQueue(int*, int*);
 void enQueue(node_t** ,int* ,node_t*);
 node_t* deQueue(node_t**, int*);

 //level-order traversal實作
 void printLevelOrder(node_t* root)
 {
    int rear, front; // queue之頭與尾的index
    node_t** queue = createQueue(&front, &rear); // queue為存放node_t*之一維陣列
    node_t* ptr = root; //tree之走訪指標
 
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
 
        /*Enqueue左子節點*/
        if (ptr->left != NULL)
            enQueue(queue, &rear, ptr->left);
 
        /*Enqueue右子節點*/
        if (ptr->right != NULL)
            enQueue(queue, &rear, ptr->right);
 
        /*取出node_t*並更改走訪指標*/
        ptr = deQueue(queue, &front);
    }
 }

 //queue之實作
 node_t** createQueue(int *front, int *rear)
 {
    node_t** queue = (node_t**)malloc(sizeof(node_t*)*100);
 
    *front = *rear = 0;
    return queue;
 }
 
 void enQueue(node_t** queue, int* rear, node_t* newNode)
 {
    queue[*rear] = newNode;
    (*rear)++;
 }
 
 node_t* deQueue(node_t** queue, int* front)
 {
    (*front)++;
    return queue[*front - 1];
 }



 int main(){
     
     tree_t* tr = tree_create(cmp); 
     
     insertNode(tr,5);
     insertNode(tr,3);
     insertNode(tr,7);
     insertNode(tr,9);
     insertNode(tr,1);
     
     printLevelOrder(tr->root);
     printf("\n");
     inOrder(tr->root);
     
     int h = maxDepth(tr->root); printf("\n%d",h);
     
     tree_delete(tr); 
 }