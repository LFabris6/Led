#pragma once

#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	bool Veza = FALSE;
	
	

private:
	void Blink(wxCommandEvent& event);
	void SpojiSe(wxCommandEvent& event);
	void PokreniServer();
	void OnExit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
	DECLARE_EVENT_TABLE()
	enum
	{
		KON = 1,
		BTN = wxID_HIGHEST + 1,
	};
};

