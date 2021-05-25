// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from extended_record.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "interface_using_extended_record.hpp"

#include "cw__interface_using_extended_record.hpp"
#include "dh__extended_record.hpp"
#include "dh__record_using_extended_record.hpp"

std::shared_ptr<::testsuite::InterfaceUsingExtendedRecord> DjinniWrapperInterfaceUsingExtendedRecord::get(djinni::WrapperRef<DjinniWrapperInterfaceUsingExtendedRecord> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void interface_using_extended_record___wrapper_add_ref(DjinniWrapperInterfaceUsingExtendedRecord * dh) {
    dh->ref_count.fetch_add(1);
}
void interface_using_extended_record___wrapper_dec_ref(DjinniWrapperInterfaceUsingExtendedRecord * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperInterfaceUsingExtendedRecord> DjinniWrapperInterfaceUsingExtendedRecord::wrap(std::shared_ptr<::testsuite::InterfaceUsingExtendedRecord> obj) {
    if (obj)
        return djinni::Handle<DjinniWrapperInterfaceUsingExtendedRecord>(new DjinniWrapperInterfaceUsingExtendedRecord{ std::move(obj) }, interface_using_extended_record___wrapper_dec_ref);
    return nullptr;
}

DjinniRecordHandle * cw__interface_using_extended_record_meth(DjinniWrapperInterfaceUsingExtendedRecord * djinni_this, DjinniRecordHandle * er) {
    djinni::Handle<DjinniRecordHandle> _er(er, extended_record___delete);
    try {
        return DjinniExtendedRecord::fromCpp(djinni_this->wrapped_obj->meth(DjinniExtendedRecord::toCpp(std::move(_er)))).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}
