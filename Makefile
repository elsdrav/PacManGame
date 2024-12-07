# Makefile for Pac-Man Project

CXX = g++                         # Compiler
LDFLAGS = -L/path/to/sgg/lib -lsgg   # SGG library location
CXXFLAGS = -I/path/to/sgg/include -I./include  # Add include/ to the path for your headers

SRCDIR = src
OBJDIR = obj
BINDIR = bin
TARGET = $(BINDIR)/PacMan

# Sources and object files
SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# Build target
all: $(TARGET)

# Linking the target executable
$(TARGET): $(OBJ)
	@mkdir -p $(BINDIR)
	$(CXX) $(OBJ) -o $@ $(LDFLAGS)

# Compiling source files to object files
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	@echo "Compiling $< with flags $(CXXFLAGS)"
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean generated files
clean:
	rm -rf $(OBJDIR) $(BINDIR)
