include ./config.mk
SRC_HOME = $(PROGRAM_HOME)/SRC

SOURCES = SRC/CLASS/CONNECTION/CPP SRC/CLASS/BILLING/CPP SRC/CLASS/TARIFF/CPP SRC/CLASS/CALLLOG/CPP SRC/CLASS/BONUS/CPP SRC/CLASS/CUSTOMER/CPP SRC/CLASS/LOGIN/CPP SRC/CLASS/STRINGLIB/CPP SRC/CLASS/TARIFF/CPP SRC/CLASS/UDSTRLIB/CPP SRC/CLASS/VALIDATION/CPP SRC/CONTROLLER/CRCONTROLLER/CPP SRC/CONTROLLER/LOGINCONTROLLER/CPP SRC/CONTROLLER/MANAGERCONTROLLER/CPP SRC/MODEL/CRMODEL/CPP SRC/MODEL/LOGINMODEL/CPP SRC/MODEL/MANAGERMODEL/CPP SRC/VIEW/CRVIEW/CPP SRC/VIEW/LOGINVIEW/CPP SRC/VIEW/MAINVIEW/CPP SRC/VIEW/MANAGERVIEW/CPP SRC/MAIN/CPP 
CONNECTION_OBJECT = $(BUILD)/connection.o
BILLING_OBJECT = $(BUILD)/billing.o
TARIFF_OBJECT = $(BUILD)/tariff.o
CALLLOG_OBJECT = $(BUILD)/calllog.o
BONUS_OBJECT = $(BUILD)/bonus.o
CUSTOMER_OBJECT = $(BUILD)/customer.o
LOGIN_OBJECT = $(BUILD)/login.o
STRINGLIB_OBJECT = $(BUILD)/stringlib.o
TARIFF_OBJECT = $(BUILD)/tariff.o
UDSTRLIB_OBJECT = $(BUILD)/udstrlib.o
VALIDATION_OBJECT = $(BUILD)/validation.o
CRCONTROLLER_OBJECT = $(BUILD)/crcontroller.o
LOGINCONTROLLER_OBJECT = $(BUILD)/logincontroller.o
MANAGERCONTROLLER_OBJECT = $(BUILD)/controlmanager.o
CRMODEL_OBJECT = $(BUILD)/crmodel.o
LOGINMODEL_OBJECT = $(BUILD)/model.o
MANAGERMODEL_OBJECT = $(BUILD)/managermodel.o
CRVIEW_OBJECT = $(BUILD)/crview.o
LOGINVIEW_OBJECT = $(BUILD)/loginview.o
MAINUI_OBJECT = $(BUILD)/mainview.o
MANAGERVIEW_OBJECT = $(BUILD)/managerview.o
MAIN_OBJECT = $(BUILD)/main.o

OBJECTS = $(CONNECTION_OBJECT) $(BILLING_OBJECT) $(TARIFF_OBJECT) $(CALLLOG_OBJECT) $(BONUS_OBJECT) $(CUSTOMER_OBJECT) $(LOGIN_OBJECT) $(STRINGLIB_OBJECT) $(TARIFF_OBJECT) $(UDSTRLIB_OBJECT) $(VALIDATION_OBJECT) $(CRCONTROLLER_OBJECT) $(LOGINCONTROLLER_OBJECT) $(MANAGERCONTROLLER_OBJECT) $(MANAGERMODEL_OBJECT) $(CRMODEL_OBJECT) $(LOGINMODEL_OBJECT) $(CRVIEW_OBJECT) $(LOGINVIEW_OBJECT) $(MAINUI_OBJECT) $(MANAGERVIEW_OBJECT) $(MAIN_OBJECT) 

all: COMPILE LINK

COMPILE:
	 for d in $(SOURCES); \
		do \
		$(MAKE) --directory=$$d ; \
		done

LINK:
	$(CC) -o $(BIN) $(OBJECTS) -lclntsh -L $(ORACLE_HOME)/lib -z muldefs

clean:
	for d in $(SOURCES); \
	do \
	$(MAKE) --directory=$$d clean; \
	done
	rm -f $(BUILD)/*

