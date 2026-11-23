//
#ifndef _TtC14T1TwitterSwift20JetfuelImmersiveItem_h
#define _TtC14T1TwitterSwift20JetfuelImmersiveItem_h
@import Foundation;

#include "TFCCardDataSource-Protocol.h"
#include "TFSTwitterPromotedLoggable-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"
#include "_TtP7TAPUser18TAPUserPerspective_-Protocol.h"

@class NSDictionary, NSNumber, NSObject, NSString, Swift.Bool, TAVAnalyticsMediaIdentifier, TFSTwitterDynamicVideoAd, TFSTwitterMediaInfo, _$s10Foundation3URLVMn ?, _$sSD -> _$ss11AnyHashableVMn Any, _$sSDySSypGSg, _$sSSSg, _$sSo11TFCCardDataCSg, _$sSo16TFNTwitterStatusC, _$sSo17T1StatusViewModel_p, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface T1TwitterSwift.JetfuelImmersiveItem : NSObject <TVPPlayerSessionSource> { // (Swift)
    /* instance variables */
    __C.TFNTwitterStatus status;
    __C.T1StatusViewModel preloadedCoreStatusViewModel;
    __C.TFCCardData? cardData;
    nominal type descriptor for Foundation.URL ? promotedCTAURL;
}

@property (nonatomic, readonly) TFSTwitterMediaInfo *primaryMediaInfo;
@property (nonatomic, readonly) id <TAPUser.TAPUserPerspective> fromUser;
@property (nonatomic) unsigned long long isCurrentlyFirstImpression;
@property (nonatomic, copy) NSDictionary *scribeParameters;
@property (nonatomic, copy) NSString *scribeComponent;
@property (nonatomic, copy) NSString *scribeElement;
@property (nonatomic, copy) NSDictionary *scribeItem;
@property (nonatomic) _Bool isAdsVideoCard;
@property (nonatomic, readonly) _Bool isMediaEntityVideo;
@property (nonatomic, readonly) _Bool isGIF;
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
@property (nonatomic, readonly) id <TFCCardDataSource> cardDataSource;
@property (nonatomic, readonly) _Bool allowDynamicAd;
@property (nonatomic, readonly) TFSTwitterDynamicVideoAd *prerollContent;
@property (nonatomic, readonly) NSString *fromUserFullName;
@property (nonatomic, readonly) NSString *fromUserName;
@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSString *mediaScribeContentID;
@property (nonatomic, readonly) NSString *mediaPlaylistUrl;
@property (nonatomic, readonly) NSNumber *playerStatusID;
@property (nonatomic, readonly) NSNumber *mediaScribePublisherID;
@property (nonatomic, readonly) TAVAnalyticsMediaIdentifier *contentMediaIdentifier;
@property (nonatomic, readonly) id <TFSTwitterPromotedLoggable> logInput;
@property (nonatomic, readonly) long long statusID;

/* instance methods */
- (void)statusUpdatedWithNotification:(id)notification;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift20JetfuelImmersiveItem_h */
