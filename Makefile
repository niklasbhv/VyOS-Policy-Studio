compile:
	cmake -S ./ -B ./out && cmake --build ./out

clean:
	rm -rf ./_deps
	rm -rf ./doc
	rm -rf ./out

documentation:
	doxygen Doxyfile
