



PARSER_SRCS = $(wildcard xperiment/*.cpp)

PARSER_OBJS = $(PARSER_SRCS:xperiment/%.cpp=obj/%.o)

.PHONY: clean create generate make

all: clean create generate make

clean:
	@echo Cleaning up
	clear
	@rm -rf  obj/
	@rm -f run

create:
	@echo Making directories
	@mkdir -p obj/

generate:
	@echo Start compiling..

start_compilation: generate
	@echo Start compiling..

$(PARSER_OBJS): start_compilation
	@echo "\033[1;32m> Compiling $(@:obj/%.o=xperiment/%.cpp)\033[0m"
	@g++ -std=c++17 -c  $(@:obj/%.o=xperiment/%.cpp) -o $@

make: $(PARSER_OBJS)
	@echo "\033[1;32m> Linking {$(PARSER_OBJS)}\033[0m"
#	@g++ -std=c++17 main.cpp -g  $(PARSER_OBJS) -o run
#	@g++ -std=c++17 main.cpp $(PARSER_SRCS) -o run
	@g++ -std=c++17 main.cpp -o run
	@echo Done




