#include "global_input.h"
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/input_map.hpp>
#include <godot_cpp/classes/input_event_key.hpp>
#include <godot_cpp/classes/input_event_mouse_button.hpp>

using namespace godot;

LastInputTick *LastInputTick::singleton = nullptr;

// lifecycle

LastInputTick *LastInputTick::get_singleton() {
    return singleton;
}

LastInputTick::LastInputTick() {
    singleton = this;
}

LastInputTick::~LastInputTick() {
    singleton = nullptr;
}

void LastInputTick::_bind_methods() {
    ClassDB::bind_method(D_METHOD("get_last_input_tick"), &LastInputTick::get_last_input_tick);
}



int LastInputTick::get_last_input_tick() {
    LASTINPUTINFO input_info;
    input_info.cbSize = sizeof(LASTINPUTINFO);
    if (GetLastInputInfo(&input_info)) {
        return input_info.dwTime;
    }
    return -1;
}
