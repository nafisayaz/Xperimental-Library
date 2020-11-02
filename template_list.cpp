

#include <iostream>
#include <unistd.h>


template<typename T>struct Node
{
	Node<T>* next = nullptr;
	T data;
};

template<typename T>class List
{
	public:
		List(T data);
		~List();

		struct Iterator
		{
			Iterator* next = nullptr;
			T data;
			auto operator++()->List<T>::Iterator*;
			auto operator++(int)->List<T>::Iterator*;

			auto operator*(List<T>::Iterator It)->T;
		};

		auto create(T data)->Node<T>*;

		auto insert(T data)->void;
		auto print()->void;

		auto length()->int;

		auto operator[](const int )->int;

		auto begin()->List<T>::Iterator*;
		auto end()->List<T>::Iterator*;



	private:
		Node<T>* node = nullptr;
		Node<T>* first =nullptr ;
		Node<T>* last = nullptr ;
		int size = 0;
};


template<typename T>List<T>::List(T data)
{
	this->node = create(data);
	++size;
	first = this->node;
}
template<typename T>List<T>::~List(){}

template<typename T >auto List<T>::create(T data)->Node<T>*
{
	Node<T>* new_node = new Node<T>();
	new_node->data = data;
	new_node->next = nullptr;

	return new_node;
}

template<typename T>auto List<T>::insert(T data)->void
{
	Node<T>* head = this->node;
	while(this->node != nullptr and this->node->next != nullptr)
	{
		this->node = this->node->next;
	}
	std::cout<<"\n";
	this->node->next = create(data);
	this->node = head;
	++size;

}

template<typename T>auto List<T>::print()->void
{
	Node<T>* tmp = this->node;
	while(this->node != nullptr)
	{
		std::cout<<" -> "<<this->node->data<<"\n";
		this->node = this->node->next;
	}
	this->node = tmp;
}

template<typename T >auto List<T>::length()->int{ return size; }

template<typename T>auto List<T>::operator[](const int i)->int
{
	Node<T>* tmp = this->node;
	int index = 0;
	while(index < i)
	{
		tmp = tmp->next;
		++index;
	}
	return tmp->data;
}

template<typename T>auto List<T>::Iterator::operator++()->List<T>::Iterator*
{
	this = this->next;
	return this;
}


template<typename T>auto List<T>::Iterator::operator++(int)->List<T>::Iterator*
{
	List<T>::Iterator It = first;
	It = It->next;
	return It;
}

template<typename T>auto List<T>::Iterator::operator*(List<T>::Iterator It)->T
{
	std::cout<<"DATA: \n";
	return It->data;
}

template<typename T>auto List<T>::begin()->List<T>::Iterator*{ return reinterpret_cast<List<T>::Iterator*>(first); }
template<typename T>auto List<T>::end()->List<T>::Iterator*{ return reinterpret_cast<List<T>::Iterator*>(last); }



int main()
{
	List<int>l_int(3);

	l_int.insert(54);
	l_int.insert(38);
	l_int.insert(23);
	l_int.insert(10);
	l_int.insert(134);

	List<int>::Iterator* begin = l_int.begin();
	List<int>::Iterator* end = l_int.end();
	while(begin != end)
	{
		std::cout<<begin->data<<" ";
		begin = begin->next;

	}
	std::cout<<std::endl;

	for(int i=0; i<l_int.length(); ++i)
	{
		std::cout<<"\nl_int["<<i<<"] => "<<l_int[i];
	}
	std::cout<<std::endl;


}
