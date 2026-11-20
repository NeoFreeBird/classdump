//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLiveEventTimelineCustomizationInfo_h
#define TFSTwitterLiveEventTimelineCustomizationInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSTwitterEntityImageInfo.h"

@class NSObject, NSString;

@interface TFSTwitterLiveEventTimelineCustomizationInfo : NSObject <NSCopying> // (Swift)

@property (nonatomic, readonly) NSString *titleRGBColorString;
@property (nonatomic, readonly) TFSTwitterEntityImageInfo *titleBadgeEntity;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithTitleRGBColorString:(id)string titleBadgeEntity:(id)entity;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)toJSONDictionary;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqualToTimelineCustomizationInfo:(id)info;
- (id)init;

@end

#endif /* TFSTwitterLiveEventTimelineCustomizationInfo_h */
