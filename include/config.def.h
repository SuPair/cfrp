#define BIND_ADDR "0.0.0.0"
#define LOCAL_ADDR "127.0.0.1"

struct peer server_mapper[] = {
    {8080, BIND_ADDR},
    {8888, BIND_ADDR}
};


struct peer client_mapper[] = {
    {22, LOCAL_ADDR},
    {8080, "127.0.0.1"}
};