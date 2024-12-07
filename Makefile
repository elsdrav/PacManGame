# Makefile για Pac-Man Project

CXX = g++
LDFLAGS = -L/path/to/sgg/lib -lsgg
CXXFLAGS = -I/path/to/sgg/include
SRCDIR = src
OBJDIR = obj
BINDIR = bin
TARGET = $(BINDIR)/PacMan

SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	@mkdir -p $(BINDIR)
	$(CXX) $(OBJ) -o $@ $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(BINDIR)