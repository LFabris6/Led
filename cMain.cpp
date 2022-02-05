#include "cMain.h"



cMain::cMain() : wxFrame(nullptr, wxID_ANY, "test", wxPoint(30, 30), wxSize(800, 600)) {

	
	
	wxMenu* menuFile = new wxMenu;
	menuFile->Append(KON, "&Spoji...\tCtrl-H",
		"Startaj Server!");
	menuFile->AppendSeparator();
	menuFile->Append(wxID_EXIT);
	wxMenu* menuHelp = new wxMenu;
	menuHelp->Append(wxID_ABOUT);
	wxMenuBar* menuBar = new wxMenuBar;
	menuBar->Append(menuFile, "&File");
	menuBar->Append(menuHelp, "&Help");

	SetMenuBar(menuBar);
	



	
	wxButton *btn = new wxButton(this, BTN, "Upali/Ugasi", wxPoint(10, 10), wxSize(50, 50));
	
	Bind(wxEVT_MENU, &cMain::SpojiSe, this, KON);
	Bind(wxEVT_MENU, &cMain::OnAbout, this, wxID_ABOUT);
	Bind(wxEVT_MENU, &cMain::OnExit, this, wxID_EXIT);
	
}

BEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(BTN, cMain::Blink)
END_EVENT_TABLE()


void cMain::Blink(wxCommandEvent& event)
{
	if (Veza) {
		wxMessageBox("Lampica je upaljena", "Uspjeh", wxOK | wxICON_INFORMATION);
	}
	else {
		wxMessageBox("Poveži se sa Rasberry Pi-em prije", "Error", wxOK | wxICON_INFORMATION);
	}
}

void cMain::OnExit(wxCommandEvent& event)
{
	Close(true);
}
void cMain::OnAbout(wxCommandEvent& event)
{
	wxMessageBox("This is a wxWidgets Hello World example",
		"About Hello World", wxOK | wxICON_INFORMATION);
}




cMain::~cMain() {
	
}