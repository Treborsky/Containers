#ifndef CNT_LINKED_LIST
#define	CNT_LINKED_LIST

#include <iostream>
#include "node.h"

namespace cnt {
	class LinkedList {
		public:
			LinkedList() : size_(0) {
				head_ = nullptr;
				tail_ = head_;
			}

			~LinkedList() { delete head_; } // will call the node destructor, recursively deleting the entire list

			void append(int val);

			void print() const;

			const int get_size() const { return size_; }

		private:
			int size_;
			Node* head_;
			Node* tail_;
	};
}


#endif // CNT_LINKED_LIST
