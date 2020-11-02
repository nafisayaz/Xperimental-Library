
#pragma once

#include <ostream>

template<typename T>struct Range_b{
	Range_b<T>* next = nullptr;
	T val = 0;
};


class Range_B{
	public:
		explicit constexpr Range_B(Range_b head);
		template<typename T>constexpr Range_b<T>* create_node(const T val);
		template <typename T>constexpr void push_back(Range_b<T>* head, const T val);
		~Range_B();

	friend std::ostream& operator<<(std::ostream& os, Range_B<Range_b> R );
	private:
		Range_b _head = nullptr;
};


template<class Range_b>std::ostream& operator<<(std::ostream& os, Range_B<Range_b> R){
	
	for(auto i = 0; i<32; ++i){
		//if( R._head->val | (1 << i))
			//os << i <<"\n";
		
		os << *R->_head->val;
	}
	return os;
}

namespace Xperiment{
	
	template<typename T>constexpr Range_B<Range_b<T>*>* range_b(const T lower, const T upper ); 
}


#include "range_b.cpp"
