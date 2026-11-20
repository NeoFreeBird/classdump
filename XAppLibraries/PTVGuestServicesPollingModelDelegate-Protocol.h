//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestServicesPollingModelDelegate_Protocol_h
#define PTVGuestServicesPollingModelDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestServicesPollingModelDelegate <NSObject>

@required

/* required instance methods */
- (void)willPollGuestServices:(id)services;
- (void)didPollGuestServicesWithResponse:(id)response;
- (void)didPollGuestServicesWithError:(id)error;

@optional

@end

#endif /* PTVGuestServicesPollingModelDelegate_Protocol_h */
