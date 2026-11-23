//
#ifndef TFSTwitterLiveEventTimelineVariant_h
#define TFSTwitterLiveEventTimelineVariant_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSTwitterLiveEventTimelineCustomizationInfo.h"

@class NSObject, NSString;

@interface TFSTwitterLiveEventTimelineVariant : NSObject <NSCopying> // (Swift)

@property (nonatomic, copy) NSString *timelineID;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *hashtag;
@property (nonatomic, copy) NSString *composeSemanticCoreID;
@property (nonatomic, copy) NSString *timelineSourceID;
@property (nonatomic, copy) NSString *timelineSourceType;
@property (nonatomic, copy) NSString *composeInjectionTimelineID;
@property (nonatomic, retain) TFSTwitterLiveEventTimelineCustomizationInfo *customizationInfo;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)toJSONDictionary;
- (id)init;

@end

#endif /* TFSTwitterLiveEventTimelineVariant_h */
