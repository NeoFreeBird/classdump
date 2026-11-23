//
#ifndef TFSTwitterLiveEventSocialContext_h
#define TFSTwitterLiveEventSocialContext_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterLiveEventSocialContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic) long long socialContextType;

/* instance methods */
- (id)init;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToSocialContext:(id)context;
- (unsigned long long)hash;
- (id)description;
- (id)toJSONDictionary;

@end

#endif /* TFSTwitterLiveEventSocialContext_h */
