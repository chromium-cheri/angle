// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gl_1_5_autogen.cpp:
//   Defines the GL 1.5 entry points.

#include "libGL/entry_points_gl_1_5_autogen.h"

#include "libANGLE/Context.h"
#include "libANGLE/Context.inl.h"
#include "libANGLE/entry_points_utils.h"
#include "libANGLE/gl_enum_utils.h"
#include "libANGLE/validationEGL.h"
#include "libANGLE/validationES.h"
#include "libANGLE/validationES1.h"
#include "libANGLE/validationES2.h"
#include "libANGLE/validationES3.h"
#include "libANGLE/validationES31.h"
#include "libANGLE/validationES32.h"
#include "libANGLE/validationESEXT.h"
#include "libANGLE/validationGL15_autogen.h"
#include "libGLESv2/global_state.h"

namespace gl
{
void GL_APIENTRY BeginQuery(GLenum target, GLuint id)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLBeginQuery, "context = %d, target = %s, id = %u", CID(context),
          GLenumToString(GLenumGroup::QueryTarget, target), id);

    if (context)
    {
        QueryType targetPacked                                = FromGL<QueryType>(target);
        QueryID idPacked                                      = FromGL<QueryID>(id);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateBeginQuery(context, targetPacked, idPacked));
        if (isCallValid)
        {
            context->beginQuery(targetPacked, idPacked);
        }
        ANGLE_CAPTURE(BeginQuery, isCallValid, context, targetPacked, idPacked);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY BindBuffer(GLenum target, GLuint buffer)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLBindBuffer, "context = %d, target = %s, buffer = %u", CID(context),
          GLenumToString(GLenumGroup::BufferTargetARB, target), buffer);

    if (context)
    {
        BufferBinding targetPacked                            = FromGL<BufferBinding>(target);
        BufferID bufferPacked                                 = FromGL<BufferID>(buffer);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateBindBuffer(context, targetPacked, bufferPacked));
        if (isCallValid)
        {
            context->bindBuffer(targetPacked, bufferPacked);
        }
        ANGLE_CAPTURE(BindBuffer, isCallValid, context, targetPacked, bufferPacked);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY BufferData(GLenum target, GLsizeiptr size, const void *data, GLenum usage)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLBufferData,
          "context = %d, target = %s, size = %llu, data = 0x%016" PRIxPTR ", usage = %s",
          CID(context), GLenumToString(GLenumGroup::BufferTargetARB, target),
          static_cast<unsigned long long>(size), (uintptr_t)data,
          GLenumToString(GLenumGroup::BufferUsageARB, usage));

    if (context)
    {
        BufferBinding targetPacked                            = FromGL<BufferBinding>(target);
        BufferUsage usagePacked                               = FromGL<BufferUsage>(usage);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateBufferData(context, targetPacked, size, data, usagePacked));
        if (isCallValid)
        {
            context->bufferData(targetPacked, size, data, usagePacked);
        }
        ANGLE_CAPTURE(BufferData, isCallValid, context, targetPacked, size, data, usagePacked);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY BufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void *data)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLBufferSubData,
          "context = %d, target = %s, offset = %llu, size = %llu, data = 0x%016" PRIxPTR "",
          CID(context), GLenumToString(GLenumGroup::BufferTargetARB, target),
          static_cast<unsigned long long>(offset), static_cast<unsigned long long>(size),
          (uintptr_t)data);

    if (context)
    {
        BufferBinding targetPacked                            = FromGL<BufferBinding>(target);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateBufferSubData(context, targetPacked, offset, size, data));
        if (isCallValid)
        {
            context->bufferSubData(targetPacked, offset, size, data);
        }
        ANGLE_CAPTURE(BufferSubData, isCallValid, context, targetPacked, offset, size, data);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY DeleteBuffers(GLsizei n, const GLuint *buffers)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLDeleteBuffers, "context = %d, n = %d, buffers = 0x%016" PRIxPTR "",
          CID(context), n, (uintptr_t)buffers);

    if (context)
    {
        const BufferID *buffersPacked                         = FromGL<const BufferID *>(buffers);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateDeleteBuffers(context, n, buffersPacked));
        if (isCallValid)
        {
            context->deleteBuffers(n, buffersPacked);
        }
        ANGLE_CAPTURE(DeleteBuffers, isCallValid, context, n, buffersPacked);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY DeleteQueries(GLsizei n, const GLuint *ids)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLDeleteQueries, "context = %d, n = %d, ids = 0x%016" PRIxPTR "", CID(context),
          n, (uintptr_t)ids);

    if (context)
    {
        const QueryID *idsPacked                              = FromGL<const QueryID *>(ids);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateDeleteQueries(context, n, idsPacked));
        if (isCallValid)
        {
            context->deleteQueries(n, idsPacked);
        }
        ANGLE_CAPTURE(DeleteQueries, isCallValid, context, n, idsPacked);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY EndQuery(GLenum target)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLEndQuery, "context = %d, target = %s", CID(context),
          GLenumToString(GLenumGroup::QueryTarget, target));

    if (context)
    {
        QueryType targetPacked                                = FromGL<QueryType>(target);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid = (context->skipValidation() || ValidateEndQuery(context, targetPacked));
        if (isCallValid)
        {
            context->endQuery(targetPacked);
        }
        ANGLE_CAPTURE(EndQuery, isCallValid, context, targetPacked);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY GenBuffers(GLsizei n, GLuint *buffers)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLGenBuffers, "context = %d, n = %d, buffers = 0x%016" PRIxPTR "", CID(context),
          n, (uintptr_t)buffers);

    if (context)
    {
        BufferID *buffersPacked                               = FromGL<BufferID *>(buffers);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateGenBuffers(context, n, buffersPacked));
        if (isCallValid)
        {
            context->genBuffers(n, buffersPacked);
        }
        ANGLE_CAPTURE(GenBuffers, isCallValid, context, n, buffersPacked);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY GenQueries(GLsizei n, GLuint *ids)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLGenQueries, "context = %d, n = %d, ids = 0x%016" PRIxPTR "", CID(context), n,
          (uintptr_t)ids);

    if (context)
    {
        QueryID *idsPacked                                    = FromGL<QueryID *>(ids);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid = (context->skipValidation() || ValidateGenQueries(context, n, idsPacked));
        if (isCallValid)
        {
            context->genQueries(n, idsPacked);
        }
        ANGLE_CAPTURE(GenQueries, isCallValid, context, n, idsPacked);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY GetBufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLGetBufferParameteriv,
          "context = %d, target = %s, pname = %s, params = 0x%016" PRIxPTR "", CID(context),
          GLenumToString(GLenumGroup::BufferTargetARB, target),
          GLenumToString(GLenumGroup::DefaultGroup, pname), (uintptr_t)params);

    if (context)
    {
        BufferBinding targetPacked                            = FromGL<BufferBinding>(target);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateGetBufferParameteriv(context, targetPacked, pname, params));
        if (isCallValid)
        {
            context->getBufferParameteriv(targetPacked, pname, params);
        }
        ANGLE_CAPTURE(GetBufferParameteriv, isCallValid, context, targetPacked, pname, params);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY GetBufferPointerv(GLenum target, GLenum pname, void **params)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLGetBufferPointerv,
          "context = %d, target = %s, pname = %s, params = 0x%016" PRIxPTR "", CID(context),
          GLenumToString(GLenumGroup::BufferTargetARB, target),
          GLenumToString(GLenumGroup::DefaultGroup, pname), (uintptr_t)params);

    if (context)
    {
        BufferBinding targetPacked                            = FromGL<BufferBinding>(target);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateGetBufferPointerv(context, targetPacked, pname, params));
        if (isCallValid)
        {
            context->getBufferPointerv(targetPacked, pname, params);
        }
        ANGLE_CAPTURE(GetBufferPointerv, isCallValid, context, targetPacked, pname, params);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY GetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void *data)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLGetBufferSubData,
          "context = %d, target = %s, offset = %llu, size = %llu, data = 0x%016" PRIxPTR "",
          CID(context), GLenumToString(GLenumGroup::BufferTargetARB, target),
          static_cast<unsigned long long>(offset), static_cast<unsigned long long>(size),
          (uintptr_t)data);

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateGetBufferSubData(context, target, offset, size, data));
        if (isCallValid)
        {
            context->getBufferSubData(target, offset, size, data);
        }
        ANGLE_CAPTURE(GetBufferSubData, isCallValid, context, target, offset, size, data);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY GetQueryObjectiv(GLuint id, GLenum pname, GLint *params)
{
    Context *context = GetGlobalContext();
    EVENT(context, GLGetQueryObjectiv,
          "context = %d, id = %u, pname = %s, params = 0x%016" PRIxPTR "", CID(context), id,
          GLenumToString(GLenumGroup::QueryObjectParameterName, pname), (uintptr_t)params);

    if (context)
    {
        QueryID idPacked                                      = FromGL<QueryID>(id);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateGetQueryObjectiv(context, idPacked, pname, params));
        if (isCallValid)
        {
            context->getQueryObjectiv(idPacked, pname, params);
        }
        ANGLE_CAPTURE(GetQueryObjectiv, isCallValid, context, idPacked, pname, params);
    }
    else
    {}
}

void GL_APIENTRY GetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLGetQueryObjectuiv,
          "context = %d, id = %u, pname = %s, params = 0x%016" PRIxPTR "", CID(context), id,
          GLenumToString(GLenumGroup::QueryObjectParameterName, pname), (uintptr_t)params);

    if (context)
    {
        QueryID idPacked                                      = FromGL<QueryID>(id);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateGetQueryObjectuiv(context, idPacked, pname, params));
        if (isCallValid)
        {
            context->getQueryObjectuiv(idPacked, pname, params);
        }
        ANGLE_CAPTURE(GetQueryObjectuiv, isCallValid, context, idPacked, pname, params);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY GetQueryiv(GLenum target, GLenum pname, GLint *params)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLGetQueryiv,
          "context = %d, target = %s, pname = %s, params = 0x%016" PRIxPTR "", CID(context),
          GLenumToString(GLenumGroup::QueryTarget, target),
          GLenumToString(GLenumGroup::QueryParameterName, pname), (uintptr_t)params);

    if (context)
    {
        QueryType targetPacked                                = FromGL<QueryType>(target);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateGetQueryiv(context, targetPacked, pname, params));
        if (isCallValid)
        {
            context->getQueryiv(targetPacked, pname, params);
        }
        ANGLE_CAPTURE(GetQueryiv, isCallValid, context, targetPacked, pname, params);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

GLboolean GL_APIENTRY IsBuffer(GLuint buffer)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLIsBuffer, "context = %d, buffer = %u", CID(context), buffer);

    GLboolean returnValue;
    if (context)
    {
        BufferID bufferPacked                                 = FromGL<BufferID>(buffer);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid = (context->skipValidation() || ValidateIsBuffer(context, bufferPacked));
        if (isCallValid)
        {
            returnValue = context->isBuffer(bufferPacked);
        }
        else
        {
            returnValue = GetDefaultReturnValue<angle::EntryPoint::GLIsBuffer, GLboolean>();
        }
        ANGLE_CAPTURE(IsBuffer, isCallValid, context, bufferPacked, returnValue);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
        returnValue = GetDefaultReturnValue<angle::EntryPoint::GLIsBuffer, GLboolean>();
    }
    return returnValue;
}

GLboolean GL_APIENTRY IsQuery(GLuint id)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLIsQuery, "context = %d, id = %u", CID(context), id);

    GLboolean returnValue;
    if (context)
    {
        QueryID idPacked                                      = FromGL<QueryID>(id);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid = (context->skipValidation() || ValidateIsQuery(context, idPacked));
        if (isCallValid)
        {
            returnValue = context->isQuery(idPacked);
        }
        else
        {
            returnValue = GetDefaultReturnValue<angle::EntryPoint::GLIsQuery, GLboolean>();
        }
        ANGLE_CAPTURE(IsQuery, isCallValid, context, idPacked, returnValue);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
        returnValue = GetDefaultReturnValue<angle::EntryPoint::GLIsQuery, GLboolean>();
    }
    return returnValue;
}

void *GL_APIENTRY MapBuffer(GLenum target, GLenum access)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLMapBuffer, "context = %d, target = %s, access = %s", CID(context),
          GLenumToString(GLenumGroup::BufferTargetARB, target),
          GLenumToString(GLenumGroup::BufferAccessARB, access));

    void *returnValue;
    if (context)
    {
        BufferBinding targetPacked                            = FromGL<BufferBinding>(target);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateMapBuffer(context, targetPacked, access));
        if (isCallValid)
        {
            returnValue = context->mapBuffer(targetPacked, access);
        }
        else
        {
            returnValue = GetDefaultReturnValue<angle::EntryPoint::GLMapBuffer, void *>();
        }
        ANGLE_CAPTURE(MapBuffer, isCallValid, context, targetPacked, access, returnValue);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
        returnValue = GetDefaultReturnValue<angle::EntryPoint::GLMapBuffer, void *>();
    }
    return returnValue;
}

GLboolean GL_APIENTRY UnmapBuffer(GLenum target)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, GLUnmapBuffer, "context = %d, target = %s", CID(context),
          GLenumToString(GLenumGroup::BufferTargetARB, target));

    GLboolean returnValue;
    if (context)
    {
        BufferBinding targetPacked                            = FromGL<BufferBinding>(target);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateUnmapBuffer(context, targetPacked));
        if (isCallValid)
        {
            returnValue = context->unmapBuffer(targetPacked);
        }
        else
        {
            returnValue = GetDefaultReturnValue<angle::EntryPoint::GLUnmapBuffer, GLboolean>();
        }
        ANGLE_CAPTURE(UnmapBuffer, isCallValid, context, targetPacked, returnValue);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
        returnValue = GetDefaultReturnValue<angle::EntryPoint::GLUnmapBuffer, GLboolean>();
    }
    return returnValue;
}
}  // namespace gl
