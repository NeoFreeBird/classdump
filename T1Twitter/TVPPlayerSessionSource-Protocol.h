//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TVPPlayerSessionSource_Protocol_h
#define TVPPlayerSessionSource_Protocol_h
@import Foundation;

#include "TFCCardDataSource-Protocol.h"
#include "TFSTwitterPromotedLoggable-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"
#include "_TtP7TAPUser18TAPUserPerspective_-Protocol.h"

@class NSDictionary, NSNumber, NSString, TAVAnalyticsMediaIdentifier, TFSTwitterDynamicVideoAd, TFSTwitterMediaInfo, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@protocol TVPPlayerSessionSource <TFSTwitterCore.TFSTwitterScribableItem>

@required

@property (nonatomic, readonly) NSString *mediaPlaylistUrl;
@property (nonatomic, readonly) TFSTwitterMediaInfo *primaryMediaInfo;
@property (nonatomic, readonly) _Bool isMediaEntityVideo;
@property (nonatomic, readonly) _Bool isGIF;
@property (nonatomic, readonly) _Bool isAdsVideoCard;
@property (nonatomic, readonly) _Bool isPeriscope;
@property (nonatomic, readonly) _Bool isAmplifyCardVideo;
@property (nonatomic, readonly) _Bool isLiveEvent;
@property (nonatomic, readonly) _Bool isBroadcast;
@property (nonatomic, readonly) _Bool isPlayable;
@property (nonatomic, readonly) _Bool isYouTubeCard;
@property (nonatomic, readonly) _Bool isVoice;
@property (nonatomic, readonly) _Bool isAudioArticle;
@property (nonatomic, readonly) _Bool hasSoftIntervention;
@property (nonatomic, readonly) _Bool hasSensitiveMediaWarningsFlaggedByAuthor;
@property (nonatomic, readonly) _Bool hasImageInterstitial;
@property (nonatomic, readonly) NSDictionary *scribeParameters;
@property (nonatomic, readonly) NSNumber *mediaScribePublisherID;
@property (nonatomic, readonly) NSString *mediaScribeContentID;
@property (nonatomic, readonly) id <TFCCardDataSource> cardDataSource;
@property (nonatomic, readonly) _Bool allowDynamicAd;
@property (nonatomic, readonly) NSNumber *playerStatusID;
@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) TFSTwitterDynamicVideoAd *prerollContent;
@property (nonatomic, readonly) NSString *fromUserFullName;
@property (nonatomic, readonly) NSString *fromUserName;
@property (nonatomic, readonly) id <TAPUser.TAPUserPerspective> fromUser;
@property (nonatomic, readonly) id <TFSTwitterPromotedLoggable> logInput;
@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) TAVAnalyticsMediaIdentifier *contentMediaIdentifier;
@property (nonatomic, readonly) long long statusID;
@property (nonatomic, readonly) NSString *grokPostID;

@optional

@end

#endif /* TVPPlayerSessionSource_Protocol_h */
