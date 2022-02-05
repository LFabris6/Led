#include <iostream>
#include <boost/asio.hpp>
using boost::asio::ip::tcp;
#include "cApp.h"


void cMain::PokreniServer()
{

    try
    {
        
        boost::asio::io_context io_context;

        tcp::acceptor acceptor(io_context, tcp::endpoint(tcp::v4(), 13));
        wxMessageBox("Server je pokrenut na portu 13", "Uspjeh", wxOK | wxICON_INFORMATION);



        for (;;)
        {

            tcp::socket socket(io_context);
            acceptor.accept(socket);
            wxMessageBox("Rasberry Pi je povezan, sada mozes upravljati led lampicom", "Uspjeh", wxOK | wxICON_INFORMATION);

        
        }
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    
}