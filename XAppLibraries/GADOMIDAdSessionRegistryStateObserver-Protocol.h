//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDAdSessionRegistryStateObserver_Protocol_h
#define GADOMIDAdSessionRegistryStateObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADOMIDAdSessionRegistryStateObserver <NSObject>

@required

/* required instance methods */
- (void)adSessionRegistryDidBecomeActive;
- (void)adSessionRegistryDidResignActive;
- (void)adSessionDidBecomeActive:(id)active;

@optional

@end

#endif /* GADOMIDAdSessionRegistryStateObserver_Protocol_h */
