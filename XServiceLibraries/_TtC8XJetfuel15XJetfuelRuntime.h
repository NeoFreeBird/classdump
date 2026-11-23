//
#ifndef _TtC8XJetfuel15XJetfuelRuntime_h
#define _TtC8XJetfuel15XJetfuelRuntime_h
@import Foundation;

#include "_TtC10JetfuelSDK7Runtime.h"

@class XAuthService.XAuthenticating, XJetfuel.XJetfuelScribeProvider ?, _$s10Foundation3URLVMn, _$sSS, _$sSSSg, _$ss5Int64VMn ?;

@interface XJetfuel.XJetfuelRuntime : JetfuelSDK.Runtime { // (Swift)
    /* instance variables */
    Swift.String? accountID;
    nominal type descriptor for Swift.Int64 ? userID;
    Swift.String version;
    XAuthService.XAuthenticating authenticator;
    XJetfuel.XJetfuelScribeProvider ? scribeProvider;
    nominal type descriptor for Foundation.URL signingURL;
}

@end

#endif /* _TtC8XJetfuel15XJetfuelRuntime_h */
