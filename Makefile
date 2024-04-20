CPPFLAGS = -std=c++20 -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Werror

# 1-x.o: 1-x.cpp
# 	g++ $(CPPFLAGS) -o 1-x 1-x.cpp

<<<<<<< HEAD
2-4.o: 2-4.cpp
	g++ $(CPPFLAGS) -o 2-4 2-4.cpp
=======
2-2b.o: 2-2b.cpp
	g++ $(CPPFLAGS) -o 2-2b 2-2b.cpp
>>>>>>> 572947ddf68683c6cb986acefe8ac4bbcc7784ee

clean:
	rm *.o output
