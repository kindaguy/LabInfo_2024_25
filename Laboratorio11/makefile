#this is a makefile.
#building block: entry point

#Structure of entry point:
#target: {dependencies (one or more files/targets)}
#action: what to do to generate the target !!!Mind the tab character before the action!!!!

libSortingTama.o: libSortingTama.h libSortingTama.C 
	g++ -c libSortingTama.C  

driver.o: driver.C
	g++ -c driver.C

driver.x: driver.o libSortingTama.o
	g++ driver.o libSortingTama.o -o driver.x

#Additional "phony" entries: the target is not a file, or something produced by the entry....

#this deletes all the .o and .x files (* is a wildcard meaning "anything")
clean:
	rm *.o *.x

#This entry has the entry sortWithLib.x as dependency.
#If sortWithLib.x file is not present, the corresponding entry gets executed
compila: driver.x

#
esegui: driver.x
	./driver.x

