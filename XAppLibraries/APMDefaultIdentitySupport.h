//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMDefaultIdentitySupport_h
#define APMDefaultIdentitySupport_h
@import Foundation;

#include "APMIdentitySupport-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface APMDefaultIdentitySupport : NSObject <APMIdentitySupport> {
    /* instance variables */
    id <APMIdentitySupport> _platformIdentitySupport;
    NSObject<OS_dispatch_queue> *_queue;
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
+ (_Bool)iOS14OrAbove;

/* instance methods */
- (id)init;

@end

#endif /* APMDefaultIdentitySupport_h */
