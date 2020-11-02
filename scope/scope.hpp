
#pragma once

template <typename T>struct scope_exit
{
	scope_exit(T &&t);
	~scope_exit();
	T t_;
};

namespace Xperiment{
	#define cleanup(n)  make_scope_exit([&n]() mutable { delete n; n = nullptr; });
	template <typename T>scope_exit<T> make_scope_exit(T &&t);
}
#include "scope.cpp"
