/******************************************************************************

 @File         OGLES3/PVRTgles3Ext.h

 @Title        OGLES3/PVRTgles3Ext

 @Version      

 @Copyright    Copyright (c) Imagination Technologies Limited.

 @Platform     Independent

 @Description  OpenGL ES 3.0 extensions

******************************************************************************/
#ifndef _PVRTgles3Ext_H_
#define _PVRTgles3Ext_H_

#include <GLES3/gl3.h>

#if !defined(EGL_NOT_PRESENT)
#define PVRGetProcAddress(x) eglGetProcAddress(#x)
#endif

/****************************************************************************
** Build options
****************************************************************************/

#define GL_PVRTGLESEXT_VERSION 3

/**************************************************************************
****************************** GL EXTENSIONS ******************************
**************************************************************************/

class CPVRTgles3Ext
{
public:
	/*!***********************************************************************
	@Function			LoadExtensions
	@Description		Initialises IMG extensions
	*************************************************************************/
	void LoadExtensions();

	/*!***********************************************************************
	@Function			IsGLExtensionSupported
	@Input				extension extension to query for
	@Returns			True if the extension is supported
	@Description		Queries for support of an extension
	*************************************************************************/
	static bool IsGLExtensionSupported(const char * const extension);
};

#endif /* _PVRTgles3Ext_H_ */

/*****************************************************************************
 End of file (PVRTgles3Ext.h)
*****************************************************************************/

