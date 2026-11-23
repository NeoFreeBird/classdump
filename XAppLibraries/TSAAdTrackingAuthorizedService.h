//
#ifndef TSAAdTrackingAuthorizedService_h
#define TSAAdTrackingAuthorizedService_h
@import Foundation;

#include "TSAAuthorizedService-Protocol.h"

@class NSObject, NSString;

@interface TSAAdTrackingAuthorizedService : NSObject <TSAAuthorizedService>

@property (readonly, nonatomic) id /* block */ isAdTrackingIDFASystemPromptKillSwitchEnabledBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)isIDFASystemPermissionGranted;
+ (_Bool)isATTAuthorizationDetermined;
+ (_Bool)isATTAuthorizationDeniedOrRestricted;

/* instance methods */
- (id)initWithIDFASystemPromptKillSwitchEnabledBlock:(id /* block */)block;
- (void)queryAuthorizationStatusWithCompletionBlock:(id /* block */)block;
- (id)defaultUsageDescription;
- (void)requestAuthorizationWithCompletionBlock:(id /* block */)block;
- (id)regrantPermissionInstructions;
- (void)requestAuthorizationWithContext:(id)context completionBlock:(id /* block */)block;

@end

#endif /* TSAAdTrackingAuthorizedService_h */
