var a,b,i,j: longint; 
    c: array [-1..100001, -1..100001] of int64;
begin

{read(a,b);}

	
	read(a);

	b := a;

	c[0,-1] := 1;

	for i := 0 to a do
		for j := 0 to b do
			if i >= j then
				c[i,j] := ( c[i, j-1] mod 66666667 )+ ( c[i-1,j] mod 66666667 )
			else 
				c[i,j] := 0;

	writeln(c[a,b]);
		
end.
