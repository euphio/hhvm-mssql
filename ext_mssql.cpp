
#include "hphp/runtime/base/base-includes.h"

namespace HPHP {

/** http://docs.hhvm.com/manual/en/function.mssql-bind.php **/
static bool HHVM_FUNCTION(mssql_bind, const Resource& stmt, const String& param_name, const Variant& var, int64_t type,
                      bool is_output = false, bool is_null = false, int64_t maxlen = -1) {
    // TODO - Implement
    return false;
}

/** http://docs.hhvm.com/manual/en/function.mssql-close.php **/
static bool HHVM_FUNCTION(mssql_close,  const Resource& link_identifier) {
    // TODO - Implement
    return 0;
}

/** http://docs.hhvm.com/manual/en/function.mssql-connect.php **/
static Variant HHVM_FUNCTION(mssql_connect, const String& server_name, const String& username, const String& password,
                        bool new_link /* = 0 */) {
    // TODO - Implement
    return Variant(0);
}

/** http://docs.hhvm.com/manual/en/function.mssql-data-seek.php **/
static bool HHVM_FUNCTION(mssql_data_seek, const Resource& result_identifier, int64_t row_number) {
    // TODO - Implement
    return 0;
}

/** http://docs.hhvm.com/manual/en/function.mssql-execute.php **/
static Variant HHVM_FUNCTION(mssql_execute, const Resource& stmt, bool skip_results = false) {
    // TODO - Implement
    return Variant(0);
}

static class mssqlExtension : public Extension {
public:
    mssqlExtension() : Extension("mssql") {}

    virtual void moduleInit() {

        HHVM_FE(mssql_bind);
        HHVM_FE(mssql_close);
        HHVM_FE(mssql_connect);
        HHVM_FE(mssql_data_seek);
        HHVM_FE(mssql_execute);

        loadSystemlib();
    }
} s_mssql_extension;

HHVM_GET_MODULE(mssql)

}