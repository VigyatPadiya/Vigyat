--program 1
--Simple Interest

DECLARE
	p number := &p;
	r number := &r;
	n number := &n;
	simple number;
	
BEGIN
	simple := (p*r*n)/100;
	dbms_output.put_line('Simple interest is '||simple);
	
end;
/
