# Default target: dependencies
all: caveme map.png

C = ./src/object.c ./src/misc.c ./src/inventory.c ./src/location.c ./src/main.c
H = ./src/object.h ./src/misc.h ./src/inventory.h ./src/location.h

# @ - Evaluates to current target passed to make, e.g - make caveme
bin:
	mkdir -p bin

# Main game binary target
caveme: $(C) $(H)
	gcc $(C) -o ./bin/$@

# Object header from object.txt using awk
object.h: object.awk object.txt
	awk -v pass=h -f object.awk object.txt > ./src/$@

# Object source from object.txt using awk
object.c: object.awk object.txt
	awk -v pass=c1 -f object.awk object.txt > ./src/$@
	awk -v pass=c2 -f object.awk object.txt >> ./src/$@

# Generate map image
map.png: ./src/map.gv
	dot -Tpng -o ./src/$@ ./src/$<

# Generate map graph view
map.gv: ./src/map.awk ./src/object.txt
	awk -f ./src/map.awk ./src/object.txt > $@

