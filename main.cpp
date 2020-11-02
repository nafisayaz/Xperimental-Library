
#include <iostream>
#include <vector>
#include <bitset>
#include "scope/smart_ptr.h++"
#include "callfunction.hpp"



// #include "xperiment/xperiment.hpp"
// #include "scope/scope.hpp"
//#include "range_b/range_b.hpp"
// #include "compression/compression.hpp"
// using namespace Xperiment;


/*
int * test(){
	int* n  = new int{1000};

	auto cleanup = make_scope_exit([&n]()mutable{ delete n; n=nullptr; });

	std::cout << "n=> " << n <<std::endl;
	std::cout << "*n=> " << *n <<std::endl;
	return n;

}


*/




int main()
{



	// smart_ptr<int> int_ptr(new int(100));
	// auto int_ptr = Xperiment::make_smart_ptr(new int(100));
	// std::cout << int_ptr << "\n";
	// ++int_ptr;
	// std::cout << int_ptr << "\n";
	// --int_ptr;
	// std::cout << int_ptr << "\n";
	// --int_ptr;
	// std::cout << int_ptr << "\n";
	// int_ptr = 20;
	// std::cout << (int_ptr==20) << "\n";
	// std::cout << int_ptr << "\n";
	//


	// std::cout << "Destructor call after this!!" << "\n";









	  // char ch = '\0';
	  // std::cout << std::bitset<8>(ch) << "\n";
		//
		// auto str = compress_fn(std::string("abhjgvervr"));


	//
	// auto v_int = range_v(10, 20);
	// auto x = from(range_v(10, 200)) | filter([](int i){
	// 		return i%50 == 0;
	// 	});
	//
	// for(auto s : x) std::cout<< s << std::endl;

	/*

	int *n = test();
	std::cout << "n=> " << n <<std::endl;
	std::cout << "*n=> " << *n <<std::endl;

	auto v = range_b(0, 100);
	int j=0;
	std::cout << " ===> " << v;

	while(v not_eq nullptr){
		for(int i = 0; i< 32; ++i ){
			if(v->val & (1 << i))
				std::cout << (32*j)+i << ", ";
		}
		++j;
		v = v->next;
	}
*/


/*
	int j = 0;
	for(auto val :v){
		for(int i = 0; i< 32; ++i ){
			if(val & (1 <<i))
				std::cout << (32*j)+i << ", ";
		}
		++j;

		std::cout<<"\n"<< std::bitset<32>(val);
		std::cout<<std::endl;
	}
*/

	//
	// List<int>l_int(3);
	//
	// l_int.insert(54);
	// l_int.insert(38);
	// l_int.insert(23);
	// l_int.insert(10);
	// l_int.insert(134);
	//
	// List<int>::Iterator begin = l_int.begin();
	// List<int>::Iterator end = l_int.end();
	// while(begin != end)
	// {
	// 	std::cout<<begin->data<<" ";
	// 	begin = begin->next;
	//
	// }
	// std::cout<<std::endl;
	//
	// for(int i=0; i<l_int.length(); ++i)
	// {
	// 	std::cout<<"\nl_int["<<i<<"] => "<<l_int[i];
	// }
	// std::cout<<std::endl;

}
