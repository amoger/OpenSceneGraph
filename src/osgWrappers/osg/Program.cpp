// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osg/Program>
#include <osg/Shader>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Uniform>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::map< std::string COMMA  GLuint >, osg::Program::AttribBindingList);

TYPE_NAME_ALIAS(std::map< std::string COMMA  osg::Program::ActiveVarInfo >, osg::Program::ActiveVarInfoMap);

BEGIN_OBJECT_REFLECTOR(osg::Program)
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____Program,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Program &, rhs, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Program__C5_Program_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "Return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "Return the name of the attribute's library. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "Return the name of the attribute's class type. ",
	          "");
	I_Method0(osg::StateAttribute::Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "Return the Type identifier of the attribute's class type. ",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_osg_StateAttribute_R1,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__osg_State_R1,
	          "If enabled, activate our program in the GL pipeline, performing any rebuild operations that might be pending. ",
	          "");
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe,
	          Properties::VIRTUAL,
	          __void__setThreadSafeRefUnref__bool,
	          "Set whether to use a mutex to ensure ref() and unref() are thread safe. ",
	          "");
	I_Method1(void, compileGLObjects, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__compileGLObjects__osg_State_R1,
	          "Compile program and associated shaders. ",
	          "");
	I_Method1(void, resizeGLObjectBuffers, IN, unsigned int, maxSize,
	          Properties::VIRTUAL,
	          __void__resizeGLObjectBuffers__unsigned_int,
	          "Resize any per context GLObject buffers to specified size. ",
	          "");
	I_MethodWithDefaults1(void, releaseGLObjects, IN, osg::State *, state, 0,
	                      Properties::VIRTUAL,
	                      __void__releaseGLObjects__osg_State_P1,
	                      "release OpenGL objects in specified graphics context if State object is passed, otherwise release OpenGL objects for all graphics context if State object pointer NULL. ",
	                      "");
	I_Method0(void, dirtyProgram,
	          Properties::NON_VIRTUAL,
	          __void__dirtyProgram,
	          "Mark our PCSOs as needing relink. ",
	          "");
	I_Method1(bool, addShader, IN, osg::Shader *, shader,
	          Properties::NON_VIRTUAL,
	          __bool__addShader__Shader_P1,
	          "Attach an osg::Shader to this osg::Program. ",
	          "Mark Program as needing relink. Return true for success ");
	I_Method0(unsigned int, getNumShaders,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumShaders,
	          "",
	          "");
	I_Method1(osg::Shader *, getShader, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __Shader_P1__getShader__unsigned_int,
	          "",
	          "");
	I_Method1(const osg::Shader *, getShader, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_Shader_P1__getShader__unsigned_int,
	          "",
	          "");
	I_Method1(bool, removeShader, IN, osg::Shader *, shader,
	          Properties::NON_VIRTUAL,
	          __bool__removeShader__Shader_P1,
	          "Remove osg::Shader from this osg::Program. ",
	          "Mark Program as needing relink. Return true for success ");
	I_Method2(void, addBindAttribLocation, IN, const std::string &, name, IN, GLuint, index,
	          Properties::NON_VIRTUAL,
	          __void__addBindAttribLocation__C5_std_string_R1__GLuint,
	          "Add an attribute location binding. ",
	          "");
	I_Method1(void, removeBindAttribLocation, IN, const std::string &, name,
	          Properties::NON_VIRTUAL,
	          __void__removeBindAttribLocation__C5_std_string_R1,
	          "Add an attribute location binding. ",
	          "");
	I_Method0(const osg::Program::AttribBindingList &, getAttribBindingList,
	          Properties::NON_VIRTUAL,
	          __C5_AttribBindingList_R1__getAttribBindingList,
	          "",
	          "");
	I_Method0(bool, isFixedFunction,
	          Properties::NON_VIRTUAL,
	          __bool__isFixedFunction,
	          "Return true if this Program represents \"fixed-functionality\" rendering. ",
	          "");
	I_Method2(bool, getGlProgramInfoLog, IN, unsigned int, contextID, IN, std::string &, log,
	          Properties::NON_VIRTUAL,
	          __bool__getGlProgramInfoLog__unsigned_int__std_string_R1,
	          "Query InfoLog from a glProgram. ",
	          "");
	I_Method1(const osg::Program::ActiveVarInfoMap &, getActiveUniforms, IN, unsigned int, contextID,
	          Properties::NON_VIRTUAL,
	          __C5_ActiveVarInfoMap_R1__getActiveUniforms__unsigned_int,
	          "",
	          "");
	I_Method1(const osg::Program::ActiveVarInfoMap &, getActiveAttribs, IN, unsigned int, contextID,
	          Properties::NON_VIRTUAL,
	          __C5_ActiveVarInfoMap_R1__getActiveAttribs__unsigned_int,
	          "",
	          "");
	I_Method1(osg::Program::PerContextProgram *, getPCP, IN, unsigned int, contextID,
	          Properties::NON_VIRTUAL,
	          __PerContextProgram_P1__getPCP__unsigned_int,
	          "Get the PCP for a particular GL context. ",
	          "");
	I_StaticMethod2(void, deleteGlProgram, IN, unsigned int, contextID, IN, GLuint, program,
	                __void__deleteGlProgram__unsigned_int__GLuint_S,
	                "Mark internal glProgram for deletion. ",
	                "Deletion requests are queued until they can be executed in the proper GL context. ");
	I_StaticMethod3(void, flushDeletedGlPrograms, IN, unsigned int, contextID, IN, double, currentTime, IN, double &, availableTime,
	                __void__flushDeletedGlPrograms__unsigned_int__double__double_R1_S,
	                "flush all the cached glPrograms which need to be deleted in the OpenGL context related to contextID. ",
	                "");
	I_SimpleProperty(const osg::Program::AttribBindingList &, AttribBindingList, 
	                 __C5_AttribBindingList_R1__getAttribBindingList, 
	                 0);
	I_ArrayProperty(osg::Shader *, Shader, 
	                __Shader_P1__getShader__unsigned_int, 
	                0, 
	                __unsigned_int__getNumShaders, 
	                __bool__addShader__Shader_P1, 
	                0, 
	                0);
	I_SimpleProperty(bool, ThreadSafeRefUnref, 
	                 0, 
	                 __void__setThreadSafeRefUnref__bool);
	I_SimpleProperty(osg::StateAttribute::Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::Program::ActiveVarInfo)
	I_Constructor0(____ActiveVarInfo,
	               "",
	               "");
	I_Constructor3(IN, GLint, loc, IN, GLenum, type, IN, GLint, size,
	               ____ActiveVarInfo__GLint__GLenum__GLint,
	               "",
	               "");
	I_PublicMemberProperty(GLint, _location);
	I_PublicMemberProperty(GLenum, _type);
	I_PublicMemberProperty(GLint, _size);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Program::PerContextProgram)
	I_BaseType(osg::Referenced);
	I_Constructor2(IN, const osg::Program *, program, IN, unsigned int, contextID,
	               ____PerContextProgram__C5_Program_P1__unsigned_int,
	               "",
	               "");
	I_Method0(GLuint, getHandle,
	          Properties::NON_VIRTUAL,
	          __GLuint__getHandle,
	          "",
	          "");
	I_Method0(void, requestLink,
	          Properties::NON_VIRTUAL,
	          __void__requestLink,
	          "",
	          "");
	I_Method0(void, linkProgram,
	          Properties::NON_VIRTUAL,
	          __void__linkProgram,
	          "",
	          "");
	I_Method0(bool, validateProgram,
	          Properties::NON_VIRTUAL,
	          __bool__validateProgram,
	          "",
	          "");
	I_Method0(bool, needsLink,
	          Properties::NON_VIRTUAL,
	          __bool__needsLink,
	          "",
	          "");
	I_Method0(bool, isLinked,
	          Properties::NON_VIRTUAL,
	          __bool__isLinked,
	          "",
	          "");
	I_Method1(bool, getInfoLog, IN, std::string &, infoLog,
	          Properties::NON_VIRTUAL,
	          __bool__getInfoLog__std_string_R1,
	          "",
	          "");
	I_Method0(void, useProgram,
	          Properties::NON_VIRTUAL,
	          __void__useProgram,
	          "",
	          "");
	I_Method0(void, resetAppliedUniforms,
	          Properties::NON_VIRTUAL,
	          __void__resetAppliedUniforms,
	          "",
	          "");
	I_Method1(void, apply, IN, const osg::Uniform &, uniform,
	          Properties::NON_VIRTUAL,
	          __void__apply__C5_Uniform_R1,
	          "",
	          "");
	I_Method0(const osg::Program::ActiveVarInfoMap &, getActiveUniforms,
	          Properties::NON_VIRTUAL,
	          __C5_ActiveVarInfoMap_R1__getActiveUniforms,
	          "",
	          "");
	I_Method0(const osg::Program::ActiveVarInfoMap &, getActiveAttribs,
	          Properties::NON_VIRTUAL,
	          __C5_ActiveVarInfoMap_R1__getActiveAttribs,
	          "",
	          "");
	I_Method1(GLint, getUniformLocation, IN, const std::string &, name,
	          Properties::NON_VIRTUAL,
	          __GLint__getUniformLocation__C5_std_string_R1,
	          "",
	          "");
	I_Method1(GLint, getAttribLocation, IN, const std::string &, name,
	          Properties::NON_VIRTUAL,
	          __GLint__getAttribLocation__C5_std_string_R1,
	          "",
	          "");
	I_SimpleProperty(const osg::Program::ActiveVarInfoMap &, ActiveAttribs, 
	                 __C5_ActiveVarInfoMap_R1__getActiveAttribs, 
	                 0);
	I_SimpleProperty(const osg::Program::ActiveVarInfoMap &, ActiveUniforms, 
	                 __C5_ActiveVarInfoMap_R1__getActiveUniforms, 
	                 0);
	I_SimpleProperty(GLuint, Handle, 
	                 __GLuint__getHandle, 
	                 0);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< std::string COMMA  GLuint >);

STD_MAP_REFLECTOR(std::map< std::string COMMA  osg::Program::ActiveVarInfo >);

