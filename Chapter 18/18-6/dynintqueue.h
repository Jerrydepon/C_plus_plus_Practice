#ifndef DYNINTQUEUE_H
#define DYNINTQUEUE_H

class DynIntQueue
{
	private:
		class QueueNode
		{
			friend class DynIntQueue;
			int value;
			QueueNode *next;
			QueueNode(int value1, QueueNode *next1 = 0)
			{
				value = value1;
				next = next1;
			}
		};
		QueueNode *front;
		QueueNode *rear;

	public:
		DynIntQueue();
		~DynIntQueue();
		void enqueue(int);
		void dequeue(int &);
		bool isEmpty();
		void clear();
};

#endif
