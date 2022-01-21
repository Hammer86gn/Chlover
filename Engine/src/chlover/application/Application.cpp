//======== Application.cpp ========
//Purpose:
//=============================

#include "chlover/application/Application.hpp"

chlover::Application::Application()
{
    this->m_name = "Chlover Game";
}

chlover::Application::Application( const char* name )
{
    this->m_name = name;
}