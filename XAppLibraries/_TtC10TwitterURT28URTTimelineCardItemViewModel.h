//
#ifndef _TtC10TwitterURT28URTTimelineCardItemViewModel_h
#define _TtC10TwitterURT28URTTimelineCardItemViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TAVAnalyticsMediaIdentifier.h"
#include "TFCCardData.h"
#include "TFCCardDataSource-Protocol.h"
#include "TFCCardDataSourceObject-Protocol.h"
#include "TFSTwitterPromotedLoggable-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"
#include "_TtP7TAPUser18TAPUserPerspective_-Protocol.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSDictionary, NSNumber, NSObject, NSString, Swift.Bool, TAPUser0A11Perspective_pSg, TFSTwitterDynamicVideoAd, TFSTwitterMediaInfo, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV15ClientEventInfoCMn ?, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV4CardV0F11DisplayTypeOMn, _$s10TFSURTCore6URTUrlCMn ?, _$s14TFSTwitterCore0A15PromotedContentCMn ?, _$s14TFSTwitterCore16TwitterMediaInfoCMn ?, _$s14TFSTwitterCore21TwitterDynamicVideoAdCMn ?, _$sSD -> _$ss11AnyHashableVMn Any, _$sSSSg, _$sSo11TFCCardDataC, _$sSo26TFSTwitterPromotedLoggable_pSg, _$sSo8NSNumberCSg, _$ss5Int64VMn, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface TwitterURT.URTTimelineCardItemViewModel : NSObject <NSObject, TFCCardDataSource, TFCCardDataSourceObject, TVPPlayerSessionSource> { // (Swift)
    /* instance variables */
    Swift.String? text;
    __C.TFCCardData card;
    nominal type descriptor for TFSURTCore.URTUrl ? url;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.Card.CardDisplayType displayType;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo ? clientEventInfo;
    Swift.Bool isVideoPoll;
    Swift.Bool shouldLogImpression;
}

@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) id <TFCCardDataSourceObject> sourceObject;
@property (nonatomic, readonly) id <TAPTweet.TAPTweetPerspective> tweet;
@property (nonatomic, readonly) TFCCardData *cardData;
@property (nonatomic, readonly) NSNumber *sourceID;
@property (nonatomic, readonly) long long senderID;
@property (nonatomic, readonly) NSString *senderDisplayUsername;
@property (nonatomic, readonly) NSString *senderDisplayFullName;
@property (nonatomic) _Bool isPlayable;
@property (nonatomic, readonly) NSString *mediaPlaylistUrl;
@property (nonatomic, readonly) TFSTwitterMediaInfo *primaryMediaInfo;
@property (nonatomic, readonly) _Bool isMediaEntityVideo;
@property (nonatomic, readonly) _Bool isGIF;
@property (nonatomic, readonly) _Bool isAdsVideoCard;
@property (nonatomic, readonly) _Bool isPeriscope;
@property (nonatomic, readonly) _Bool isAmplifyCardVideo;
@property (nonatomic, readonly) _Bool isLiveEvent;
@property (nonatomic, readonly) _Bool isBroadcast;
@property (nonatomic, readonly) _Bool isYouTubeCard;
@property (nonatomic, readonly) _Bool isVoice;
@property (nonatomic, readonly) _Bool isAudioArticle;
@property (nonatomic, readonly) _Bool hasSoftIntervention;
@property (nonatomic, readonly) _Bool hasSensitiveMediaWarningsFlaggedByAuthor;
@property (nonatomic, readonly) _Bool hasImageInterstitial;
@property (nonatomic, readonly) NSDictionary *scribeParameters;
@property (nonatomic, readonly) NSNumber *mediaScribePublisherID;
@property (nonatomic, readonly) NSString *mediaScribeContentID;
@property (nonatomic, readonly) TAVAnalyticsMediaIdentifier *contentMediaIdentifier;
@property (nonatomic, readonly) id <TFCCardDataSource> cardDataSource;
@property (nonatomic, readonly) _Bool allowDynamicAd;
@property (nonatomic, readonly) NSNumber *playerStatusID;
@property (nonatomic, readonly) TFSTwitterDynamicVideoAd *prerollContent;
@property (nonatomic, readonly) NSString *fromUserFullName;
@property (nonatomic, readonly) NSString *fromUserName;
@property (nonatomic, readonly) id <TAPUser.TAPUserPerspective> fromUser;
@property (nonatomic, retain) id <TFSTwitterPromotedLoggable> logInput;
@property (nonatomic, readonly) NSDictionary *cardEvent;
@property (nonatomic, readonly) NSString *scribeComponent;
@property (nonatomic, readonly) NSString *scribeElement;
@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) _Bool isDismissible;

/* instance methods */
- (id)entityForURL:(id)url;
- (id)init;

@end

#endif /* _TtC10TwitterURT28URTTimelineCardItemViewModel_h */
