
CXX_FLAGS = -DBOOST_NO_WREGEX -DHAVE_CONFIG_H \
	-fPIC -std=c++11 -m64 \
	-stdlib=libc++ -fvisibility=hidden -Wall -Wreturn-type -Wunused \
	-Wno-unused-parameter -O3

basic:
	cython cpp_to_py.pyx --cplus
	clang++ -c cpp_to_py.cpp -std=c++11 -stdlib=libc++  \
		-I/System/Library/Frameworks/Python.framework/Versions/Current/include/python2.7/ \
		-I/Users/jweiss/Library/Python/2.7/lib/python/site-packages
	capnp compile -oc++ --src-prefix=example example/proto.capnp
	clang++ -c proto.capnp.c++ $(CXX_FLAGS)
	swig -python -c++ -Wall bindings.i
	mv bindings.py example/bindings.py
	clang++ -c bindings_wrap.cxx -std=c++11 -stdlib=libc++ \
		-I/System/Library/Frameworks/Python.framework/Versions/Current/include/python2.7/
	clang++ -lpython -lkj -lcapnp -lcapnpc -shared bindings_wrap.o proto.capnp.o cpp_to_py.o -o example/_bindings.so
