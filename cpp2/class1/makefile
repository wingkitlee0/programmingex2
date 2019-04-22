CXX=g++
CXXFLAGS=-std=c++11

DEPS = 
OBJS = test.o

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c -o $@ $< 
a.out: $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf  *.o
