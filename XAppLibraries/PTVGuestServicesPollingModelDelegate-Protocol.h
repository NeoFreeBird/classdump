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
