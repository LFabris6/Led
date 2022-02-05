
#include <iostream>
#include <boost/array.hpp>
#include <boost/asio.hpp>

using namespace std;

using boost::asio::ip::tcp;





int main()
{


   

    std::cout << "Uspostavljanje veze..." << std::endl;

    try {
        boost::asio::io_context io_context;

        tcp::socket socket(io_context);
        socket.connect(tcp::endpoint(boost::asio::ip::address::from_string("127.0.0.1"), 13));

        std::cout << "Rasberry Pi je uspijesno povezan sa serverom" << std::endl;

       
    }


    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }





    return 0;
}