//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterDynamicVideoAd_h
#define TFSTwitterDynamicVideoAd_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSTwitterDynamicVideoAdVideo.h"
#include "_TtC14TFSTwitterCore25TFSTwitterPromotedContent.h"

@class NSNumber, NSObject, NSString;

@interface TFSTwitterDynamicVideoAd : NSObject <NSCopying> // (Swift)

@property (nonatomic, readonly) NSString *adId;
@property (nonatomic, readonly) NSNumber *adStatusId;
@property (nonatomic, readonly) NSNumber *adType;
@property (nonatomic, readonly) TFSTwitterDynamicVideoAdVideo *adVideo;
@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) NSString *liveEventId;
@property (nonatomic, readonly) NSString *impressionId;
@property (nonatomic, readonly) NSString *videoAnalyticsScribePassthrough;
@property (nonatomic, readonly) _Bool isAmplify;
@property (nonatomic, readonly) _Bool isMarketplace;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithAdId:(id)id adStatusId:(id)id adType:(id)type adVideo:(id)video promotedContent:(id)content liveEventId:(id)id impressionId:(id)id videoAnalyticsScribePassthrough:(id)passthrough;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterDynamicVideoAd_h */
