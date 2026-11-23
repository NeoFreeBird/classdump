//
#ifndef GDTCORLogSourceMetrics_h
#define GDTCORLogSourceMetrics_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSObject;

@interface GDTCORLogSourceMetrics : NSObject <NSSecureCoding>

@property (readonly, nonatomic) NSDictionary *droppedEventCounterByLogSource;

/* class methods */
+ (id)metrics;
+ (id)metricsWithEvents:(id)events droppedForReason:(long long)reason;
+ (id)dictionaryByMergingDictionary:(id)dictionary withOtherDictionary:(id)dictionary uniquingKeysWithBlock:(id /* block */)block;
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithDroppedEventCounterByLogSource:(id)source;
- (id)logSourceMetricsByMergingWithLogSourceMetrics:(id)metrics;
- (_Bool)isEqualToLogSourceMetrics:(id)metrics;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;

@end

#endif /* GDTCORLogSourceMetrics_h */
