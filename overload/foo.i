%module foo
%{
    extern void printarg(int i);
    extern void printarg(short s);
    %}
%rename (printarg_short) printarg(short s);
    void printarg(int i);
    void printarg(short s);
