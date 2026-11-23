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
