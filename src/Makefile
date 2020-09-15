all: caveme map.png

C = object.c misc.c inventory.c location.c main.c
H = object.h misc.h inventory.h location.h

# @ - Evaluates to current target passed to make, e.g - make caveme

# Main game binary target
caveme: $(C) $(H)
	gcc $(C) -o $@

# Object header from object.txt using awk
object.h: object.awk object.txt
	awk -v pass=h -f object.awk object.txt > $@

# Object source from object.txt using awk
object.c: object.awk object.txt
	awk -v pass=c1 -f object.awk object.txt > $@
	awk -v pass=c2 -f object.awk object.txt >> $@

# Generate map image
map.png: map.gv
	dot -Tpng -o $@ $<

# Generate map graph view
map.gv: map.awk object.txt
	awk -f map.awk object.txt > $@

