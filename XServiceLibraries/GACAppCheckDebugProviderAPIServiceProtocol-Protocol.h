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
