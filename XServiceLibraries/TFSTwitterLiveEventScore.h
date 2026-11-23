//
#ifndef TFSTwitterLiveEventScore_h
#define TFSTwitterLiveEventScore_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSTwitterMomentSportEventUpdate.h"

@class NSObject;

@interface TFSTwitterLiveEventScore : NSObject <NSCopying>

@property (readonly, nonatomic) long long availability;
@property (readonly, nonatomic) TFSTwitterMomentSportEventUpdate *momentsData;

/* instance methods */
- (id)init;
- (id)initWithAvailability:(long long)availability momentsData:(id)data;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToScore:(id)score;

@end

#endif /* TFSTwitterLiveEventScore_h */
