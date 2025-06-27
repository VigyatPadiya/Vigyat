declare
	m_enm emp.ename%type;
	m_sal emp.sal%type;
	cursor c3 is select ename,sal from emp;
	
begin
	open c3;
	loop 
		fetch c3 into m_enm,m_sal;
		dbms_output.put_line(m_enm||' '||m_sal);
		--open c3
		exit when c3%notrfound;
		exit loop;
		close c3;
		
exception
	when invalid_cursor then 
	dbms_output.put_line('cursor error');
	when cursor_already_open then 
	dbms_output.put_line('cursor already open');
	when others then
	dbms_output.put_line('error');

	end;
	/