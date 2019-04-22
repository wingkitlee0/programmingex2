CXX=g++
CXXFLAGS=-std=c++11

DEPS = node.h
OBJS = testptr1.o

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c -o $@ $< 
a.out: $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf  *.o
