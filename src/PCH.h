#pragma once

#include <RE/Skyrim.h>
#include <SKSE/SKSE.h>

#include <spdlog/sinks/basic_file_sink.h>

using namespace std::literals;

namespace stl
{
	using namespace SKSE::stl;
}

namespace logger = SKSE::log;

#define EXTERN_C extern "C"

#include "Version.h"
