//======== EntryPoint.hpp ========
//Purpose:
//===============================

#pragma once

#include "chlover/application/Application.hpp"

extern chlover::Application* chlover::createApplication( int argc, char** argv );

int main( int argc, char** argv )
{
    auto game = chlover::createApplication( argc, argv );
    game->run();
    delete game;

    return 0x000;
}