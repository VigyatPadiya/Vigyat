declare
	
	name RESULT.NAME%type;
	s1 RESULT.SUB1%type;
	s2 RESULT.SUB2%type;
	s3 RESULT.SUB3%type;
	s4 RESULT.SUB4%type;
	s5 RESULT.SUB5%type;
	rno RESULT.ROLLNO%type := &rno;
	
	T number;
	P number(3,1);
	G char(1);
	
begin 
	select NAME,SUB1,SUB2,SUB3,SUB4,SUB5 into name,s1,s2,s3,s4,s5 from RESULT where ROLLNO = rno;
	dbms_output.put_line('Student Name is : '||name);
	dbms_output.put_line('Student SUB1 is : '||s1);
	dbms_output.put_line('Student SUB2 is : '||s2);
	dbms_output.put_line('Student SUB3 is : '||s3);
	dbms_output.put_line('Student SUB4 is : '||s4);
	dbms_output.put_line('Student SUB5 is : '||s5);

T := s1+s2+s3+s4+s5;
	dbms_output.put_line('Total is : '||T);
update RESULT set TOTAL = T  where ROLLNO = rno;
P := (T/5);
	dbms_output.put_line('Percentage is : '||P);
update RESULT set PER = P where ROLLNO = rno;

end;
/
	