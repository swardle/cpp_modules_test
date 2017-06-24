mkdir obj
clang++ -std=c++1z -c -fmodules-ts --precompile stdio.cppm  -o ./obj/stdio.pcm  
clang++ -std=c++1z -c -fmodules-ts --precompile mi.cppm     -o ./obj/mi.pcm  -fmodule-file=./obj/stdio.pcm   
clang++ -std=c++1z -c -fmodules-ts -c mimpl.cpp -o ./obj/mimpl.o   -fmodule-file=./obj/mi.pcm -fmodule-file=./obj/stdio.pcm  
clang++ -std=c++1z -c -fmodules-ts -c main.cpp  -o ./obj/main.o    -fmodule-file=./obj/mi.pcm -fmodule-file=./obj/stdio.pcm  
clang++ -std=c++1z -o  main.exe ./obj/main.o ./obj/mimpl.o -lstdc++fs    

