CXX = g++
CXXFLAGS = -g -std=c++17 -Wall -pedantic
LDXXFLAGS = -lncurses

OBJS = main.o gameboard.o	# hier warden zukünftige Module hinzugefügt!
prog: $(OBJS)
		$(CXX) $(CXXFLAGS) -o prog $(OBJS) $(LDXXFLAGS)
%.o: %.cpp
		$(CXX) $(CXXFLAGS) -c $<
clean:
		rm -f prog *.o
