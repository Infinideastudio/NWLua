#include <api/cpp/nwapi.h>
#include <stdlib.h>
#include <luajit-2.0/lua.h>
#include <luajit-2.0/lauxlib.h>

unsigned NWLuaVer = 1;
lua_State *L;

struct NWplugindata* NWAPICALL init()
{
    L = luaL_newstate();

    lua_newtable(L);
    lua_pushstring(L,"nwlua_ver");
    lua_pushnumber(L,NWLuaVer);
    lua_settable(L,-3);
    lua_setglobal(L,"nw");

    struct NWplugindata *Info = (struct NWplugindata*)malloc(sizeof (struct NWplugindata));
    Info->pluginName = "NWLua";
    Info->authorName = "Infinideas";
    Info->internalName = "infinideas.apilibrary.nwlua";
    return Info;
}