//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsMutablePlaylistItemMetadata_h
#define TAVAnalyticsMutablePlaylistItemMetadata_h
@import Foundation;

#include "TAVAnalyticsPlaylistItemMetadata.h"
#include "TAVAnalyticsPromotedMetadata.h"
#include "TVDIAnalyticsOwnerIdentifier.h"

@class NSNumber, NSString, NSURL;

@interface TAVAnalyticsMutablePlaylistItemMetadata : TAVAnalyticsPlaylistItemMetadata

@property (nonatomic) _Bool isAd;
@property (retain, nonatomic) TVDIAnalyticsOwnerIdentifier *ownerID;
@property (copy, nonatomic) NSString *videoID;
@property (nonatomic) int videoType;
@property (copy, nonatomic) NSString *scribeElement;
@property (copy, nonatomic) TAVAnalyticsPromotedMetadata *promotedContent;
@property (copy, nonatomic) NSURL *mediaURL;
@property (nonatomic) long long statusID;
@property (copy, nonatomic) NSString *grokPostID;
@property (copy, nonatomic) NSNumber *mediaTimecodeMillis;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TAVAnalyticsMutablePlaylistItemMetadata_h */
