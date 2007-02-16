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

#include <osg/BoundingSphere>
#include <osg/CopyOp>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osgParticle/ParticleSystem>
#include <osgParticle/ParticleSystemUpdater>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgParticle::ParticleSystemUpdater)
	I_BaseType(osg::Node);
	I_Constructor0(____ParticleSystemUpdater,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgParticle::ParticleSystemUpdater &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ParticleSystemUpdater__C5_ParticleSystemUpdater_R1__C5_osg_CopyOp_R1,
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
	I_Method1(bool, addParticleSystem, IN, osgParticle::ParticleSystem *, ps,
	          Properties::NON_VIRTUAL,
	          __bool__addParticleSystem__ParticleSystem_P1,
	          "Add a particle system to the list. ",
	          "");
	I_Method1(bool, removeParticleSystem, IN, osgParticle::ParticleSystem *, ps,
	          Properties::NON_VIRTUAL,
	          __bool__removeParticleSystem__ParticleSystem_P1,
	          "Remove a particle system from the list (by pointer). ",
	          "");
	I_MethodWithDefaults2(bool, removeParticleSystem, IN, unsigned int, i, , IN, unsigned int, numParticleSystemsToRemove, 1,
	                      Properties::NON_VIRTUAL,
	                      __bool__removeParticleSystem__unsigned_int__unsigned_int,
	                      "Remove a particle system(s) from the list (by index). ",
	                      "");
	I_Method2(bool, replaceParticleSystem, IN, osgParticle::ParticleSystem *, origPS, IN, osgParticle::ParticleSystem *, newPS,
	          Properties::NON_VIRTUAL,
	          __bool__replaceParticleSystem__ParticleSystem_P1__ParticleSystem_P1,
	          "Replace ParticleSystem with another ParticleSystem. ",
	          "");
	I_Method2(bool, setParticleSystem, IN, unsigned int, i, IN, osgParticle::ParticleSystem *, ps,
	          Properties::NON_VIRTUAL,
	          __bool__setParticleSystem__unsigned_int__ParticleSystem_P1,
	          "set a particle system by index. ",
	          "");
	I_Method0(unsigned int, getNumParticleSystems,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumParticleSystems,
	          "Return the number of particle systems on the list. ",
	          "");
	I_Method1(osgParticle::ParticleSystem *, getParticleSystem, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __ParticleSystem_P1__getParticleSystem__unsigned_int,
	          "Get a particle system from the list. ",
	          "");
	I_Method1(const osgParticle::ParticleSystem *, getParticleSystem, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_ParticleSystem_P1__getParticleSystem__unsigned_int,
	          "Get a particle system from the list. ",
	          "");
	I_Method1(bool, containsParticleSystem, IN, const osgParticle::ParticleSystem *, ps,
	          Properties::NON_VIRTUAL,
	          __bool__containsParticleSystem__C5_ParticleSystem_P1,
	          "return true if ParticleSystem is contained within ParticlsSystemUpdater. ",
	          "");
	I_Method1(unsigned int, getParticleSystemIndex, IN, const osgParticle::ParticleSystem *, ps,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getParticleSystemIndex__C5_ParticleSystem_P1,
	          "get index number of ParticleSystem. ",
	          "");
	I_Method1(void, traverse, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__traverse__osg_NodeVisitor_R1,
	          "Traverse downwards : calls children's accept method with NodeVisitor. ",
	          "");
	I_Method0(osg::BoundingSphere, computeBound,
	          Properties::VIRTUAL,
	          __osg_BoundingSphere__computeBound,
	          "Compute the bounding sphere around Node's geometry or children. ",
	          "This method is automatically called by getBound() when the bounding sphere has been marked dirty via dirtyBound(). ");
	I_ArrayProperty(osgParticle::ParticleSystem *, ParticleSystem, 
	                __ParticleSystem_P1__getParticleSystem__unsigned_int, 
	                __bool__setParticleSystem__unsigned_int__ParticleSystem_P1, 
	                __unsigned_int__getNumParticleSystems, 
	                __bool__addParticleSystem__ParticleSystem_P1, 
	                0, 
	                __bool__removeParticleSystem__unsigned_int__unsigned_int);
END_REFLECTOR

