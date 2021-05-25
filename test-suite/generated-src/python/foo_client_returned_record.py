# AUTOGENERATED FILE - DO NOT MODIFY!
# This file generated by Djinni from foo_client_interface.djinni

from djinni.support import MultiSet # default imported in all files
from djinni.exception import CPyException # default imported in all files
from djinni.pycffi_marshal import CPyPrimitive, CPyRecord, CPyString

from foo_some_other_record import FooSomeOtherRecord
from foo_some_other_record_helper import FooSomeOtherRecordHelper
from PyCFFIlib_cffi import ffi, lib

from djinni import exception # this forces run of __init__.py which gives cpp option to call back into py to create exception

class FooClientReturnedRecord:
    c_data_set = MultiSet()

    @staticmethod
    def check_c_data_set_empty():
        assert len(FooClientReturnedRecord.c_data_set) == 0
        FooSomeOtherRecord.check_c_data_set_empty()

    # Record deriving types
    def __eq__(self, other):
        return self.record_id==other.record_id and \
        self.content.__eq__(other.content) and \
        self.some_record.__eq__(other.some_record)
    def __lt__(self, other):
        if self.record_id<other.record_id:
            return True
        if self.record_id>other.record_id:
            return False
        if self.content.__lt__(other.content):
            return True
        if self.content.__gt__(other.content):
            return False
        if self.some_record.__lt__(other.some_record):
            return True
        if self.some_record.__gt__(other.some_record):
            return False
        return False
    def __le__(self, other):
        return not other.__lt__(self)
    def __ge__(self, other):
        return not self.__lt__(other)
    def __gt__(self, other):
        return other.__lt__(self)
    def __hash__(self):
        # Pick an arbitrary non-zero starting value
        hash_code = 17
        hash_code = hash_code * 31 + self.record_id.__hash__()
        hash_code = hash_code * 31 + self.content.__hash__()
        hash_code = hash_code * 31 + self.some_record.__hash__()
        return hash_code

    def __init__(self, record_id, content, some_record):
        self.record_id = record_id
        self.content = content
        self.some_record = some_record

