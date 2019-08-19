#ifndef DYNINTSTACK_H
#define DYNINTSTACK_H

class DynIntStack
{
	private:
		class StackNode
		{
			friend class DynIntStack;
			int value;
			StackNode *next;
			
			StackNode(int value1, StackNode *next1 = 0)
			{
				value = value1;
				next = next1;
			}
		};
		StackNode *top;
	
	public:
		DynIntStack()
		{
			top = 0;
		}
		void push(int);
		void pop(int &);
		bool isEmpty();
};

#endif
