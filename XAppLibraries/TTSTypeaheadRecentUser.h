//
#ifndef TTSTypeaheadRecentUser_h
#define TTSTypeaheadRecentUser_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject;

@interface TTSTypeaheadRecentUser : NSObject <NSCoding>

@property (readonly, nonatomic) long long userID;
@property (readonly, nonatomic) double lastVisitTimestamp;
@property (readonly, nonatomic) double decayedCount;

/* instance methods */
- (id)initWithUserID:(long long)id lastVisitTimestamp:(double)timestamp decayedCount:(double)count;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TTSTypeaheadRecentUser_h */
