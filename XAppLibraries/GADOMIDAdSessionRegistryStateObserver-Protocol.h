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
