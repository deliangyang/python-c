clean:
	rm -rf *.o
	rm -rf *.so

all:
	gcc -fpic -c -I/usr/include/python2.7 \
		-I/usr/lib/python2.7/config \
		example.c wrapper.c
	gcc -shared -o example.so example.o wrapper.o


