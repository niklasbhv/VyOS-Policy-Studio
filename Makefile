compile:
	cmake -S ./ -B ./build && cmake --build ./build

clean:
	rm -rf ./_deps
	rm -rf ./doc
	rm -rf ./build

documentation:
	doxygen Doxyfile
