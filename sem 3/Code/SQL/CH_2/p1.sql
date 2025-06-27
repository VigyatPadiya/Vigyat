--PROGRAM 1
/*) Write a PL/SQL block that uses a cursor attribute 
SQL%ROWCOUNT to raise the basic salary of 
employees by 10% that are working in department 
number 10 and also display the appropriate message 
based on the existence of the record in the EMP table. 
(Use Implicit Cursor)*/

Declare 
	N NUMBER;
	
BEGIN
	UPDATE EMP SET salary=salary+salary*0.10 where deptno=10;
	N:= SQL%ROWCOUNT;
	dbms_output.put_line(n || 'Record Updated');
	
End;
/