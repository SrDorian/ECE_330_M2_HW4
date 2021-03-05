all: hourlyemployee.o salaried_employee.o employee.o test.o
	g++ hourlyemployee.o salaried_employee.o employee.o test.o -o test

hourlyemployee.o: hourlyemployee.cpp hourlyemployee.hpp
	g++ -c hourlyemployee.cpp

salaried_employee.o: salaried_employee.cpp salaried_employee.hpp
	g++ -c salaried_employee.cpp

employee.o: employee.cpp employee.hpp
	g++ -c employee.cpp

test.o: test.cpp salaried_employee.hpp hourlyemployee.hpp
	g++ -c test.cpp

clean:
	rm *.o
	rm test
