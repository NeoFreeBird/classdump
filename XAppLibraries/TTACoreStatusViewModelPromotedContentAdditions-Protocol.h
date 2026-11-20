//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTACoreStatusViewModelPromotedContentAdditions_Protocol_h
#define TTACoreStatusViewModelPromotedContentAdditions_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@protocol TTACoreStatusViewModelPromotedContentAdditions <NSObject>

@required

@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) _Bool displayAsCompactPromotedTweet;
@property (nonatomic, readonly) _Bool allowDynamicAd;
@property (nonatomic) _Bool hasRecordedImpression;
@property (nonatomic) _Bool hasRecordedDwellImpression;

@optional

@end

#endif /* TTACoreStatusViewModelPromotedContentAdditions_Protocol_h */
