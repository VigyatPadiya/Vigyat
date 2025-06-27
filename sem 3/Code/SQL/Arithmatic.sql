--PROGRAM 1
-- ADDITION OF TWO NUMBER

declare
	no1 number := &no1;
	no2 number := &no2;
	ans1 number;
	ans2 number;
	ans3 number;
	ans4 number;
	
	

begin
		ans1 := no1 + no2;
		dbms_output.put_line('Addition is '||ans1);
		ans2 := no1 - no2;
		dbms_output.put_line('Subtraction is '||ans2);
		ans3 := no1 * no2;
		dbms_output.put_line('Multiple is '||ans3);
		ans4 := no1 + no2;
		dbms_output.put_line('Division is '||ans4);
end;
/