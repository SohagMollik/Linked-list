#include<bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n");
#define no   printf("NO\n");
using namespace std;

struct Node{
int data;
struct Node* link;
};

struct Node* head;

void print()
{
    struct Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<nn;

}

void insert(int value)
{
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    temp->data=value;
    temp->link=NULL;

    if(head==NULL){
     head=temp;
    }

    else{
        temp->link = head;
        head=temp;
    }
}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   head = NULL;

   insert(4);
   insert(9);
   insert(1);
   insert(5);
   insert(2);

   print();

   return 0;
}
