CPPFLAGS = -std=c++20 -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Werror

2-10.o: 2-10.cpp
	g++ $(CPPFLAGS) -o 2-10 2-10.cpp

2-8.o: 2-8c.cpp 2-8d.cpp
	g++ $(CPPFLAGS) -o 2-8 2-8c.cpp 2-8d.cpp

clean:
	rm *.o output
