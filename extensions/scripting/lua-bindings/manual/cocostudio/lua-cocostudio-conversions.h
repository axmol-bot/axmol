/****************************************************************************
 Copyright (c) 2013-2016 Chukong Technologies Inc.
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.

 https://axis-project.github.io/

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/
#ifndef __COCOS_SCRIPTING_LUA_BINDING_MANUAL_COCOSTUDIO_LUA_STUDIO_CONVERSIONS_H__
#define __COCOS_SCRIPTING_LUA_BINDING_MANUAL_COCOSTUDIO_LUA_STUDIO_CONVERSIONS_H__

#include "scripting/lua-bindings/manual/tolua_fix.h"

namespace cocostudio
{
namespace timeline
{
struct AnimationInfo;
}
}  // namespace cocostudio

extern bool luaval_to_animationInfo(lua_State* L,
                                    int lo,
                                    cocostudio::timeline::AnimationInfo* outValue,
                                    const char* funcName = "");

extern void animationInfo_to_luaval(lua_State* L, const cocostudio::timeline::AnimationInfo& inValue);

#endif  //__COCOS_SCRIPTING_LUA_BINDING_MANUAL_COCOSTUDIO_LUA_STUDIO_CONVERSIONS_H__