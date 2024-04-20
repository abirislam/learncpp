CPPFLAGS = -std=c++20 -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Werror

# 1-x.o: 1-x.cpp
# 	g++ $(CPPFLAGS) -o 1-x 1-x.cpp

2-8.o: 2-8c.cpp 2-8d.cpp
	g++ $(CPPFLAGS) -o 2-8 2-8c.cpp 2-8d.cpp

clean:
	rm *.o output
