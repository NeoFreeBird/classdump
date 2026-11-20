//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift34JetfuelTAVVideoPlayerSessionSource_h
#define _TtC14T1TwitterSwift34JetfuelTAVVideoPlayerSessionSource_h
@import Foundation;

#include "TFCCardDataSource-Protocol.h"
#include "TFSTwitterPromotedLoggable-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"
#include "_TtP7TAPUser18TAPUserPerspective_-Protocol.h"

@class NSDictionary, NSNumber, NSObject, NSString, Swift.Bool, TAPUser0A11Perspective_pSg, TAVAnalyticsMediaIdentifier, TFSTwitterDynamicVideoAd, TFSTwitterMediaInfo, _$s14TFSTwitterCore0A15PromotedContentCMn ?, _$s14TFSTwitterCore16TwitterMediaInfoCMn ?, _$s14TFSTwitterCore21TwitterDynamicVideoAdCMn ?, _$sSD -> _$ss11AnyHashableVMn Any, _$sSDySSypGSg, _$sSSSg, _$sSo17TFCCardDataSource_pSg, _$sSo26TFSTwitterPromotedLoggable_pSg, _$sSo27TAVAnalyticsMediaIdentifierCSg, _$sSo8NSNumberCSg, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface T1TwitterSwift.JetfuelTAVVideoPlayerSessionSource : NSObject <TVPPlayerSessionSource> // (Swift)

@property (nonatomic, copy) NSString *mediaPlaylistUrl;
@property (nonatomic, retain) TFSTwitterMediaInfo *primaryMediaInfo;
@property (nonatomic) _Bool isMediaEntityVideo;
@property (nonatomic) _Bool isGIF;
@property (nonatomic) _Bool isAdsVideoCard;
@property (nonatomic) _Bool isPeriscope;
@property (nonatomic) _Bool isAmplifyCardVideo;
@property (nonatomic) _Bool isLiveEvent;
@property (nonatomic) _Bool isBroadcast;
@property (nonatomic) _Bool isPlayable;
@property (nonatomic) _Bool isYouTubeCard;
@property (nonatomic) _Bool isVoice;
@property (nonatomic) _Bool isAudioArticle;
@property (nonatomic) _Bool hasSoftIntervention;
@property (nonatomic) _Bool hasSensitiveMediaWarningsFlaggedByAuthor;
@property (nonatomic) _Bool hasImageInterstitial;
@property (nonatomic, copy) NSDictionary *scribeParameters;
@property (nonatomic, retain) NSNumber *mediaScribePublisherID;
@property (nonatomic, copy) NSString *mediaScribeContentID;
@property (nonatomic, retain) id <TFCCardDataSource> cardDataSource;
@property (nonatomic) _Bool allowDynamicAd;
@property (nonatomic, retain) NSNumber *playerStatusID;
@property (nonatomic, copy) NSDictionary *scribeItem;
@property (nonatomic, retain) TFSTwitterDynamicVideoAd *prerollContent;
@property (nonatomic, copy) NSString *fromUserFullName;
@property (nonatomic, copy) NSString *fromUserName;
@property (nonatomic, retain) id <TAPUser.TAPUserPerspective> fromUser;
@property (nonatomic, retain) id <TFSTwitterPromotedLoggable> logInput;
@property (nonatomic, retain) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, retain) TAVAnalyticsMediaIdentifier *contentMediaIdentifier;
@property (nonatomic, copy) NSString *scribeItemImpressionID;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift34JetfuelTAVVideoPlayerSessionSource_h */
