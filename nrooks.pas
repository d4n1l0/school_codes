program nrooks;
var a: array [1..50] of longint;
    c: array [1..50] of boolean;
    n: longint;

procedure d4n1l0(x: integer);
var i,j: integer;
begin
    for i := 1 to n do
        if not C[i] then
            begin
                a[x] := i;
                c[i] := true;
                if x<>n then d4n1l0(x+1)
                else
                begin
                    for j := 1 to n do write(a[j],' ');
                    writeln;
                end;
                c[i] := false;
            end;
end;

begin
    read(n);   
    d4n1l0(1);
end.

