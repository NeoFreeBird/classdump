//
#ifndef _TtC14TFSTwitterCore25TFSTwitterPromotedContent_h
#define _TtC14TFSTwitterCore25TFSTwitterPromotedContent_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterPromotedAdMetadataContainer.h"
#include "TFSTwitterPromotedClickTrackingInfo.h"
#include "TFSTwitterPromotedEventMetadata-Protocol.h"
#include "_TtC14TFSTwitterCore29TFSTwitterPromotedSSPMetadata.h"

@class NSArray, NSObject, NSString, Swift.Bool, TFSTwitterCore.TFSTwitterPromotedSSPMetadata ?, _$sSSSg, _$sSa -> TFSTwitterCore.TFSTwitterUserReference ?, _$sSaySSG, _$sSo35TFSTwitterPromotedClickTrackingInfoCSg, _$sSo37TFSTwitterPromotedAdMetadataContainerCSg, __C.TFSTwitterPromotedContentSocialContextType;

@interface TFSTwitterCore.TFSTwitterPromotedContent : NSObject <NSCoding, TFSTwitterPromotedEventMetadata, NSCopying> // (Swift)

@property (nonatomic, readonly) NSString *impressionID;
@property (nonatomic, readonly) NSString *disclosureType;
@property (nonatomic, readonly) NSArray *socialContextUserReferences;
@property (nonatomic, readonly) long long socialContextType;
@property (nonatomic, readonly) NSString *advertiserName;
@property (nonatomic, readonly) NSString *advertiserUsername;
@property (nonatomic, readonly) NSString *advertiserID;
@property (nonatomic, readonly) NSString *promotedTrendName;
@property (nonatomic, readonly) NSString *promotedTrendQueryTerm;
@property (nonatomic, readonly) TFSTwitterPromotedAdMetadataContainer *adMetadataContainer;
@property (nonatomic, readonly) TFSTwitterPromotedClickTrackingInfo *clickTrackingInfo;
@property (nonatomic, readonly) NSString *rtbCreativeID;
@property (nonatomic, readonly) NSString *adsBudgetAwareExperimentID;
@property (nonatomic, readonly) NSArray *dedupeIds;
@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedSSPMetadata *sspMetadata;
@property (nonatomic, readonly) long long unifiedDisclosureType;
@property (nonatomic, readonly) _Bool isIssueAd;
@property (nonatomic, readonly) _Bool isPoliticalAd;
@property (nonatomic, readonly) _Bool isEarned;
@property (nonatomic, readonly) _Bool isPromoted;
@property (nonatomic, readonly) _Bool isPromotedTrend;
@property (nonatomic, readonly) _Bool isRTBCreative;
@property (nonatomic, readonly) _Bool isPromotedAccountInTimeline;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)promotedContentWithImpressionID:(id)id disclosureType:(long long)type;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithJSONDictionary:(id)jsondictionary users:(id)users;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore25TFSTwitterPromotedContent_h */
