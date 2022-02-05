#define ASIO_STANDALONE
#include <iostream>
#include "cApp.h"

using namespace std;

void cMain::SpojiSe(wxCommandEvent& event)
{
	if (!Veza) {
		wxMessageBox("Spajanje...", "Veza", wxOK | wxICON_INFORMATION);
		PokreniServer();
		wxMessageBox("Thread je osloboden", "Veza", wxOK | wxICON_INFORMATION);
	}

	else {
		wxMessageBox("Veza je uspostavljena, spreman si upaliti lampicu", "Veza", wxOK | wxICON_INFORMATION);
	}
}