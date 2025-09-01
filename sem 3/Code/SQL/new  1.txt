declare 
	 sal emp.sal%type;
	 
begin 
	select sal into sal from emp where age=50;
	dbms_output.put_line('Salary is'||sal);
	
exception
	when no_data.found then
	dbms_output.put_line('NO Data Found');
	
	when too_many_rows then 
	dbms_output.put_line('Multiple records Found');
	
End;
/