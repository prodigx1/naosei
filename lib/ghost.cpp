#include <iostream>
#include <ctime>
#include <miniop>


Class Ghost {


public:

    struct Datime{
        Int sec;
        Int min;
        Int hour;

        Int day;
        Int week;
        Int year;
    }

    struct HardwareInfo{
        std::string GpuName;
        std::string CpuName;
        
        int RamMemory;
        int DiskTotalMemory;
    }

    struct Windows{
        std::string user_name_actual;
        std::string outhers_users;

        std::string windows_name;
        std::string windows_ver;
        std::string windows_model;

    }

    Datime get_day_info(){
        time_t actual = time(nullptr);
        tm*  hour = localtime(&actual);
        Data info;

        Info.sec = hour->tm_sec;
        info.min = hour->tm_min;
        info.hour = hour->tm_hour;


        Info.day = hour->tm_day;
        Info.week = hour->tm_mon + 1;
        Info.year = hour->tm_year + 1900;

        Return info;
    }


    Windows get_windows_info(){



    }

    HardwareInfo get_hardware_info(){




        
    }
}