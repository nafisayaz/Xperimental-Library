
#include <iostream>
#include <string>
#include <vector>
#include <limits.h>

char current_char;
std::vector<char> result;
int last_index = 0;
int last_offset;

auto resize(int size){
  int required_bits = (5*size)/CHAR_BIT;
  result.resize(required_bits, '\0');
  std::cout << "result resized: " << result.size() << '\n';
}

auto up_bits()->void{

}

auto down_bits()->void{

}

auto set_bits( char ch)->void{
  int num_of_offset = (current_char > ch) ? (current_char-ch) : (ch-current_char);
  std::cout << "\n===========================\nnum_of_offset: "<<num_of_offset << '\n';
  std::cout << "current_char: "<<current_char << '\n';
  std::cout << "ch: "<<ch << '\n';


  for( int i=0; i < num_of_offset; ++i ){
    std::cout << "\n i=> " <<i << ": ";
    std::cout << ch;
  }

}

auto compress_fn(std::string str )->std::string{
  std::cout << " str => " << str << '\n';
  resize(str.size());

  if(!str.size()){ return str; }
  if(str.size() == 1) { return str; }


  //result = str[0];
  for(unsigned int i=1; i < str.size(); ++i){
    current_char = str[i-1];
    set_bits(str[i]);

  }
  std::cout << '\n';

  return str;

}
