//
#ifndef ONBDiscoverabilityOptionsProvider_Protocol_h
#define ONBDiscoverabilityOptionsProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBDiscoverabilityOptionsProvider <NSObject>

@required

/* required instance methods */
- (_Bool)discoverableByEmail;
- (_Bool)discoverableByPhone;
- (void)setDiscoverableByEmail:(_Bool)email completionBlock:(id /* block */)block;
- (void)setDiscoverableByPhone:(_Bool)phone completionBlock:(id /* block */)block;
- (id)discoverabilityOptionsTitle;

@optional

/* optional instance methods */
- (id /* block */)discoverabilityDoneButtonAction;
- (id)discoverabilityDoneButtonLabel;
- (id)discoverabilitySectionLabel;
- (id)discoverableByEmailLabel;
- (id)discoverableByPhoneLabel;
- (id)discoverableByEmailDescriptionText;
- (id)discoverableByEmailDescriptionCallsToAction;
- (id)discoverableByPhoneDescriptionText;
- (id)discoverableByPhoneDescriptionCallsToAction;

@end

#endif /* ONBDiscoverabilityOptionsProvider_Protocol_h */
