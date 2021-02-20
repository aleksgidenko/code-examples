default: print-args read-file-fgetc read-file-fgets read-file-from-arg extract-words linked-list

print-args: print-args.c
	gcc print-args.c -o print-args.exe

read-file-fgetc: read-file-fgetc.c
	gcc read-file-fgetc.c -o read-file-fgetc.exe

read-file-fgets: read-file-fgets.c
	gcc read-file-fgets.c -o read-file-fgets.exe

read-file-from-arg: read-file-from-arg.c
	gcc read-file-from-arg.c -o read-file-from-arg.exe

extract-words: extract-words.c
	gcc extract-words.c -o extract-words.exe

linked-list: linked-list.c
	gcc linked-list.c -o linked-list.exe

clean:
	rm -f *.exe