

#include "range_b.hpp"



template<typename Range_b> constexpr Range_B<Range_b>::Range_B(Range_b head ):_head(head){}
template<typename Range_b> Range_B<Range_b>::~Range_B(){ delete _head; }




template<typename T>constexpr  Range_B::create_node(const T val){ Range_b<T>* r = new Range_b<T>();  r->val = val; return r; }
template <typename T>constexpr void Range_B::push_back(Range_b<T>* head, const T val){

	if(!head->val){ head->val = val; return; }

	while( head->next not_eq nullptr){
		head = head->next;
	}
	head->next = create_node(val);
}

template<typename T>constexpr Range_B<Range_b<T>*>* Xperiment::range_b(T lower, const T upper){

	if( !(upper-lower)){ auto r = new Range_B<Range_b<T>*>(new Range_b<T>()); return r; }
	//if( !(upper-lower)){ auto r = new Range_b<T>(); return r; }

	auto  head = create_node(0);
	T val = 0;
	while(lower not_eq upper){
		if(lower%32 == 0){
			push_back(head, val);
			val = 0;
		}
		val = val | (1 << lower%32);
		++lower;
		if( lower == upper){
			push_back(head, val);
			auto R = new Range_B<Range_b<T>*>(head);
			return R;
			//return head;
		}
	}
	auto R = new Range_B<Range_b<T>*>(head);
	return R;


	//return head;

}
