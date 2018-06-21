all: mixed_pattern recency_friendly streaming thrashing

mixed_pattern: mixed_pattern.c
	gcc -o mixed_pattern mixed_pattern.c

recency_friendly: recency_friendly.c
	gcc -o recency_friendly recency_friendly.c

streaming: streaming.c
	gcc -o streaming streaming.c

thrashing: thrashing.c
	gcc -o thrashing thrashing.c

clean:
	rm mixed_pattern recency_friendly streaming thrashing
