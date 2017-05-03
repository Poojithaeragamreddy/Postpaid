include ../../../../config.mk

OBJECTS = model.o
PROCPP = model.cpp

all: $(PROCPP) $(OBJECTS) $(BUILD)
#all: $(OBJECTS)

$(PROCPP):%.cpp:%.pc
	proc code=cpp PARSE=NONE CPP_SUFFIX=cpp model.pc 

$(OBJECTS): %.o: %.cpp
	$(CC) -c -I $(ORACLE_LIB) $< -o $@
	-cp *.o $(BUILD)

clean:
	-rm -f *.cpp *.o t* *.lis

