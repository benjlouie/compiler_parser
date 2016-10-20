class A {
	x : Int <- b@B.x;
	y : Int <- z <-- 1;
	z : Int <- foo(;
	foo() : Object {
		x++
	};
	bar(a : Int) : Object {
		A.x
	};
	baz(a : Int, b : Int, c : Int) : Object {
		-a
	};
};

class B {
	x : Int <- if true then 1 else 3;
	y : Int <- while true loop pool;
	z : Int <- {;
	foo() : Object {
		let a : Int 3
	};
	bar(a : Int) : Object {
		case 1 of 
		a : Int => 3;
		b : Obj => 4;
	};
	baz(a : Int, b : Int, c : Int) : Object {
		new a
	};
};

class C {
	x : Int <- a--;
	y : Int <- *;
	z : Int <- / foo;
	foo() : Object {
		~Object
	};
	bar(a : Int) : Object {
		1 <
	};
	baz(a : Int, b : Int, c : Int) : Object {
		2 <= 
	};
};


class Main inherits IO {
	a : Int <- =;
	b : Int <- not;
	c : Int <- ());
	d : Int <- };
	main() : SELF_TYPE {
		out_string("Hello world!\n")
	};
};
