/*二元搜尋樹之插入節點*/

void insertNode(node_t** realRoot, int data, cmp_fn cmp){
  
  // 建立新節點
  node_t* newNode = (node_t*)malloc(sizeof(node_t));
  newNode->data = data;
  newNode->right = NULL;
  newNode->left = NULL;  

  /* node_t** realRoot: 樹之真正的根指標(指向會被更改因此使用指標的指標) */

  node_t* root = *realRoot; // 走訪指標


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
