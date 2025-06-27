--system defined exception::Zero_divide

Declare

	a number:=&a;
	b number:=&b;
	c number:=&c;
	
Begin
	c:=a+b;
	dbms_output.put_line('Addition'||c);
	c:=a*b;
	dbms_output.put_line('Multiple'||c);
	c:=a/b;
	dbms_output.put_line('Divide'||c);
	
Exception
	when zero_divide then
		dbms_output.put_line('Division by zero is not possible');
	when invalid_number then
		dbms_output.put_line('Number are only allowed');
		
End;
/
