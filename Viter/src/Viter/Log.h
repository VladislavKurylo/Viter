#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Viter {
	class VITER_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//  Core log macros
#define VIT_CORE_TRACE(...)    ::Viter::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define VIT_CORE_INFO(...)     ::Viter::Log::GetCoreLogger()->info(__VA_ARGS__)
#define VIT_CORE_WARN(...)     ::Viter::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define VIT_CORE_ERROR(...)    ::Viter::Log::GetCoreLogger()->error(__VA_ARGS__)
#define VIT_CORE_CRITICAL(...) ::Viter::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define VIT_TRACE(...)         ::Viter::Log::GetClientLogger()->trace(__VA_ARGS__)
#define VIT_INFO(...)          ::Viter::Log::GetClientLogger()->info(__VA_ARGS__)
#define VIT_WARN(...)          ::Viter::Log::GetClientLogger()->warn(__VA_ARGS__)
#define VIT_ERROR(...)         ::Viter::Log::GetClientLogger()->error(__VA_ARGS__)
#define VIT_CRITICAL(...)      ::Viter::Log::GetClientLogger()->critical(__VA_ARGS__)