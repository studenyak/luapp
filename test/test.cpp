// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "lua.hpp"

int _tmain(int argc, _TCHAR* argv[])
{
	lua_State *EnvOne = luaL_newstate();
	luaL_openlibs(EnvOne);
	
	luaL_dofile(EnvOne, "test.lua");
	lua_close(EnvOne);

	return 0;
}

