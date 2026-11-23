//
#ifndef T1ActivityHistoryEntry_h
#define T1ActivityHistoryEntry_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSObject;

@interface T1ActivityHistoryEntry : NSObject <NSSecureCoding> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 entryType;
    @40@0:8:16@24@32 statusID;
    @40@0:8:16@24@32 timestamp;
    @40@0:8:16@24@32 mediaKey;
    @40@0:8:16@24@32 watchedSeconds;
}

@property (nonatomic, readonly) long long hash;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (void)setSupportsSecureCoding:(_Bool)coding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* T1ActivityHistoryEntry_h */
