//
#ifndef TNUCommunicationAgent_h
#define TNUCommunicationAgent_h
@import Foundation;

#include "TNLCarrierInfo-Protocol.h"
#include "TNLCommunicationAgent.h"

@class NSNumber, NSString;

@interface TNUCommunicationAgent : TNLCommunicationAgent

@property (retain) NSNumber *overrideReachabilityStatus;
@property (retain) NSNumber *overrideReachabilityFlags;
@property (copy) NSString *overrideWWANRadioAccessTechnology;
@property (retain) id <TNLCarrierInfo> overrideCarrierInfo;
@property (retain) NSNumber *internalReachabilityStatus;
@property (retain) NSNumber *internalReachabilityFlags;
@property (copy) NSString *internalWWANRadioAccessTechnology;
@property (retain) id <TNLCarrierInfo> internalCarrierInfo;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)currentCarrierInfo;
- (id)currentWWANRadioAccessTechnology;
- (long long)currentReachabilityStatus;
- (unsigned int)currentReachabilityFlags;
- (void)clearOverrides;
- (id)tnu_quickSynchronousCarrierInfo;

@end

#endif /* TNUCommunicationAgent_h */
