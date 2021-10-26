SRC = main.c Vector3D.c
OBJS = main.o Vector3D.o

all: program

program: main.o Vector3D.o
	gcc main.o Vector3D.o -o program

%.o: %.c
	gcc -c $^ -o $@
#main.o: main.c #gcc -c main.c

#Vector3D.o: Vector3D.c  #gcc -c Vector3D.c



