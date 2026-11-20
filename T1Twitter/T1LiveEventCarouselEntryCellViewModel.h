//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventCarouselEntryCellViewModel_h
#define T1LiveEventCarouselEntryCellViewModel_h
@import Foundation;

#include "T1LiveEventCarouselEntry.h"
#include "TFSTwitterCanonicalUser-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSNumber, NSObject, NSString, TFNTwitterMediaImagePipeline, TFSTwitterEntityImageInfo, TFSTwitterRects, TFSTwitterUserDesignatorInfo, UIColor;

@interface T1LiveEventCarouselEntryCellViewModel : NSObject <TFSTwitterCore.TFSTwitterScribableItem>

@property (readonly, nonatomic) T1LiveEventCarouselEntry *carouselEntry;
@property (readonly, nonatomic) TFSTwitterEntityImageInfo *thumbnailImageInfo;
@property (readonly, nonatomic) UIColor *imageViewPlaceholderColor;
@property (readonly, nonatomic) TFSTwitterRects *focusRects;
@property (readonly, nonatomic) TFNTwitterMediaImagePipeline *imagePipeline;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> imageUser;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, nonatomic) _Bool usernameHidden;
@property (readonly, nonatomic) _Bool verified;
@property (readonly, nonatomic) _Bool blueVerified;
@property (readonly, nonatomic) long long identityType;
@property (readonly, nonatomic) _Bool protectedUser;
@property (readonly, nonatomic) _Bool usernameless;
@property (readonly, nonatomic) long long translatorType;
@property (readonly, nonatomic) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo;
@property (readonly, nonatomic) NSNumber *count;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSString *contentTypeText;
@property (readonly, nonatomic) NSNumber *isBroadcastLive;
@property (readonly, nonatomic) _Bool isGIF;
@property (readonly, nonatomic) _Bool displaysNowPlaying;
@property (readonly, nonatomic) _Bool socialProofViewHidden;
@property (readonly, nonatomic) UIColor *badgeViewBackgroundColor;
@property (readonly, nonatomic) UIColor *badgeViewTitleColor;
@property (readonly, nonatomic) _Bool badgeViewHidden;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; } badgeViewCornerRadius;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; } socialProofViewCornerRadius;
@property (readonly, nonatomic) NSString *accessibilityTextLabel;
@property (readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (nonatomic) unsigned long long isDuplicateContentIDInstance;
@property (nonatomic) unsigned long long isCurrentlyFirstImpression;
@property (readonly, copy, nonatomic) NSString *scribeItemFirstImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemContentID;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (readonly, copy, nonatomic) NSString *scribeItemDebugDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)viewModelWithCarouselEntry:(id)entry;

/* instance methods */
- (id)init;
- (id)initWithCarouselEntryMoment:(id)moment;
- (id)initWithCarouselEntrySlate:(id)slate;
- (id)initWithCarouselEntryVideo:(id)video;
- (id)initWithCarouselEntryBroadcast:(id)broadcast;
- (id)initWithCarouselEntryAudiospace:(id)audiospace;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToViewModel:(id)model;
- (_Bool)isUsernameHidden;
- (id)_t1_darkBackgroundColor;
- (id)_t1_badgeFont;
- (id)_t1_viewersFont;
- (void)_t1_setupAppropriateCornerRadius;
- (id)_t1_canonicalURLStringForThumbnailURLString:(id)urlstring;
- (id)_t1_accessibilitySocialProofStringWithType:(long long)type;
- (_Bool)isVerified;
- (_Bool)isBlueVerified;
- (_Bool)isProtectedUser;
- (_Bool)isUsernameless;
- (_Bool)isSocialProofViewHidden;
- (_Bool)isBadgeViewHidden;

@end

#endif /* T1LiveEventCarouselEntryCellViewModel_h */
