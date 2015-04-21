
#include "hphp/runtime/base/base-includes.h"


namespace HPHP {

namespace { // Anonymous namespace

static Variant HHVM_FUNCTION(mssql_connect, const String& server_name, const String& username, const String& password, bool new_link /* = 0 */) {
    // TODO - Implement
    return Variant(0);
}

static bool HHVM_FUNCTION(mssql_close,  const Variant& link_identifier) {
    // TODO - Implement
    return 0;
}




static class mssqlExtension : public Extension {
public:
    mssqlExtension() : Extension("mssql") {}

    virtual void moduleInit() {

        HHVM_FE(mssql_connect);
        HHVM_FE(mssql_close);

		loadSystemlib();
    }
} s_mssql_extension;


HHVM_GET_MODULE(mssql)

} // Anonymous namespace

}