//======== Application.hpp ========
//Purpose:
//=============================

#pragma once

namespace chlover
{


    class Application
    {
    public:
        explicit Application(const char* name);
        Application();

        virtual void run();

        ~Application();
    private:
        const char* m_name;


    };

    Application* createApplication(int argc, char** argv);
}// namespace chlover