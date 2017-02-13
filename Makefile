


run:
	gcc LinkedList.h
	gcc LinkedList.c
	gcc main.c -w LinkedList.c
	./a.out



commit:
	git add -A
	git commit -m "Updated Library"

