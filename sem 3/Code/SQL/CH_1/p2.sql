--program 2
--Square and cube

DECLARE
	num number := &num;
	s number;
	c number;
	
BEGIN
	s := (num*num);
	c := (num*num*num);
	dbms_output.put_line('The Square of Number is :'||s);
	dbms_output.put_line('The Cube Of Number is : '||c);
	
End;
/