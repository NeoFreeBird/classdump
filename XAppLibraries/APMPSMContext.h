//
#ifndef APMPSMContext_h
#define APMPSMContext_h
@import Foundation;

#include "APMAlarm.h"

@class NSObject;
@protocol APMPrivateSetMembershipClient;

@interface APMPSMContext : NSObject

@property (retain, nonatomic) id <APMPrivateSetMembershipClient> PSMClient;
@property (nonatomic) _Bool isPSMRequestInProgress;
@property (nonatomic) _Bool isPSMRequestPostponed;
@property (nonatomic) int PSMStartCount;
@property (nonatomic) int PSMRetryCount;
@property (retain, nonatomic) APMAlarm *PSMRetryAlarm;
@property (nonatomic) _Bool isPSMSession;

/* instance methods */

@end

#endif /* APMPSMContext_h */
