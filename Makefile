compile:
	cmake -S ./ -B ./out && cmake --build ./out

documentation:
	doxygen Doxyfile
