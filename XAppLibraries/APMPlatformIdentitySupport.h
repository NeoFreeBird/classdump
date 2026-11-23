//
#ifndef APMPlatformIdentitySupport_h
#define APMPlatformIdentitySupport_h
@import Foundation;

#include "APMIdentitySupport-Protocol.h"

@class NSObject, NSString;

@interface APMPlatformIdentitySupport : NSObject <APMIdentitySupport> {
    /* instance variables */
    Class _trackingManagerClass;
    id _identifierManager;
}

@property (readonly, nonatomic) _Bool hasAppDataConsentStatus;
@property (readonly, nonatomic) unsigned long long appDataConsentStatus;
@property (readonly, nonatomic) _Bool hasLimitedAdTracking;
@property (readonly, nonatomic) _Bool limitedAdTracking;
@property (readonly, nonatomic) NSString *resettableDeviceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;

@end

#endif /* APMPlatformIdentitySupport_h */
