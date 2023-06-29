
CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SOURCES		= \
	Animal.cpp \
	main.cpp \

OBJECTS		= $(SOURCES:.cpp=.o)

TARGET		= polymorphsim

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJECTS)

fclean:clean
	$(RM) $(TARGET)

re: fclean
	make all

.PHONY: all clean fclean re
