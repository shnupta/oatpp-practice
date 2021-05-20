//
// Created by Casey Williams on 20/05/2021.
//

#ifndef OATPP_PRACTICE_MYCONTROLLER_HPP
#define OATPP_PRACTICE_MYCONTROLLER_HPP

#include "dto/DTOs.hpp"

#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"

#include OATPP_CODEGEN_BEGIN(ApiController)

class MyController : public oatpp::web::server::api::ApiController {
public:
    /**
   * Constructor with object mapper.
   * @param objectMapper - default object mapper used to serialize/deserialize DTOs.
   */
    MyController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper)) : oatpp::web::server::api::ApiController(objectMapper) {}

public:
    ENDPOINT("GET", "/hello", root) {
        auto dto = MessageDto::createShared();
        dto->statusCode = 200;
        dto->message = "Hello world!";
        return createDtoResponse(Status::CODE_200, dto);
    }

    // TODO: Insert more endpoints here
};


#include OATPP_CODEGEN_END(ApiController)

#endif //OATPP_PRACTICE_MYCONTROLLER_HPP
