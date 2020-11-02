
#include "smart_ptr.h++"


template<typename T> smart_ptr<T>::smart_ptr(T* ptr){
  _ptr = ptr;
  std::cout << "smart_ptr() = "<< *_ptr <<"\n";
}
template<typename T> smart_ptr<T>::~smart_ptr(){
  std::cout << "~smart_ptr() = "<< *_ptr <<"\n";
  delete _ptr;
}

template<typename T> smart_ptr<T>& smart_ptr<T>::operator++(){
  ++(*_ptr);
  return *this;
}

template<typename T> smart_ptr<T>& smart_ptr<T>::operator--(){
  --(*_ptr);
  return *this;
}

template<typename T> void smart_ptr<T>::operator=(int n){
  *_ptr = n;
  // return _ptr;
}
template<typename T> bool smart_ptr<T>::operator==(int n){
  return *_ptr == n ? true: false;
}
template<typename T> T smart_ptr<T>::operator *(){
  return *_ptr;
}




template <typename T>smart_ptr<T> Xperiment::make_smart_ptr(T* ptr){
  return smart_ptr<T>(ptr);
}
