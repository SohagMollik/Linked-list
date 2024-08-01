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
struct Node* next;
};

struct Node* head;

void print()
{
  struct Node* temp=head;

  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<nn;
}

void insert(int val)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=val;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
    }

    else{

      struct Node* t=head;

      while(t->next != NULL){
        t=t->next;
      }
      t->next=temp;

    }
}

void deleteNodeLastPosition(int pos)
{
    struct Node* temp=head;

     for(int i=0;i<pos-2;++i){
        temp=temp->next;
        }

        temp->next=NULL;

}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   head=NULL;
   insert(3);
   insert(6);
   insert(8);
   insert(2);
   insert(4);
   print();
   deleteNodeLastPosition(5);
   print();


   return 0;
}

