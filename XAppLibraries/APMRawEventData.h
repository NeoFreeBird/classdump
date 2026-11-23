//
#ifndef APMRawEventData_h
#define APMRawEventData_h
@import Foundation;

#include "APMEvent.h"

@class NSObject;

@interface APMRawEventData : NSObject

@property (readonly, nonatomic) APMEvent *rawEvent;
@property (readonly, nonatomic) long long rowID;
@property (readonly, nonatomic) long long metadataFingerprint;

/* instance methods */
- (id)initWithRawEvent:(id)event rowID:(long long)id metadataFingerprint:(long long)fingerprint;

@end

#endif /* APMRawEventData_h */
