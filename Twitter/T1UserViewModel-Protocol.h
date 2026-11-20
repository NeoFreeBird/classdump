//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserViewModel_Protocol_h
#define T1UserViewModel_Protocol_h
@import Foundation;

#include "T1TwitterSocialContext-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSString, TFSPCFLabel, TFSTwitterEntityMedia, TFSTwitterGrokTranslation, TFSTwitterRelationship, TFSTwitterUserReference, TFSURTRichText, TUITwitterUserContext, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;
@protocol TFSTwitterCanonicalUser;

@protocol T1UserViewModel <TFSTwitterCore.TFSTwitterScribableItem>

@required

@property (nonatomic, readonly) TFSTwitterUserReference *userReference;
@property (nonatomic, readonly) id <TFSTwitterCanonicalUser> canonicalUser;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *designatorString;
@property (nonatomic, readonly) TFSURTRichText *designatorLongDescription;
@property (nonatomic, readonly) NSString *designatorImageUrl;
@property (nonatomic, readonly) long long designatorIconType;
@property (nonatomic, readonly) long long designatorLabelType;
@property (nonatomic, readonly) NSString *designatorUrl;
@property (nonatomic, readonly) _Bool verified;
@property (nonatomic, readonly) _Bool isBlueVerified;
@property (nonatomic, readonly) long long identityType;
@property (nonatomic, readonly) _Bool protectedUser;
@property (nonatomic, readonly) _Bool usernameless;
@property (nonatomic, readonly) _Bool hasAccountLabel;
@property (nonatomic, readonly) unsigned long long bioDisplayType;
@property (nonatomic, readonly) _Bool hasParodyProfileLabel;
@property (nonatomic, readonly) TFSPCFLabel *parodyCommentaryFanLabel;
@property (nonatomic, readonly) unsigned int profileLinkColorHexTriplet;
@property (nonatomic, readonly) TFSTwitterRelationship *relationship;
@property (nonatomic, readonly) TFSTwitterEntityMedia *profileImageMediaEntity;
@property (nonatomic, readonly) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property (nonatomic, readonly) _Bool promoted;
@property (nonatomic, readonly) _Bool promoted;
@property (nonatomic, readonly) NSString *displayFullName;
@property (nonatomic, readonly) NSString *displayUsername;
@property (nonatomic, readonly) TFSTwitterGrokTranslation *autoTranslatedBio;
@property (nonatomic, readonly) NSString *bioDisplayText;
@property (nonatomic, readonly) TUITwitterUserContext *context;
@property (nonatomic, readonly) _Bool showSocialBadge;
@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) id <T1TwitterSocialContext> socialContext;
@property (nonatomic, readonly) NSString *timelineEntryID;
@property (nonatomic, readonly) long long timelineModuleItemIndex;

/* required instance methods */
- (_Bool)isPromoted;
- (_Bool)isPromoted;

@optional

@end

#endif /* T1UserViewModel_Protocol_h */
