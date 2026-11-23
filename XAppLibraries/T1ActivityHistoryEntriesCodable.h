//
#ifndef T1ActivityHistoryEntriesCodable_h
#define T1ActivityHistoryEntriesCodable_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSObject;

@interface T1ActivityHistoryEntriesCodable : NSObject <NSSecureCoding> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 entries;
}

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (void)setSupportsSecureCoding:(_Bool)coding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* T1ActivityHistoryEntriesCodable_h */
