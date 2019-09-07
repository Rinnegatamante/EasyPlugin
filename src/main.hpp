#pragma once

#include <vita2d.h>
#include <psp2/kernel/clib.h>
#include <psp2/ctrl.h>
#include <psp2/kernel/clib.h>
#include <psp2/sysmodule.h>

#include "utils/json.hpp"

#define imageWebBase "http://rinnegatamante.it/vitadb/"

using namespace std;

using json = nlohmann::json;

class AppInfo {
    public:
        AppInfo(string p_appID, string p_title, string fileLocation);
        string appID;
        string title;
        vita2d_texture *icon;
};