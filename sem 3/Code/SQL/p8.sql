DECLARE
	cursor c1 is select ename,deptno,sal from emp where ename like '%v%';

BEGIN	
	for i in c1
	loop
		dbms_output.put_line(i.ename||' '||i.deptno|| ' ' ||i.sal);
	end loop;
END;
/