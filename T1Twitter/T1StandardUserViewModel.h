//
#ifndef T1StandardUserViewModel_h
#define T1StandardUserViewModel_h
@import Foundation;

#include "T1TwitterSocialContext-Protocol.h"
#include "T1UserViewModel-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSArray, NSAttributedString, NSDictionary, NSObject, NSString, TFNTwitterUser, TFSPCFLabel, TFSTwitterEntityMedia, TFSTwitterGrokTranslation, TFSTwitterRelationship, TFSTwitterUserReference, TFSURTRichText, TFSURTUrl, TUITwitterUserContext, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface T1StandardUserViewModel : NSObject <T1TwitterSocialContext, T1UserViewModel>

@property (retain, nonatomic) TFNTwitterUser *user;
@property (readonly, copy, nonatomic) NSString *activityTitle;
@property (readonly, copy, nonatomic) NSString *socialContextScribeElement;
@property (readonly, copy, nonatomic) NSString *socialContextScribePage;
@property (readonly, copy, nonatomic) NSAttributedString *bannerText;
@property (readonly, copy, nonatomic) NSAttributedString *linkText;
@property (readonly, copy, nonatomic) NSString *socialBadgeName;
@property (readonly, copy, nonatomic) NSArray *allUserReferences;
@property (readonly, copy, nonatomic) TFSURTUrl *landingURL;
@property (readonly, nonatomic) TFSTwitterUserReference *userReference;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> canonicalUser;
@property (readonly, nonatomic) long long userID;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSString *designatorString;
@property (readonly, copy, nonatomic) TFSURTRichText *designatorLongDescription;
@property (readonly, copy, nonatomic) NSString *designatorImageUrl;
@property (readonly, nonatomic) long long designatorIconType;
@property (readonly, nonatomic) long long designatorLabelType;
@property (readonly, copy, nonatomic) NSString *designatorUrl;
@property (readonly, nonatomic) _Bool verified;
@property (readonly, nonatomic) _Bool isBlueVerified;
@property (readonly, nonatomic) long long identityType;
@property (readonly, nonatomic) _Bool protectedUser;
@property (readonly, nonatomic) _Bool usernameless;
@property (readonly, nonatomic) _Bool hasAccountLabel;
@property (readonly, nonatomic) unsigned long long bioDisplayType;
@property (readonly, nonatomic) _Bool hasParodyProfileLabel;
@property (readonly, nonatomic) TFSPCFLabel *parodyCommentaryFanLabel;
@property (readonly, nonatomic) unsigned int profileLinkColorHexTriplet;
@property (readonly, nonatomic) TFSTwitterRelationship *relationship;
@property (readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity;
@property (readonly, nonatomic) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property (readonly, nonatomic) _Bool promoted;
@property (readonly, nonatomic) NSString *displayFullName;
@property (readonly, nonatomic) NSString *displayUsername;
@property (readonly, nonatomic) TFSTwitterGrokTranslation *autoTranslatedBio;
@property (readonly, copy, nonatomic) NSString *bioDisplayText;
@property (readonly, nonatomic) TUITwitterUserContext *context;
@property (readonly, nonatomic) _Bool showSocialBadge;
@property (readonly, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (readonly, nonatomic) id <T1TwitterSocialContext> socialContext;
@property (readonly, nonatomic) NSString *timelineEntryID;
@property (readonly, nonatomic) long long timelineModuleItemIndex;
@property (readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (nonatomic) unsigned long long isDuplicateContentIDInstance;
@property (nonatomic) unsigned long long isCurrentlyFirstImpression;
@property (readonly, copy, nonatomic) NSString *scribeItemFirstImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemContentID;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithUser:(id)user bannerText:(id)text;
- (id)initWithUser:(id)user;
- (id)initWithCS2User:(id)user bannerText:(id)text;
- (void)dealloc;
- (_Bool)isPromoted;
- (_Bool)isEqual:(id)equal;
- (void)_userDidUpdate:(id)update;

@end

#endif /* T1StandardUserViewModel_h */
