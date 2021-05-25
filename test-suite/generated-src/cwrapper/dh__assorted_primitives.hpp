// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primtypes.djinni

#pragma once

#include <atomic>
#include <experimental/optional>
#include "assorted_primitives.hpp"
#ifdef __cplusplus
extern "C" {
#endif

#include "dh__assorted_primitives.h"

#ifdef __cplusplus
}
#endif
struct DjinniAssortedPrimitives {
    static djinni::Handle<DjinniRecordHandle> fromCpp(const ::testsuite::AssortedPrimitives& dr);
    static ::testsuite::AssortedPrimitives toCpp(djinni::Handle<DjinniRecordHandle> dh);
    static djinni::Handle<DjinniOptionalRecordHandle> fromCpp(std::experimental::optional<::testsuite::AssortedPrimitives> dc);
    static std::experimental::optional<::testsuite::AssortedPrimitives> toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh);
};
