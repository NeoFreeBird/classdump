//
#ifndef T1StandardSpaceCanonicalUserPlaceholder_h
#define T1StandardSpaceCanonicalUserPlaceholder_h
@import Foundation;

#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSArray, NSDate, NSNumber, NSObject, NSString, TFSPCFLabel, TFSTwitterEntityMedia, TFSTwitterEntitySet, TFSTwitterGrokTranslation, TFSTwitterPlace, TFSTwitterProfessional, TFSTwitterRelationship, TFSTwitterUserDesignatorInfo, TFSTwitterUserExtendedProfile, TFSTwitterUserReference, TFSTwitterUserVerificationInfo, TFSURTRichText;

@interface T1StandardSpaceCanonicalUserPlaceholder : NSObject <TFSTwitterCanonicalUser> // (Swift)

@property (nonatomic) long long userID;
@property (nonatomic, retain) NSNumber *userIDNumber;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, retain) TFSTwitterUserReference *userReference;
@property (nonatomic, retain) TFSTwitterEntityMedia *profileImageMediaEntity;
@property (nonatomic) _Bool verified;
@property (nonatomic, retain) TFSTwitterRelationship *relationship;
@property (nonatomic, readonly) NSString *displayUsername;
@property (nonatomic, readonly) NSString *displayFullName;
@property (nonatomic, readonly) _Bool protectedUser;
@property (nonatomic, readonly) _Bool usernameless;
@property (nonatomic, readonly) long long profileImageState;
@property (nonatomic, readonly) NSNumber *isBlueVerified;
@property (nonatomic, readonly) long long identityType;
@property (nonatomic, readonly) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo;
@property (nonatomic, readonly) _Bool hasAccountLabel;
@property (nonatomic, readonly) NSString *designatorString;
@property (nonatomic, readonly) TFSURTRichText *designatorLongDescription;
@property (nonatomic, readonly) NSString *designatorImageUrl;
@property (nonatomic, readonly) NSString *designatorUrl;
@property (nonatomic, readonly) long long designatorIconType;
@property (nonatomic, readonly) long long designatorLabelType;
@property (nonatomic, readonly) NSString *bio;
@property (nonatomic, readonly) TFSTwitterEntitySet *bioEntities;
@property (nonatomic, readonly) NSString *bioLanguage;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) TFSTwitterEntitySet *urlEntities;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) _Bool hasStructuredLocation;
@property (nonatomic, readonly) TFSTwitterPlace *structuredLocation;
@property (nonatomic, readonly) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property (nonatomic, readonly) long long profileInterstitialType;
@property (nonatomic, readonly) unsigned int profileLinkColorHexTriplet;
@property (nonatomic) _Bool hasBannerImageURL;
@property (nonatomic) long long numberOfFollowing;
@property (nonatomic) long long numberOfFollowers;
@property (nonatomic, readonly) NSNumber *statusesCountNumber;
@property (nonatomic, readonly) NSNumber *mediaCountNumber;
@property (nonatomic, readonly) NSNumber *favoritesCountNumber;
@property (nonatomic, readonly) NSNumber *pinnedTweetIDNumber;
@property (nonatomic, readonly) NSDate *createdDate;
@property (nonatomic, readonly) long long translatorType;
@property (nonatomic, readonly) NSArray *withheldInCountries;
@property (nonatomic, readonly) NSString *withheldBio;
@property (nonatomic, readonly) TFSTwitterEntitySet *withheldBioEntities;
@property (nonatomic, readonly) NSString *withheldScope;
@property (nonatomic, readonly) TFSTwitterUserExtendedProfile *extendedProfile;
@property (nonatomic) _Bool hasExtendedProfileBirthday;
@property (nonatomic, readonly) long long profileImageShape;
@property (nonatomic, readonly) NSNumber *affiliatesCount;
@property (nonatomic, readonly) NSNumber *highlightedTweetsCount;
@property (nonatomic, readonly) _Bool canHighlightTweets;
@property (nonatomic, readonly) _Bool hasGraduatedAccess;
@property (nonatomic, readonly) long long graduatedAccessType;
@property (nonatomic, readonly) _Bool hasFreshRelationship;
@property (nonatomic, readonly) _Bool hasFreshFullRelationship;
@property (nonatomic, readonly) _Bool isProfileBioTranslatable;
@property (nonatomic, readonly) NSNumber *isProfileBioTranslatableNumber;
@property (nonatomic, readonly) TFSTwitterGrokTranslation *grokTranslatedBio;
@property (nonatomic, readonly) TFSTwitterProfessional *professional;
@property (nonatomic, readonly) NSNumber *creatorSubscriptionsCount;
@property (nonatomic, readonly) _Bool hasHiddenLikesOnProfile;
@property (nonatomic, readonly) _Bool hasParodyProfileLabel;
@property (nonatomic, readonly) TFSPCFLabel *parodyCommentaryFanLabel;
@property (nonatomic, readonly) _Bool emailSharingFromSubscribersEnabled;
@property (nonatomic, readonly) _Bool hasHiddenSubscriptionsOnProfile;
@property (nonatomic, readonly) NSNumber *userSeedTweetCount;
@property (nonatomic, readonly) _Bool canReceiveGift;
@property (nonatomic, readonly) _Bool canPay;
@property (nonatomic, readonly) TFSTwitterUserVerificationInfo *verificationInfo;

/* instance methods */
- (id)initWithGuestRoomUser:(id)user;
- (id)init;

@end

#endif /* T1StandardSpaceCanonicalUserPlaceholder_h */
