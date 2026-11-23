//
#ifndef HeadsUpAccessHistory_h
#define HeadsUpAccessHistory_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSMutableArray, NSObject;

@interface HeadsUpAccessHistory : NSObject <NSSecureCoding>

@property (readonly, nonatomic) NSMutableArray *mutableAccessedDates;
@property (readonly, nonatomic) NSArray *accessedDates;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isUnderFatigueRuleThreshold;
- (int)getNumberOfDatesOver24hSinceFirstSeen;
- (void)updateDates:(id)dates for:(id)_for;

@end

#endif /* HeadsUpAccessHistory_h */
