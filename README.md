# Xperimental-Library


Xperimental Library is a collection of small cross-platform C++ libraries and utilities written in C++17- powerfull and easy to implement. 
Some of the libraries are datastructures as in C++/stl. Example: std::list . Instead of using heap memory, used shared-memory that enhancing 
inter-process communications. It's fast and concise, increases industrial productivity.




``` cpp
#include<xperimental/pipe.h++>

 int main(){
   std::vector<int> int_v = { 12, 34, 33, 160, 45 };
   auto filtered_value = xperimental::from(v_int) | xperimental::filter([](auto x){
      return x%3 == 0;
   });

   auto transformed_value = xperimental::from(v_int) | xperimental::filter([](auto x){
               return x%3 == 0;
       }) | xperimental::transform([](auto x){
               return x*100;
   });
     
}
```

#Documentation

 - [https://nafisayaz.github.io/xperimental_lib.html][doc]

[doc]:https://nafisayaz.github.io/xperimental_lib.html



###See Espresso Framework Documentation 
- [https://nafisayaz.github.io/espresso/doc.html][doc]

[doc]:https://nafisayaz.github.io/espresso/doc.html


###Source - Espresso Framework Source
- [https://github.com/nafisayaz/Espresso][doc]

[doc]:https://github.com/nafisayaz/Espresso
