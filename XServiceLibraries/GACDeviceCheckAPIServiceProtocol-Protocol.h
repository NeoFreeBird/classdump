//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACDeviceCheckAPIServiceProtocol_Protocol_h
#define GACDeviceCheckAPIServiceProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACDeviceCheckAPIServiceProtocol <NSObject>

@required

/* required instance methods */
- (id)appCheckTokenWithDeviceToken:(id)token limitedUse:(_Bool)use;

@optional

@end

#endif /* GACDeviceCheckAPIServiceProtocol_Protocol_h */
