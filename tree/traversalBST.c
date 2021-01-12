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
