CPPFLAGS = -std=c++20 -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Werror

# 1-x.o: 1-x.cpp
# 	g++ $(CPPFLAGS) -o 1-x 1-x.cpp

2-2.o: 2-2.cpp
	g++ $(CPPFLAGS) -o 2-2 2-2.cpp

clean:
	rm *.o output
