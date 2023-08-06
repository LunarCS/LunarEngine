#include "RendererAPI.h"
#include "Platforms/ogl/OpenGLAPI.h"
GeneralAPIs::API GeneralAPIs::RendererAPI::s_API = API::None;
std::unique_ptr<GeneralAPIs::RendererAPI> GeneralAPIs::RendererAPI::create(API api)
{
	s_API = api;
	switch (s_API)
	{
		case API::OpenGL:
			std::unique_ptr<OpenGL::OpenGLAPI> apiPtr(new OpenGL::OpenGLAPI());
			return std::move(apiPtr);
	}
}
