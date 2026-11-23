//
#ifndef TFSTwitterLiveEventCarouselEntrySocialProof_h
#define TFSTwitterLiveEventCarouselEntrySocialProof_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFSTwitterLiveEventCarouselEntrySocialProof : NSObject <NSCopying>

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long type;

/* instance methods */
- (id)init;
- (id)initWithCount:(long long)count type:(long long)type;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (id)description;
- (_Bool)isEqualToCarouselEntrySocialProof:(id)proof;

@end

#endif /* TFSTwitterLiveEventCarouselEntrySocialProof_h */
