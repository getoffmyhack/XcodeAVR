#        1         2         3         4         5         6         7         8
#2345678901234567890123456789012345678901234567890123456789012345678901234567890
################################################################################
#                                                                              #
#   AVR Project Makefile                                                       #
#                                                                              #
#       all                                                                    #
#       build (default target)                                                 #
#       flash                                                                  #
#       serial                                                                 #
#       clean                                                                  #
#                                                                              #
################################################################################

################################################################################
#                                                                              #
#  All variables that contain a ___VARIABLE_NAME___ marker will be replaced    #
#  by the Xcode project template.  When not using the Xcode project template,  #
#  define the variables as required for the project.                           #
#                                                                              #
################################################################################

################################################################################
#####
##### PROJECT
#####
##### The name of the project used as the build target name
#####
#####   -   Allow Xcode to name project from template;
#####   -   Explicitly configure project name;
#####   -   Create project name from name of parent directory;

PROJECT         = ___PROJECTNAME___
#PROJECT         =  my_project_name
#PROJECT         = $(lastword $(subst /, ,$(shell cd ..;pwd)))

################################################################################
#####
##### Project's version, passed to source as PROJECT_VERSION_[MAJOR,MINOR]
#####
##### VERSION_MAJOR     -   Project's Major version number
##### VERSION_MINOR     -   Project's Minor version number

VERSION_MAJOR   = 0
VERSION_MINOR   = 1

################################################################################
#####
##### The following variables need to be set if not using ARDUINO variable
#####
##### MCU           -   Target AVR `avr-as --help` for supported target list
#####                   ex: atmega328p
##### CLOCK         -   Clock speed of hardware, passed as F_CPU during build
#####                   ex: 16000000
##### HFUSE         -   High Fuse bits
##### LFUSE         -   Low Fuse bits
##### EFUSE         -   Extended Fuse bits

MCU             = ___VARIABLE_MCU___
CLOCK           = ___VARIABLE_F_CPU___
#HFUSE           =
#LFUSE           =
#EFUSE           =

################################################################################
#####
##### The following avrdude variables need to be set if not using ARDUINO var
#####
##### AVRDUDE_PROGRAMMER    -   programmer used; `avrdude -c\?` for a list
#####                           ex: arduino 
##### AVRDUDE_PORT          -   port on which programmer is attached
#####                           ex: /dev/tty.usb*
##### AVRDUDE_BAUD          -   buad rate used for arduino/serial programmers
##### AVRDUDE_BITCLOCK      -   bitclock for ISP programmers
#####

AVRDUDE_PROGRAMMER  =   ___VARIABLE_PROGRAMMER___
AVRDUDE_PORT        =	___VARIABLE_PORT___
AVRDUDE_BAUD        =   115200
#AVRDUDE_BITCLOCK    =   1


################################################################################
#####
##### Serial Console
#####
##### SERIAL_PORT       -	Port used for serial comms, usualy the same
#####                       port as the arduino / avrdude port
#####
##### SERIAL_BAUD       -	Baud rate used for serial comms, passed to
#####                       source as UART_BAUD

SERIAL_PORT         =   $(AVRDUDE_PORT)
SERIAL_BAUD         =   115200


################################################################################
#####
##### EXTRAINCDIRS  -   Add any directories which contain include files not
#####                   not found in the standard locations.  This is a
#####                   list of directories separated by spaces,  directories
#####                   which contain spaces in their name need to be quoted.
#####                   These are added with the -I argument.
#####
##### EXTRALIBS     -   Any libraries that need to be linked in.  This is a
#####                   space separated list which will be expanded as -lname
#####
##### EXTRALIBDIRS  -   Non-standard directories where libraries in EXTRALIBS
#####                   can be found.  This is a list of directories separated
#####                   by spaces,  directories which contain spaces in their
#####                   name need to be quoted.  These are added with the -L
#####                   argument.
#####
##### EXTRASRCDIRS  -   Space separated list of directories to seach for any
#####                   source files not found in the project src/ directory.
#####                   Directories which contain spaces in ther name need to
#####                   be quoted.

EXTRAINCDIRS    =   
EXTRALIBS       =
EXTRALIBDIRS    =
EXTRASRCDIRS    =   

################################################################################
#####
##### USE_MATH_LIB      -   if defined will link project with math library (-lm)
#####
##### USE_PRINTF_LIB    = standard  - uses standard printf lib
#####                   = min       - uses minimal printf lib
#####                   = float     - uses floating point printf lib
#####
##### USE_SCANF_LIB     - same options as USE_PRINTF_LIB

#USE_MATH_LIB    = true
#USE_PRINTF_LIB  = min
#USE_SCANF_LIB   = float

################################################################################
#####
##### EXTRADEFS     -   Extra -D defines
##### EXTRACFLAGS   -   Extra flags passed to C compiler
##### EXTRACXXFLAGS -   Extra flags passed to C++ compiler
##### EXTRAASMFLAGS -   Extra flags passed to assembler
##### EXTRACPPFLAGS -   Extra flags passed to pre-processor
##### EXTRALDFLAGS  -   Extra flags passed to linker

EXTRADEFS       =
EXTRACFLAGS     =
EXTRACXXFLAGS   =
EXTRAASMFLAGS   =
EXTRACPPFLAGS   =
EXTRALDFLAGS    =

################################################################################
#####
##### HEXFORMAT     - format for .hex file output: ihex, binary, srec

HEXFORMAT       = ihex

################################################################################
#####
##### Optimization level, can be [0, 1, 2, 3, s].
#####     0 = turn off optimization. s = optimize for size.
#####     (Note: 3 is not always the best optimization level. See avr-libc FAQ.)

OPTLEVEL        = s

################################################################################
#####
##### Debugging format.
#####     Native formats for AVR-GCC's -g are dwarf-2 [default] or stabs.
#####     AVR [Extended] COFF format requires stabs, plus an avr-objcopy run.

DEBUG           = stabs

################################################################################
#                                                                              #
#                           CONFIG FINISHED                                    #
#                                                                              #
# There is generally nothing else that needs to be edited below unless there   #
# are some local changes to be made.                                           #
#                                                                              #
################################################################################

################################################################################
#####
#####   Text Strings

TEXT_DASH_LINE = \
--------------------------------------------------------------------------------

################################################################################
#####
#####   Project Directories
#####
#####   BUILDDIR    -   Location of build files (.s, .lss, .lst)
#####   BINDIR      -   Location of final output (.elf, .hex, .eep)
#####   OBJDIR      -   locaiton of compiled object files (.o)
#####   INCDIR      -   locaiton of include files
#####   SRCDIR      -   location of source files (.c, .cpp, .cc, .C, .S)

BUILDDIR        = build
BINDIR          = bin
OBJDIR          = obj
INCDIR          = include
SRCDIR          = src

################################################################################
#####
#####   Executables

CC              = avr-gcc
OBJCOPY         = avr-objcopy
OBJDUMP         = avr-objdump
SIZE            = avr-size
NM              = avr-nm
AVRDUDE         = avrdude
REMOVE          = rm -f
MKDIR           = mkdir -p
KILL 		    = kill

################################################################################
#####
#####   Include and Library directories; Defines

INCS            = -I. 
INCS           += -I$(INCDIR)
INCS           += $(patsubst %,-I%,$(EXTRAINCDIRS))

LIBDIRS         = $(patsubst %,-L%,$(EXTRALIBDIRS))
LIBS            = $(patsubst %,-l%,$(EXTRALIBS))

DEFS            = $(patsubst %,-D%,$(EXTRADEFS))

CDEFS           = -DPROJECT_VERSION_MAJOR=$(VERSION_MAJOR)
CDEFS          += -DPROJECT_VERSION_MINOR=$(VERSION_MINOR)
CDEFS          += -DUART_BAUD=$(SERIAL_BAUD)
CDEFS          += $(patsubst %,-D%,$(EXTRADEFS))


################################################################################
#####
#####   Target / Source / Object / Build / Bin Files

TARGET          = $(PROJECT)
VPATH           = $(SRCDIR):$(EXTRASRCDIRS)

CSRCS           = $(wildcard $(SRCDIR)/*.c)
CSRCS          += $(foreach dir, $(EXTRASRCDIRS), $(wildcard $(dir)/*.c))

#CXXSRCS      =  $(wildcard $(SRCDIR)/*.cpp $(SRCDIR)/.cc)

OBJFILES        = $(addprefix obj/, $(notdir $(CSRCS:.c=.o)))

LSTFILES        =  $(OBJFILES:$(OBJDIR)/%.o=$(BUILDDIR)/%.lst)

################################################################################
#####
#####   printf / scanf and math lib options

printf_min	= -Wl,-u,vfprintf -lprintf_min
printf_flt	= -Wl,-u,vfprintf -lprintf_flt

scanf_min	= -Wl,-u,vfscanf -lscanf_min
scanf_flt	= -Wl,-u,vfscanf -lscanf_flt

math_lib	= -lm

ifneq ($(USE_PRINTF_LIB), standard)
    ifeq ($(USE_PRINTF_LIB), min)
        LIBS += $(printf_min)
    else ifeq ($(USE_PRINTF_LIB), float)
        LIBS += $(printf_flt)
        USE_MATH_LIB = true
    endif
endif

ifneq ($(USE_SCANF_LIB), standard)
    ifeq ($(USE_SCANF_LIB), min)
        LIBS += $(scanf_min)
    else ifeq ($(USE_SCANF_LIB), float)
        LIBS += $(scanf_flt)
        USE_MATH_LIB = true
    endif
endif

ifeq ($(USE_MATH_LIB), true)
    LIBS += $(math_lib)
endif

################################################################################
#####
#####   AVR Options

AVRFLAGS    =   -mmcu=$(MCU)

################################################################################
#####
#####   Pre Processor flags

CPPFLAGS     =  -DF_CPU=$(CLOCK)
CPPFLAGS   	+=  $(CDEFS)
CPPFLAGS    +=  $(INCS)

################################################################################
#####
#####   C compiler flags

CFLAGS       = -g$(DEBUG)
CFLAGS      += -O$(OPTLEVEL)
CFLAGS      += -fpack-struct
CFLAGS      += -fshort-enums
CFLAGS      += -funsigned-bitfields
CFLAGS      += -funsigned-char
CFLAGS      += -ffunction-sections
CFLAGS      += -fdata-sections
CFLAGS      += -Wall
CFLAGS      += -Wstrict-prototypes
CFLAGS      += -Wa,-adhlns=$(addprefix build/, $(notdir $(<:.c=.lst)))
CFLAGS      += -std=gnu99
CFLAGS      += $(EXTRACFLAGS)

################################################################################
#####
#####   C++ compiler flags

#CXXFLAGS    =   -fno-exceptions
#CXXFLAGS   +=   -Wa,-ahlms=$(firstword \
#    $(filter %.lst, $(<:.cpp=.lst))  \
#    $(filter %.lst, $(<:.cc=.lst))   \
#    $(filter %.lst, $(<:.C=.lst)))

################################################################################
#####
#####   Linker flags

LDFLAGS	    = -Wl,-Map,$(BUILDDIR)/$(TARGET).map
LDLAGSS    += -Wl,--relax -mcall-prologues
LDFLAGS    += -Wl,--gc-sections
LDFLAGS    += $(EXTRALDFLAGS)
LDFLAGS	   += $(LIBS)
LDFLAGS    += $(LIBDIRS)

################################################################################
#####
#####   avrdude flags

ifeq ($(dir $(AVRDUDE_PORT)),/dev/)
    AVRDUDE_DEVICE_FILE = true
    AVRDUDE_PORT_LIST   = $(wildcard $(AVRDUDE_PORT))
    AVRDUDE_ACTIVE_PORT = $(firstword $(AVRDUDE_PORT_LIST))
else
    AVRDUDE_ACTIVE_PORT = $(AVRDUDE_PORT)
endif

AVRDUDEFLAGS     =  -c $(AVRDUDE_PROGRAMMER)
AVRDUDEFLAGS    +=  $(patsubst %,-P %,$(AVRDUDE_ACTIVE_PORT))
AVRDUDEFLAGS    +=  $(patsubst %,-b %,$(AVRDUDE_BAUD))
AVRDUDEFLAGS    +=  $(patsubst %,-B %,$(AVRDUDE_BITCLOCK))
AVRDUDEFLAGS    +=  -p $(MCU)
AVRDUDEFLAGS	+=  -v

AVRDUDE_FLASH   =   -U flash:w:$(BINDIR)/$(TARGET).hex
AVRDUDE_EEPROM  =
AVRDUDE_FUSES   =   -U hfuse:w:$(HFUSE):m \
                    -U lfuse:w:$(LFUSE):m \
                    -U efuse:w:$(EFUSE):m

ifeq ($(MAKECMDGOALS),all)
    FLASH_GOAL = true
endif
ifeq ($(MAKECMDGOALS),flash)
    FLASH_GOAL = true
endif

ifeq ($(FLASH_GOAL),true)
    ifeq ($(AVRDUDE_DEVICE_FILE), true)
        ifeq ($(words $(AVRDUDE_PORT_LIST)), 0)
            $(error "AVRDUDE_PORT: $(AVRDUDE_PORT) Not Found **********")
        else ifneq ($(words $(AVRDUDE_PORT_LIST)), 1)
            $(info )
            $(info $(TEXT_DASH_LINE))
            $(info )
            $(info Found multiple avrdude ports:)
            $(info $(AVRDUDE_PORT_LIST))
            $(info Explicitly select a port for AVRDUDE_PORT)
            $(info )
            $(info $(TEXT_DASH_LINE))
            $(info )
            $(error "Found multiple avrdude ports! **********")
        endif
    endif
endif

################################################################################
#####
#####   Serial Console

SERIAL_PORT_LIST    = $(wildcard $(SERIAL_PORT))
SERIAL_ACTIVE_PORT  = $(firstword $(SERIAL_PORT_LIST))
SERIAL_CMD          = minicom -D $(SERIAL_ACTIVE_PORT) -b $(SERIAL_BAUD)
SERIAL_CMD_FILE     = /tmp/serial_console.command
SERIAL_PID_FILE     = /tmp/serial_console.pid
SERIAL_PID          = $(shell cat $(SERIAL_PID_FILE))
SERIAL_LOCK         = /tmp/LCK..$(notdir $(SERIAL_PORT))
SERIAL_ACTIVE_LOCK  = $(wildcard $(SERIAL_LOCK))
SERIAL_ACTIVE_PID   = $(strip $(shell cat $(SERIAL_ACTIVE_LOCK)))
SERIAL_WARNING      = \
    echo '\#warning ********** Found multiple serial ports **********' | \
    $(CC) -o /dev/null -xc -;

ifeq ($(MAKECMDGOALS),all)
    SERIAL_GOAL = true
endif
ifeq ($(MAKECMDGOALS),serial)
    SERIAL_GOAL = true
endif

ifeq ($(SERIAL_GOAL),true)
    ifeq ($(words $(SERIAL_PORT_LIST)), 0)
        $(error "SERIAL_PORT: $(SERIAL_PORT) Not Found! *********")
    else ifneq ($(words $(SERIAL_PORT_LIST)), 1)
        $(shell $(SERIAL_WARNING))
        $(info $(TEXT_DASH_LINE))
        $(info Found multiple serial ports:)
        $(info $(SERIAL_PORT_LIST))
        $(info Using: $(SERIAL_ACTIVE_PORT))
        $(info $(TEXT_DASH_LINE))
    endif
endif

################################################################################
#####
#####   Rules


.PHONEY:    all build elf hex eep lss sym clean flash serial \
            closeserial

build: outdirs elf hex lss sym

all: build flash serial

outdirs:
	@$(MKDIR) $(BINDIR)
	@$(MKDIR) $(OBJDIR)
	@$(MKDIR) $(BUILDDIR)

eeprom: eep

elf:    $(BINDIR)/$(TARGET).elf
hex:    $(BINDIR)/$(TARGET).hex
eep:    $(BINDIR)/$(TARGET).eep
lss:    $(BINDIR)/$(TARGET).lss
sym:    $(BINDIR)/$(TARGET).sym

################################################################################
#####
#####   Build rules

# asm from C files
%.s: %.c
	$(CC) -S $(CPPFLAGS) $(CFLAGS) $(AVRFLAGS) $< -o $(BUILDDIR)/$@

# Compile object files from C source files
$(OBJDIR)/%.o : %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) $(AVRFLAGS) -c "$(abspath $<)" -o $@

# Link object files to create .elf file
$(BINDIR)/$(TARGET).elf : $(OBJFILES)
	$(CC) $(LDFLAGS) $(AVRFLAGS) -o $@ $(OBJFILES)

# Make hex file from elf output
$(BINDIR)/%.hex: $(BINDIR)/%.elf
	$(OBJCOPY) -j .text -j .data -O $(HEXFORMAT) $< $@

# Make hex file for eeprom from elf output
$(BINDIR)/%.eep: $(BINDIR)/%.elf
	-$(OBJCOPY) -j .eeprom --set-section-flags .eeprom=alloc,load \
        --change-section-lma .eeprom=0 -O $(HEXFORMAT) $< $@

$(BINDIR)/%.lss: $(BINDIR)/%.elf
	$(OBJDUMP) -h -S $< > $@

$(BINDIR)/%.sym: $(BINDIR)/%.elf
	$(NM) -n $< > $@

################################################################################
#####
#####   Write Flash rules

flash: build closeserial

	$(AVRDUDE) $(AVRDUDEFLAGS) $(AVRDUDE_FLASH)

################################################################################
#####
#####   Serial Console rules

serial: closeserial
	@echo "Starting Serial Console on port $(SERIAL_ACTIVE_PORT)"
	@echo '#!/bin/sh' > $(SERIAL_CMD_FILE); \
	echo 'echo $$$$> $(SERIAL_PID_FILE) && exec $(SERIAL_CMD)' \
		>> $(SERIAL_CMD_FILE) ;\
	chmod +x $(SERIAL_CMD_FILE); \
	open $(SERIAL_CMD_FILE);

closeserial:
ifneq ($(SERIAL_ACTIVE_LOCK),)
    ifeq ($(SERIAL_ACTIVE_PID), $(SERIAL_PID))
		@echo "Killing serial console, waiting 5 seconds"; \
		kill $(SERIAL_ACTIVE_PID); \
		sleep 5;  \
		$(RM) $(SERIAL_PID_FILE); \
		$(RM) $(SERIAL_CMD_FILE);
    endif
endif

################################################################################
#####
#####   Clean rule

clean:
	$(REMOVE) $(BUILDDIR)/*
	$(REMOVE) $(BINDIR)/*
	$(REMOVE) $(OBJDIR)/*



