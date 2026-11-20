//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLiveEventSponsorshipDetails_h
#define TFSTwitterLiveEventSponsorshipDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterLiveEventSponsorshipDetails : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *sponsorName;
@property (readonly, nonatomic) _Bool sponsored;

/* instance methods */
- (id)init;
- (id)initWithSponsorName:(id)name;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)toJSONDictionary;
- (_Bool)isSponsored;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToSponsorshipDetails:(id)details;

@end

#endif /* TFSTwitterLiveEventSponsorshipDetails_h */
