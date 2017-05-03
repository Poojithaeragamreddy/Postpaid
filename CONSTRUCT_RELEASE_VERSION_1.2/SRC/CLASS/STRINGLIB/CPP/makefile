include ../../../../config.mk

OBJECTS = stringlib.o

all: $(OBJECTS)

$(OBJECTS): %.o: %.cpp
	$(CC) -c $< -o $@
	cp *.o $(BUILD)

clean:
	rm -f *.o
