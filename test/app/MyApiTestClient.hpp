//
// Created by Casey Williams on 20/05/2021.
//

#ifndef OATPP_PRACTICE_MYAPITESTCLIENT_HPP
#define OATPP_PRACTICE_MYAPITESTCLIENT_HPP

#include "oatpp/web/client/ApiClient.hpp"
#include "oatpp/core/macro/codegen.hpp"

/* Begin Api Client code generation */
#include OATPP_CODEGEN_BEGIN(ApiClient)

/**
 * Test API client.
 * Use this client to call application APIs.
 */
class MyApiTestClient : public oatpp::web::client::ApiClient {

API_CLIENT_INIT(MyApiTestClient)

    API_CALL("GET", "/hello", getHello)

    // TODO - add more client API calls here

};

/* End Api Client code generation */
#include OATPP_CODEGEN_END(ApiClient)

#endif //OATPP_PRACTICE_MYAPITESTCLIENT_HPP
