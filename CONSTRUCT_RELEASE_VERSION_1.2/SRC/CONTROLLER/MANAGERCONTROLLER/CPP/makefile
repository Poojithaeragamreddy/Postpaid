include ../../../../config.mk

OBJECTS = controlmanager.o

all: $(OBJECTS)

$(OBJECTS): %.o: %.cpp
	$(CC) -c $< -o $@
	cp *.o $(BUILD)

clean:
	rm -f *.o
