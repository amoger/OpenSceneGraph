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
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Vec4>
#include <osgFX/Cartoon>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgFX::Cartoon)
	I_BaseType(osgFX::Effect);
	I_Constructor0(____Cartoon,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgFX::Cartoon &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Cartoon__C5_Cartoon_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method0(const char *, effectName,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectName,
	          "get the name of this Effect ",
	          "");
	I_Method0(const char *, effectDescription,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectDescription,
	          "get a brief description of this Effect ",
	          "");
	I_Method0(const char *, effectAuthor,
	          Properties::VIRTUAL,
	          __C5_char_P1__effectAuthor,
	          "get the effect author's name ",
	          "");
	I_Method0(const osg::Vec4 &, getOutlineColor,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec4_R1__getOutlineColor,
	          "get the outline color ",
	          "");
	I_Method1(void, setOutlineColor, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__setOutlineColor__C5_osg_Vec4_R1,
	          "set the outline color ",
	          "");
	I_Method0(float, getOutlineLineWidth,
	          Properties::NON_VIRTUAL,
	          __float__getOutlineLineWidth,
	          "get the outline line width ",
	          "");
	I_Method1(void, setOutlineLineWidth, IN, float, w,
	          Properties::NON_VIRTUAL,
	          __void__setOutlineLineWidth__float,
	          "set the outline line width ",
	          "");
	I_Method0(int, getLightNumber,
	          Properties::NON_VIRTUAL,
	          __int__getLightNumber,
	          "get the OpenGL light number ",
	          "");
	I_Method1(void, setLightNumber, IN, int, n,
	          Properties::NON_VIRTUAL,
	          __void__setLightNumber__int,
	          "set the OpenGL light number that will be used in lighting computations ",
	          "");
	I_SimpleProperty(int, LightNumber, 
	                 __int__getLightNumber, 
	                 __void__setLightNumber__int);
	I_SimpleProperty(const osg::Vec4 &, OutlineColor, 
	                 __C5_osg_Vec4_R1__getOutlineColor, 
	                 __void__setOutlineColor__C5_osg_Vec4_R1);
	I_SimpleProperty(float, OutlineLineWidth, 
	                 __float__getOutlineLineWidth, 
	                 __void__setOutlineLineWidth__float);
END_REFLECTOR

