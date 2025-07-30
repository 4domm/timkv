#include "hv/HttpServer.h"

int main() {
    HttpService router;
    router.POST("/echo", [](const HttpContextPtr& ctx) {
        return ctx->send(ctx->body(), ctx->type());
    });
    hv::HttpServer server(&router);
    server.setPort(8080);
    server.setThreadNum(4);
    server.run();
    return 0;
}