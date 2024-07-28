#pragma once
#include <game_window.h>

void ImGuiUIInit(GameWindow* window);
void ImGuiUIDrawFrame(GameWindow* window);

struct MenuEntryABI {
    const char* name;
    void * user;
    bool (*selected)(void* user);
    void (*click)(void* user);
    size_t length;
    MenuEntryABI* subentries;
};

void mcpelauncher_addmenu(size_t length, MenuEntryABI* entries);