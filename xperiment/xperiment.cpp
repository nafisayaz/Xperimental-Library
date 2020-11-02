

#include "xperiment.hpp"

std::vector<std::size_t>Xperiment::range_b(int lower, int upper)
{
	std::vector<std::size_t> result(((upper-lower)/32)+1, 0);
	while(lower not_eq  upper){
		if(int index = lower/32 ; int offset = lower%32){
			std::cout << "index = " << index <<"\n" << "offset = " << offset <<std::endl;
			result[index] = result[index] | (1 << offset);
		}
		++lower;
	}
	return result;
}
std::vector<std::size_t>Xperiment::range_v(int lower, int upper){
	std::vector<std::size_t> result;
	while(lower not_eq upper){
		result.push_back(lower);
		++lower;
	}
	return result;

}


From::From(){}
From::From(std::vector<std::size_t>& v): _v(v){}
From::~From(){}


template<typename Predicate> Filter<Predicate>::Filter(){}
template<typename Predicate> Filter<Predicate>::Filter(Predicate pre): _pre(pre){}
template<typename Predicate> Predicate Filter<Predicate>::expr()const{ return _pre; }
template<typename Predicate> Filter<Predicate>::~Filter(){}


From Xperiment::from( std::vector<std::size_t> v){ return From(v); }


template<typename Predicate>auto Xperiment::filter(Predicate pre)->Filter<Predicate>{
	return Filter<Predicate>(std::forward<Predicate>(pre));
}
