//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRInstallationsBackoffControllerProtocol_Protocol_h
#define FIRInstallationsBackoffControllerProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol FIRInstallationsBackoffControllerProtocol <NSObject>

@required

/* required instance methods */
- (void)registerEvent:(long long)event;
- (_Bool)isNextRequestAllowed;

@optional

@end

#endif /* FIRInstallationsBackoffControllerProtocol_Protocol_h */
