
#pragma once

#include <vector>
#include <utility>
#include <ostream>

class From
{
	public:
		From();
		From(std::vector<std::size_t>& v);
		~From();
		template<typename Predicate>auto operator |(Predicate pre){
			std::vector<std::size_t> result;
			for(auto s : _v){
				if(pre._pre(s)) result.push_back(s);
			}
			return result;
		}



	private:
		std::vector<std::size_t> _v;
};

template<typename Predicate>class Filter{
	public:
		Filter();
		Filter(Predicate pre);
		Predicate expr()const;
		~Filter();

		friend class From;

	private:
		Predicate _pre;
};

namespace Xperiment{

	std::ostream& operator<<(std::ostream& os, std::vector<int>v);
	std::vector<std::size_t> range_b(int lower, int upper);
	std::vector<std::size_t> range_v(int lower, int upper);
	template<typename T, typename U>std::vector<std::size_t> range(T lower, U upper)=delete;
	From from( std::vector<std::size_t> v);
	template<typename Predicate> auto filter(Predicate pre)->Filter<Predicate>;


}

#include "xperiment.cpp"
