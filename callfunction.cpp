

#include <iostream>
#include "callfunction.hpp"
#include "functions.hpp"



Function Ravi(int x){
  console.log("x: ", x, "\n");
}


int main(){


  Ravi(234);

  //
  App app;
  app.get("path", function(x, y){
	   console.log("x: ",x , "y: ", y );
   });


   // std::cout << f(100, 200) << "\n";
   //
   app.get("path", f);
   //
   // hello(20);
   //app.get("path", hello());


}
