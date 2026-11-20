//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatKotlin20CommonHeaderProvider_h
#define _TtC10ChatKotlin20CommonHeaderProvider_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainHeaderProvider-Protocol.h"

@class _$s11XApiService0A14HeaderProviderMp, _$sSS, _TtCs12_SwiftObject;

@interface ChatKotlin.CommonHeaderProvider : Swift._SwiftObject <Subsystem_ios_iosArm64_mainHeaderProvider> { // (Swift)
    /* instance variables */
    Swift.String accountID;
    protocol descriptor for XApiService.XApiHeaderProvider apiHeaderProvider;
}

/* instance methods */
- (void)headersRequest:(id)request completionHandler:(id /* block */)handler;

@end

#endif /* _TtC10ChatKotlin20CommonHeaderProvider_h */
