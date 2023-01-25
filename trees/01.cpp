#include<iostream>
using namespace std;
class node{
    public:
    int data = 0;
    node *left = NULL;
    node *right = NULL;
    node(){};
    node(int data){
        this->data = data;
    }
};

node * createTree(int no){
node *head = new node[no];
int count = 1;
for (int i = 0; i < no; i++)
{
    if(count*2+1 == no || count*2 == no)
    break;

    head[i].left = head+(count*2-1);
    head[i].right = head+(count*2);
    count++;


}

return head;
}



int traverse(node *head){
    if(head == NULL)
    return 0;
    // traverse(head->left);
    cout<<head->data<<'\t';
    traverse(head->right);
    return 0;
}




int main(){
node *head = createTree(7);
head->data = 2;
head->left->data = 3;
head->left->left->data = 6;

// cout<<"1  : "<<head->data<<endl;
// cout<<"2  :"<<head->left->data<<endl;
// cout<<"3  :"<<head->left->left->data<<endl<<endl;


traverse(head);
cout<<endl;


return 0;
}