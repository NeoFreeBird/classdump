//
#ifndef TFSTwitterTagSet_h
#define TFSTwitterTagSet_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterTagSet : NSObject <NSCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithTags:(id)tags;
- (id)initWithJSONArray:(id)jsonarray;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)tagsWithPriorityToUserID:(long long)id;
- (id)tagSetByRemovingUserWithUserID:(long long)id;
- (_Bool)includesUserWithUserID:(long long)id;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterTagSet_h */
