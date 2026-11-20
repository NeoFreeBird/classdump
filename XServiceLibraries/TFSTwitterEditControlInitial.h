//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEditControlInitial_h
#define TFSTwitterEditControlInitial_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSObject;

@interface TFSTwitterEditControlInitial : NSObject <NSSecureCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) long long editableUntilMsecs;
@property (nonatomic, readonly) _Bool isEditEligible;
@property (nonatomic, readonly) long long editsRemaining;
@property (nonatomic, readonly) NSArray *editTweetIds;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithEditTweetIds:(id)ids editableUntilMsecs:(long long)msecs isEditEligible:(_Bool)eligible editsRemaining:(long long)remaining;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterEditControlInitial_h */
