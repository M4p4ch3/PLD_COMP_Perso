grammar Prog;

prog: Decl* DefFun '\n';

Decl : Type ' ' Name ';';

Type : 'int'
     | 'char';

Name : [a-zA-Z][a-zA-Z0-9]+; 

DefFun : 'void main(){}';
