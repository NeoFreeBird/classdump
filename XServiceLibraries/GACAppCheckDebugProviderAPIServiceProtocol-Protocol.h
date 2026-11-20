//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppCheckDebugProviderAPIServiceProtocol_Protocol_h
#define GACAppCheckDebugProviderAPIServiceProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACAppCheckDebugProviderAPIServiceProtocol <NSObject>

@required

/* required instance methods */
- (id)appCheckTokenWithDebugToken:(id)token limitedUse:(_Bool)use;

@optional

@end

#endif /* GACAppCheckDebugProviderAPIServiceProtocol_Protocol_h */
