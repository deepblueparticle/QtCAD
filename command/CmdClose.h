#pragma once
#ifndef INCLUDED_CMDCLOSE_H
#define INCLUDED_CMDCLOSE_H

#include "command/Cmd.h"

class CmdClose : public Cmd
{
public:
	CmdClose(){}
	~CmdClose(){}

	void execute(Data& d, MainScreen& s);
};

#endif

