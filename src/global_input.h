#pragma once

#include <Windows.h>
#include <godot_cpp/classes/object.hpp>

namespace godot {

class LastInputTick : public Object {
    GDCLASS(LastInputTick, Object)

    static LastInputTick *singleton;


protected:
    static void _bind_methods();

public:
    static LastInputTick *get_singleton();

    LastInputTick();
    ~LastInputTick();

    int get_last_input_tick();
};

} // namespace godot