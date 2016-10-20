class A {
	foo(random text) : Object {
		1
	};
	bar(a : b) : Object {
		1
	};
	baz(a : Int b : Int, c : Int) : Object {
		1
	};
	a(Int : Int) : Object {1};
};

class Main inherits IO {
	main() : SELF_TYPE {
		out_string("Hello world!\n")
	};
};
