CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinclude

OBJS = main.o src/MenuItem.o src/Appetizer.o src/MainCourse.o src/Dessert.o

party_menu: $(OBJS)
	$(CXX) $(CXXFLAGS) -o party_menu $(OBJS)

main.o: main.cpp include/Appetizer.h include/MainCourse.h include/Dessert.h
	$(CXX) $(CXXFLAGS) -c main.cpp

src/MenuItem.o: src/MenuItem.cpp include/MenuItem.h
	$(CXX) $(CXXFLAGS) -c src/MenuItem.cpp -o src/MenuItem.o

src/Appetizer.o: src/Appetizer.cpp include/Appetizer.h include/MenuItem.h
	$(CXX) $(CXXFLAGS) -c src/Appetizer.cpp -o src/Appetizer.o

src/MainCourse.o: src/MainCourse.cpp include/MainCourse.h include/MenuItem.h
	$(CXX) $(CXXFLAGS) -c src/MainCourse.cpp -o src/MainCourse.o

src/Dessert.o: src/Dessert.cpp include/Dessert.h include/MenuItem.h
	$(CXX) $(CXXFLAGS) -c src/Dessert.cpp -o src/Dessert.o

clean:
	rm -f *.o src/*.o party_menu 