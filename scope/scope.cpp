

#include "scope.hpp"

template <typename T>scope_exit<T>::scope_exit(T &&t) : t_{std::move(t)} {}
template <typename T>scope_exit<T>::~scope_exit() { t_(); }
template <typename T>scope_exit<T> Xperiment::make_scope_exit(T &&t) {
	return scope_exit<T>{ std::move(t) };
}
