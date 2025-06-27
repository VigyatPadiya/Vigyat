DECLARE
	cursor c1 is select ename,deptno,sal from emp order by sal desc;

BEGIN	
	for i in c1
	loop
		exit when c1%rowcount>5;
		dbms_output.put_line(i.ename||' '||i.deptno|| ' ' ||i.sal);
	end loop;
END;
/