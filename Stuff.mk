##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Stuff
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/riane/Documents/Stuff
ProjectPath            :=/home/riane/Documents/Stuff/Stuff
IntermediateDirectory  :=../build-$(ConfigurationName)/Stuff
OutDir                 :=../build-$(ConfigurationName)/Stuff
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=riane
Date                   :=28/01/23
CodeLitePath           :=/home/riane/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/Stuff/paperq.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Stuff/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/Stuff"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/Stuff"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/Stuff/.d:
	@mkdir -p "../build-$(ConfigurationName)/Stuff"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Stuff/paperq.cpp$(ObjectSuffix): paperq.cpp ../build-$(ConfigurationName)/Stuff/paperq.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/riane/Documents/Stuff/Stuff/paperq.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/paperq.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Stuff/paperq.cpp$(DependSuffix): paperq.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Stuff/paperq.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Stuff/paperq.cpp$(DependSuffix) -MM paperq.cpp

../build-$(ConfigurationName)/Stuff/paperq.cpp$(PreprocessSuffix): paperq.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Stuff/paperq.cpp$(PreprocessSuffix) paperq.cpp


-include ../build-$(ConfigurationName)/Stuff//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


