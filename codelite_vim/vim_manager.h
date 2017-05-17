#ifndef __VIM_MANAGER_H__
#define __VIM_MANAGER_H__

#include <wx/stc/stc.h>
#include "vimCommands.h"
#include "ieditor.h"
#include "event_notifier.h"
#include "macros.h"
#include "imanager.h"
#include "globals.h"
#include "cl_editor.h"
#include "codelite_events.h"
#include <wx/kbdstate.h>



/**
 * @brief This Class is used to intercet the key event end rederect them 
 * to perform vi-key-bindings.
 *
 * 
 */

class VimManager
{

 public:
	/*ctr-distr ... */
	VimManager(IManager *manager);
	~VimManager();

 protected:
	void OnEditorChanged(wxCommandEvent &event);
	void OnCharEvt(wxKeyEvent &event);
	void OnKeyDown(wxKeyEvent &event);

 private:
	IEditor          * mEditor;
	wxStyledTextCtrl * mCtrl;
	VimCommand       mCurrCmd;     /*!< command currenly */
	VimCommand       mLastCmd;     /*!< last command performed */
	wxString         mTmpBuf;      /*!< tmporary buffer (of inserted text) */
	IManager         * m_mgr;
	int mCaretInsStyle;
	int mCaretNormStyle;
	
	void Issue_cmd();
	void updateView();
};

#endif // __VIM_MANAGER_H__
