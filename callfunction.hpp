
#pragma once

#include <iostream>
#include <string>

#define function(req, res) []( int req, int res)

// template<typename T>
class App{

public:
  App(){}
  ~App(){}
  template<typename Function>void get(std::string path, Function f  );

};


template<typename Function>void App::get(std::string path, Function f){
    f(23, 25);
}


class Function{

  public:
    Function(){
      std::cout<< "Function()\n";
    }
    ~Function(){
      std::cout<< "~Function()\n";

    };

};


class Console{
  public:

    template<typename... Args> void log( Args&&... args){
        (std::cout << ... << std::forward<Args>(args));
    }


};

Console returnConsole(){
  Console console;
  return console;
}

#define console returnConsole()
