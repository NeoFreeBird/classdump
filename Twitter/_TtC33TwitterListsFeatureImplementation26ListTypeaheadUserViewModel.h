//
#ifndef _TtC33TwitterListsFeatureImplementation26ListTypeaheadUserViewModel_h
#define _TtC33TwitterListsFeatureImplementation26ListTypeaheadUserViewModel_h
@import Foundation;

#include "T1TwitterSocialContext-Protocol.h"
#include "T1UserViewModel-Protocol.h"

@class NSDictionary, NSObject, NSString, TFSPCFLabel, TFSTwitterEntityMedia, TFSTwitterGrokTranslation, TFSTwitterRelationship, TFSTwitterUserReference, TFSURTRichText, TUITwitterUserContext, _$s12TwitterLists26ListTypeaheadCanonicalUserCMn, _$s14TFSTwitterCore20TwitterTypeaheadUserCMn, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;
@protocol TFSTwitterCanonicalUser;

@interface TwitterListsFeatureImplementation.ListTypeaheadUserViewModel : NSObject <T1UserViewModel> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSTwitterCore.TwitterTypeaheadUser typeaheadUser;
    nominal type descriptor for TwitterLists.ListTypeaheadCanonicalUser listTypeaheadCanonicalUser;
}

@property (nonatomic, readonly) id <TFSTwitterCanonicalUser> canonicalUser;
@property (nonatomic, readonly) TFSTwitterUserReference *userReference;
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
@property (nonatomic, readonly) unsigned int profileLinkColorHexTriplet;
@property (nonatomic, readonly) TFSTwitterRelationship *relationship;
@property (nonatomic, readonly) TFSTwitterEntityMedia *profileImageMediaEntity;
@property (nonatomic, readonly) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property (nonatomic, readonly) _Bool hasParodyProfileLabel;
@property (nonatomic, readonly) TFSPCFLabel *parodyCommentaryFanLabel;
@property (nonatomic, readonly) _Bool promoted;
@property (nonatomic, readonly) NSString *displayFullName;
@property (nonatomic, readonly) NSString *displayUsername;
@property (nonatomic, readonly) NSString *bioDisplayText;
@property (nonatomic, readonly) TFSTwitterGrokTranslation *autoTranslatedBio;
@property (nonatomic, readonly) TUITwitterUserContext *context;
@property (nonatomic, readonly) _Bool showSocialBadge;
@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) id <T1TwitterSocialContext> socialContext;
@property (nonatomic, readonly) NSString *timelineEntryID;
@property (nonatomic, readonly) long long timelineModuleItemIndex;
@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSDictionary *scribeItem;

/* instance methods */
- (_Bool)isPromoted;
- (id)init;

@end

#endif /* _TtC33TwitterListsFeatureImplementation26ListTypeaheadUserViewModel_h */
