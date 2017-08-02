#ifndef SIMPLELIST_H
#define SIMPLELIST_H

namespace Generic
{
	class NoElement{};

	template<typename ValueType>
	class SimpleList
	{
	private:
		class Node
		{
		public:
			Node(const ValueType& val) : value(val)
			{
				next = 0;
			}

			ValueType value;
			Node* next;
		};

		Node* front;
		Node* back;
	public:
		SimpleList()
		{
            front = back = 0;
		}
        
        /*
        store.AddElement(Interval(7, 31));
        object of interval created and send as an argument
        which is implemented by taking parameter of typename Interval by reference.
		*/
        //void AddElement(const ValueType& value, bool above=true)
        void AddElement(const ValueType& value, bool above=true)
		{
            //T*  ptr  = new  T();
            Node* node = new Node(value);//dynamic instantiation using parameterized constructor


			if(front == 0)
				front = back = node;
			else
                if(above )
				node->next = front, front = node; //LIFO
            else
				back->next = node, back = node; //FIFO
                
             }

		ValueType& FirstElement() const
		{
			if(front == 0) throw NoElement();
			return front->value;
		}

		ValueType& LastElement() const
		{
			if(back == 0) throw NoElement();
			return back->value;
		}

		bool HasElements() const
		{
			return front != 0;
		}

		void RemoveElement()
		{
			if(front == 0) throw NoElement();
			Node* node = front;
			front = front->next;
			delete node;
			if(front == 0) back = 0;
		}

		~SimpleList()
		{
			while(front)
				RemoveElement();
		}

     /*
		class Iterator
		{
		public:
			Iterator(Node* node)
			{
				current = node;
			}

			ValueType& operator*() const
			{
				return current->value;
			}

			ValueType* operator->() const
			{
				return &current->value;
			}

			bool operator!=(const Iterator& other) const
			{
				return current != other.current;
			}

			Iterator& operator++()
			{
				current = current->next;
				return *this;
			}

		private:
			Node* current;
		};

		Iterator Begin() const
		{
			return Iterator(front);
		}

		Iterator End() const
		{
			return Iterator(back->next);
		}
        */
	};
    
    
}

#endif













