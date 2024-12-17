#entry per libCaso
libCaso.o: libCaso.C libCaso.h
	g++ -c libCaso.C

# Ad Es1

#driver per Es1
driverEs1.o: driverEs1.C
	g++ -c driverEs1.C

driverEs1.x: driverEs1.o libCaso.o
	g++ driverEs1.o libCaso.o -o driverEs1.x


#Phony entries per Es1
compilaEs1: driverEs1.x

eseguiEs1: driverEs1.x
	./driverEs1.x

cleanEs1: 
	rm driverEs1.o libCaso.0 driverEs1.x

# Ad Es2
#entry per libCaso gia` presente

solEs2.o: solEs2.C
	g++ -c solEs2.C

libPuntoR2.o: libPuntoR2.C libPuntoR2.h
	g++ -c libPuntoR2.C

solEs2.x:  libPuntoR2.o solEs2.o libCaso.o
	g++ libPuntoR2.o solEs2.o libCaso.o -o solEs2.x

#Phony entries per Es2
compilaEs2: solEs2.x

eseguiEs2: solEs2.x
	./solEs2.x