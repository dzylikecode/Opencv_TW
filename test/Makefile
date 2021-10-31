include ../Config_Makefile 

cc = g++

BuildPath   = $(g_BuildPath)
CompileOptions= $(g_CompilerOptions)


IncludePath = -I$(g_Opencv_IncludePath)
LibPath     = -L$(g_Opencv_LibPath)
LibOptions  = $(g_Opencv_Link)


filename =install_test
exeOutput =$(BuildPath)/$(filename).exe

$(exeOutput): $(filename).cpp 
	$(cc) -o $(exeOutput) \
	$(filename).cpp \
	$(CompileOptions) \
	$(IncludePath) \
	$(LibPath) \
	$(LibOptions)
