#ifndef NODEJSEVENTS_H
#define NODEJSEVENTS_H

#include "cl_command_event.h"

wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_STARTED, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_STOPPED, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_UPDATE_CALLSTACK, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_LOCALS_LOOKUP, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_TOOLTIP_LOOKUP, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_CAN_INTERACT, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_LOST_INTERACT, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_MARK_LINE, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_CONSOLE_LOG, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_SELECT_FRAME, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_EXCEPTION_THROWN, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_UPDATE_BREAKPOINTS_VIEW, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_EVAL_EXPRESSION, clDebugEvent);
wxDECLARE_EVENT(wxEVT_NODEJS_DEBUGGER_EXPRESSION_EVALUATED, clDebugEvent);

#endif
