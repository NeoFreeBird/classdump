//
#ifndef InjectedTweet_h
#define InjectedTweet_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface InjectedTweet : NSObject <NSCopying>

@property (readonly, nonatomic) long long statusID;

/* instance methods */
- (id)initWithStatusID:(long long)id;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;

@end

#endif /* InjectedTweet_h */
