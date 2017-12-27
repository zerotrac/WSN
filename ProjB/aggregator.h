#ifndef AGGREGATOR_H
#define AGGREGATOR_H

enum {
    EIGHTH_DATA_TOTAL = 251,
    HALF_DATA_TOTAL = 1000,
    DATA_TOTAL = 2000,
};

typedef nx_struct Data_Msg
{
    nx_uint16_t seq;
    nx_uint32_t num;
} Data_Msg;

typedef nx_struct Result_Msg
{
    nx_uint8_t group;
    nx_uint32_t max;
    nx_uint32_t min;
    nx_uint32_t sum;
    nx_uint32_t average;
    nx_uint32_t median;
} Result_Msg;

typedef nx_struct Request_Msg
{
    nx_uint16_t seq;
}Request_Msg;

typedef nx_struct Response_Msg
{
    nx_uint16_t seq;
    nx_uint32_t num;
} Response_Msg;

enum {
    AM_DATA_MSG= 6,
    AM_RESULT_MSG = 7,
    AM_REQUEST_MSG = 8,
    AM_RESPONSE_MSG = 9
};

enum {
    TARGET_ID = 0,
    GROUP_ID = 20,
};

enum {
    UINT_MAX = 4294967295,
};

#endif
