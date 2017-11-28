//
// Created by Russell Templet on 11/26/17.
//

#include <iostream>
#include <fstream>

namespace test_data_write_example {

    int run2() {
        std::string data = "101:1:23:54:26:12345,102:1:24:55:29:543,103:3:60:56:Spot:75|104:2:43:56:334:543,105:2:34:54:23:54,106:3:45:65:Pork:89|||107:2:454:34:65:34|108:1:34:34:24:43232";

        std::ofstream writer ("test_out.txt", std::ios::out|std::ios::binary);
        writer.write(data.c_str(), data.length());
        writer.close();

        return 0;
    }
}