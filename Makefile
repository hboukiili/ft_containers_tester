src_tester = vector_tester.cpp
src = main.cpp
FLAGS =   -Wall -Wextra -Werror
vector = vector
CC = c++


vector : $(src_tester)
	@$(CC) $(FLAGS) $(src_tester) -o vector_tester && ./vector_tester
	@tput setaf 2; echo "vector tester IS READY"

clean : 
	@rm -f containers
	@rm -f vector_tester
