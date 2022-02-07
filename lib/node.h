#ifndef CNT_NODE
#define CNT_NODE

namespace cnt {
	struct Node {
		Node(int val=0, Node* ptr=nullptr) : value(val), next(ptr) {} 
		~Node() { delete next; }
		int value;
		Node* next;
	};
}

#endif // CNT_NODE
