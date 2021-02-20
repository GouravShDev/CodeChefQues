#include <iostream>
#include <array>
#include <stack>

using namespace std;

class Node
{
    public:
	    int data;
	    Node *next=NULL;
        char status;

};

class LinkedList
{
	private:
		Node* head=NULL;
	
        array <Node *, 2>* find(int s, int e, int& gap, bool& flag) {
			Node* ptr;
			ptr = head;
            flag=false;
            bool flag1=false;
            bool flag2=false;
			array <Node *, 2> *out=new array <Node *, 2>;
            out->at(0)=NULL;
            out->at(0)=NULL;
            while (ptr != NULL)
			{
				if ((ptr -> data) == s)
				{
                    if (!flag2) {
                    	gap=1;
						flag1=true;
                        flag=true;
                    }
					out->at(0)=ptr;
				}
                else if ((ptr -> data) == e) {
                    if (!flag1) {
						gap=1;
                        flag2=true;
                    }
                    out->at(1)=ptr;
                }
                if (out->at(0) != NULL && out->at(1) != NULL) {
                    return out;
                }
				gap++;
				ptr = ptr -> next;
			}
            return out;
        }

        void combine(array <Node *, 2> *nodes, bool flag, int gap) {
            Node *ptr1=NULL;
            Node *ptr2=NULL;
            int n;
            if (flag) {
                ptr1=nodes->at(0);
                ptr2=nodes->at(0);
                n=1;
            }
            else {
                ptr1=nodes->at(1);
                ptr2=nodes->at(1);
                n=0;
            }
            stack <Node *> *s=new stack<Node *>;

            while (ptr2!=nodes->at(n)) {
                s->push(ptr2);
                ptr2=ptr2->next;
            }

			int k=gap/2;
            while (k!=0) {
                ptr1->data=(ptr1->data) + ptr2->data;
                ptr1->status='S';
				ptr1=ptr1->next;
                ptr2=s->top();
                s->pop();
                deleteInter(ptr2);
				k--;
            }
        }
    
	public:
		LinkedList()
		{
			head = NULL;
		}

		void insertBegin(int val)
		{
			// create a node
			Node* n = new Node;
			n -> data = val;
			n -> next = head;

			// point head to it
			head = n;
			n = NULL;
		}

		void insertInter(int key, int val, bool dir)
		{
			// create a node
			Node* n = new Node;
			n -> data = val;
			n -> next = NULL;

			// search val
			Node* ptr;
			ptr = head;
			if (head == NULL)
			{
				return;
			}
			if (dir == true)
			{
				while ((ptr -> data) != key)
				{
					ptr = ptr -> next;

					if (ptr == NULL)
					{
						return;
					}
				}
				n -> next = ptr -> next;
				ptr -> next = n;
				n = NULL;
				ptr = NULL;
			}
			else if (dir == false)
			{
				if (ptr -> next == NULL)
				{
					if (ptr -> data == key)
					{
						n -> next = head;
						head = n;
						ptr = NULL;
						n = NULL;
						return;
					}
				}
				while (((ptr -> next) -> data) != key)
				{
					ptr = ptr -> next;

					if ((ptr -> next) == NULL)
					{
						return;
					}
				}
				n -> next = ptr -> next;
				ptr -> next = n;
				ptr = NULL;
				n = NULL;
			}
		}

		void insertEnd(int val)
		{
			// create a node
			Node* n = new Node;
			n -> data = val;
			n -> next = NULL;
			n -> status='I';

			// insert to end
			Node* ptr;
			ptr = head;

			if (head == NULL)
			{
				head = n;
				n = NULL;
				return;
			}

			while ((ptr -> next) != NULL)
			{
				ptr = ptr -> next;
			}
			ptr -> next = n;
			n = NULL;
		}

		void deleteBegin()
		{
			Node* ptr;
			ptr = head;
			if (head == NULL)
			{
				return;
			}
			head = head -> next;
			ptr -> next = NULL;
			delete(ptr);
			ptr = NULL;
		}

		void deleteInter(Node* ptr) {
			Node *temp=(ptr->next)->next;
            ptr->next->next=NULL;
            ptr->next->data=0;
            delete(ptr->next);
            ptr->next=temp;
		}

		void deleteEnd()
		{
			Node* ptr;
			ptr = head;
			if (head == NULL)
			{
				return;
			}
			else if ((ptr -> next) == NULL)
			{
				return;
			}
			while ((ptr -> next) -> next != NULL)
			{
				ptr = ptr -> next;
			}
			delete((ptr -> next));
			ptr -> next = NULL;
			ptr = NULL;
		}

		Node* search(int num)
		{
			//int count = 0;
			Node* ptr;
			ptr = head;
			while (ptr != NULL)
			{
				if ((ptr -> data) == num)
				{
					//cout << "Found at index " << count << endl;
                    return ptr;				
                    }
				ptr = ptr -> next;
			}
            return NULL;
		}

		void disp()
		{
			// transverse and display
			int num;
			Node* ptr;
			ptr = head;

			cout << "Data in linked list are: ";
			while (ptr != NULL)
			{
				num = ptr -> data;
				cout << num << "   ";
				
				ptr = ptr -> next;
			}
			cout << endl;
		}

		void dispStatus() {
			char st;
			Node* ptr;
			ptr = head;

			cout << "Data in linked list are: ";
			while (ptr != NULL)
			{
				st = ptr -> status;
				cout << st << "   ";
				
				ptr = ptr -> next;
			}
			cout << endl;
		}

    	Node* mid(array <Node *, 2> *nodes, bool flag)
		{
			Node* slow_ptr;
			Node* fast_ptr;
			int n;
            if (flag) {
                slow_ptr=nodes->at(0);
                fast_ptr=nodes->at(0);
				n=1;
            }
            else {
                slow_ptr=nodes->at(1);
                fast_ptr=nodes->at(1);
				n=0;
			}

			while (fast_ptr != nodes->at(n) && (fast_ptr -> next) != NULL)
			{
				slow_ptr = slow_ptr -> next;
				fast_ptr = (fast_ptr -> next) -> next;
			}
			return slow_ptr;
		}

        void shrinkLinkedList(int start, int end) {
            int gap;
            bool flag;
            array <Node *, 2> *nodes=find(start, end, gap, flag);
            if (nodes->at(0)==NULL || nodes->at(1)==NULL) {
                return;
            }
            if (gap%2==0) {
                combine(nodes, flag, gap);
            }
            else {
				Node* m=mid(nodes, flag);
				array<Node *, 2> *comb=new array<Node *, 2>;
				comb->at(0)=m;
				comb->at(1)=m->next;
				combine(comb, true, 2);
				combine(nodes, flag, gap);
			}
        }

        void expandLinkedList(Node *beg , Node* end) {
            Node *p;
            Node *q;
            p = beg;
            while(p != end && p!=NULL){
                q=p;
                p = p->next;
                if(p!=NULL && p->data % 2== 0 && q->data % 2 == 0) {
                    Node *node = new Node;
                    node->data = ((p->data + q->data) / 2);
                    node->status = 'E';
                    q->data = q->data / 2;
                    q->status = 'E';
                    p->data = p->data / 2;
                    p->status = 'E';
                    q->next = node;
                    node->next = p;
                }
            }
        }
};

int main() 
{
	LinkedList ll;
	int num_oper, temp1, temp2;
	char oper;
	cin >> num_oper;
	for (int i=0; i<num_oper; i++) {
		cin >> oper;
		if (oper=='S') {
			cin >> temp1;
			cin >> temp2;
			ll.shrinkLinkedList(temp1, temp2);
			//ll.disp();
		}
		else if (oper=='I') {
			cin >>temp1;
			ll.insertBegin(temp1);
			//ll.disp();
		}
		else if (oper=='E') {
			cin >> temp1;
			cin >> temp2;
			ll.expandLinkedList(ll.search(temp1), ll.search(temp2));
			//ll.disp();
		}
	}
	ll.disp();
	ll.dispStatus();
    return 0;
}


// // Problem Code : RELABMID
// // url : https://www.codechef.com/problems/RELABMID


// #include <bits/stdc++.h>

// using namespace std;

// struct Node
// {
// 	int data;
// 	struct Node *next;
//     char status;
// };

// class LinkedList
// {
// 	private:
// 		struct Node* head;
	
// 	public:
// 		LinkedList()
// 		{
// 			head = NULL;
// 		}

// 		void insert_begin(int val)
// 		{
// 			// create a node
// 			struct Node* n = new struct Node;
// 			n -> data = val;
// 			n -> next = head;
//             n ->status = 'I';

// 			// point head to it
// 			head = n;
// 			n = NULL;
// 		}

// 		void insert_int(int key, int val, bool dir)
// 		{
// 			// create a node
// 			struct Node* n = new struct Node;
// 			n -> data = val;
// 			n -> next = NULL;

// 			// search val
// 			struct Node* ptr;
// 			ptr = head;
// 			if (head == NULL)
// 			{
// 				return;
// 			}
// 			if (dir == true)
// 			{
// 				while ((ptr -> data) != key)
// 				{
// 					ptr = ptr -> next;

// 					if (ptr == NULL)
// 					{
// 						return;
// 					}
// 				}
// 				n -> next = ptr -> next;
// 				ptr -> next = n;
// 				n = NULL;
// 				ptr = NULL;
// 			}
// 			else if (dir == false)
// 			{
// 				if (ptr -> next == NULL)
// 				{
// 					if (ptr -> data == key)
// 					{
// 						n -> next = head;
// 						head = n;
// 						ptr = NULL;
// 						n = NULL;
// 						return;
// 					}
// 				}
// 				while (((ptr -> next) -> data) != key)
// 				{
// 					ptr = ptr -> next;

// 					if ((ptr -> next) == NULL)
// 					{
// 						return;
// 					}
// 				}
// 				n -> next = ptr -> next;
// 				ptr -> next = n;
// 				ptr = NULL;
// 				n = NULL;
// 			}
// 		}

// 		void insert_end(int val)
// 		{
// 			// create a node
// 			struct  Node* n = new struct Node;
// 			n -> data = val;
// 			n -> next = NULL;


// 			// insert to end
// 			struct Node* ptr;
// 			ptr = head;

// 			if (head == NULL)
// 			{
// 				head = n;
// 				n = NULL;
// 				return;
// 			}

// 			while ((ptr -> next) != NULL)
// 			{
// 				ptr = ptr -> next;
// 			}
// 			ptr -> next = n;
// 			n = NULL;
// 		}

// 		void delete_begin()
// 		{
// 			struct Node* ptr;
// 			ptr = head;
// 			if (head == NULL)
// 			{
// 				return;
// 			}
// 			head = head -> next;
// 			ptr -> next = NULL;
// 			delete(ptr);
// 			ptr = NULL;
// 		}

// 		void delete_int_val(int val)
// 		{
// 			struct Node* ptr;
// 			ptr = head;

// 			if (head == NULL)
// 			{
// 				return;
// 			}
// 			while (ptr != NULL)
// 			{
// 				if ((ptr -> next) == NULL)
// 				{
// 					if (ptr -> data == val)
// 					{
// 						delete (ptr);
// 						head = NULL;
// 					}
// 				}
// 				else if (((ptr -> next) -> data) == val)
// 				{
// 					struct Node* temp;
// 					temp = ptr -> next;
// 					ptr -> next = temp -> next;
// 					temp -> next = NULL;
// 					delete(temp);
// 					temp = NULL;
// 					ptr = NULL;
// 				}
// 				ptr = ptr -> next;
// 			}
// 		}

// 		void delete_end()
// 		{
// 			struct Node* ptr;
// 			ptr = head;
// 			if (head == NULL)
// 			{
// 				return;
// 			}
// 			else if ((ptr -> next) == NULL)
// 			{
// 				return;
// 			}
// 			while ((ptr -> next) -> next != NULL)
// 			{
// 				ptr = ptr -> next;
// 			}
// 			delete((ptr -> next));
// 			ptr -> next = NULL;
// 			ptr = NULL;
// 		}

// 		struct Node* search(int num)
// 		{
// 			//int count = 0;
// 			struct Node* ptr;
// 			ptr = head;
// 			while (ptr != NULL)
// 			{
// 				if ((ptr -> data) == num)
// 				{
// 					//cout << "Found at index " << count << endl;
//                     return ptr;				
//                     }
// 				ptr = ptr -> next;
// 			}
//             return NULL;
// 		}

// 		void disp()
// 		{
// 			// transverse and display
// 			int num;
// 			struct Node* ptr;
// 			ptr = head;

// 			cout << "Data in linked list are: ";
// 			while (ptr != NULL)
// 			{
// 				num = ptr -> data;
// 				cout << num << "   ";
				
// 				ptr = ptr -> next;
// 			}
// 			cout << endl;
// 		}

//         void shrinkLinkedList(Node *beg, Node *end) {
//             struct Node *p = beg;
//             struct Node *mid = beg;
//             int nodesBt =NodesBetween(beg, end); 
//             int a = ((nodesBt + 1)/2) - 1;
            
//             while(a--){
//                 mid = mid ->next;
//             }
//             if( nodesBt % 2 != 0){
//                 mid->data = mid->data + mid->next->data;
//                 mid->next = mid->next->next;

//             }
//             stack<int> st;
//             do{
//                 st.push(mid->data);
//                 mid = mid->next;
//             }while(mid != end->next);
//             while(!st.empty() && p){
//                 p ->data += st.top();
//                 p = p->next;
//                 st.pop();
//             }
//             p->next = end->next;

//         }

//         int NodesBetween(Node *beg, Node *end){
//             int nodes = 1;
//             Node *p = beg;
//             while(p != end){
//                 nodes++;
//                 p = p->next;
//             }
//             return nodes;
//         }
//         void ExpandLinkedList(Node *beg , Node* end) {
//             struct Node *p;
//             struct Node *q;
//             p = beg;
//             while(p != end){
//                 q=p;
//                 p = p->next;
//                 if(p->data % 2== 0 && q->data % 2 == 0){
//                     Node *node = new struct Node;
//                     node->data = ((p->data + q->data) / 2);
//                     node->status = 'E';
//                     q->data = q->data / 2;
//                     q->status = 'E';
//                     p->data = p->data / 2;
//                     p->status = 'E';
//                     q->next = node;
//                     node->next = p;
                    
//                 }
//             }

//         }
// };

// int main() 
// {
//     LinkedList list;
//     // list.insert_end(54);
//     // list.insert_end(36);
//     // list.insert_end(37);
//     // list.insert_end(66);
//     list.insert_begin(30);
//     list.insert_begin(50);
//     list.insert_begin(16);
//     list.insert_begin(7);
//     list.insert_begin(9);
//     list.insert_begin(20);
//     list.insert_begin(5);
//     list.insert_begin(11);
//     list.insert_begin(45);
//     list.shrinkLinkedList(list.search(45), list.search(9));
//     list.shrinkLinkedList(list.search(7), list.search(30));
//     list.ExpandLinkedList(list.search(54), list.search(66));
//     list.disp();
//     return 0;
// }
