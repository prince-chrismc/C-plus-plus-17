CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		C++1z.o

LIBS =

TARGET =	C++1z

$(TARGET):	$(OBJS)
	g++-7 -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
