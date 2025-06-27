declare 
	sal number;
	
begin 
	select salary into sal from emp where ename =&enmae;
	dbms_output.put_line('The Salary is :'||sal);
	
exception
	when no_data_found then
	dbms_output.put_line('no records found');
	
end;
/