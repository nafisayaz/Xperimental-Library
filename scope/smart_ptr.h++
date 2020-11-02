
#pragma once

#include <iostream>
#include <ostream>
#include <istream>


template<typename T>class smart_ptr{
  public:
    smart_ptr(T* ptr);
    ~smart_ptr();
    smart_ptr<T>& operator++();
    smart_ptr<T>& operator--();
    void operator=(int n);
    bool operator==(int n);
    T operator*();

    friend std::ostream& operator << ( std::ostream& os, smart_ptr<T>& sm_ptr ){
      os << *sm_ptr;
      return os;
    }


  private:
    T* _ptr = nullptr;
};


namespace Xperiment{
	template <typename T>smart_ptr<T> make_smart_ptr(T* ptr);
}
#include "smart_ptr.cpp"
