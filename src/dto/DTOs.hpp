//
// Created by Casey Williams on 20/05/2021.
//

#ifndef OATPP_PRACTICE_DTOS_HPP
#define OATPP_PRACTICE_DTOS_HPP

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
/* Begin DTO code-generation */
#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * Message Data-Transfer-Object
 */
class MessageDto : public oatpp::DTO {

    DTO_INIT(MessageDto, DTO /* Extends */)

    DTO_FIELD(Int32, statusCode);   // Status code field
    DTO_FIELD(String, message);     // Message field

};

/* TODO: Add more DTOs

/* End DTO code-generation */
#include OATPP_CODEGEN_END(DTO)

#endif //OATPP_PRACTICE_DTOS_HPP
