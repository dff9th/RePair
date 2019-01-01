# main makefile
# directory
SRCDIR = ./src
TRGDIR = ./target
INCDIR = ./include
OBJDIR = ./obj

# files
TRG = $(TRGDIR)/repair
SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.cpp=.o)))
DEPS = $(OBJS:.o=.d)

# param
CXX = g++
CXXFLAGS = -I$(INCDIR) -std=c++11 -Wall -MMD -MP
RM = rm -f

# optimization
# to build with debug mode, run "make buildtype=debug"
buildtype = release
ifeq ($(buildtype), release)
	CXXFLAGS += -O3
else ifeq ($(buildtype), debug)
	CXXFLAGS += -O0 -g
else
	$(error buildtype must be release or debug)
endif

# link
$(TRG): $(OBJS)
	$(CXX) -o $@ $^

# resolve header dependency from the second time
-include $(DEPS)

# each compile
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) -o $@ -c $(CXXFLAGS) $<

# empty target
.PHONY: clean
clean: 
	$(RM) $(TRG) $(OBJS) $(DEPS)

