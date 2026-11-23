//
#ifndef TFSTwitterUser_h
#define TFSTwitterUser_h
@import Foundation;

#include "TFSPCFLabel.h"
#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TFSTwitterEntityMedia.h"
#include "TFSTwitterEntitySet.h"
#include "TFSTwitterGrokTranslation.h"
#include "TFSTwitterPlace.h"
#include "TFSTwitterProfessional.h"
#include "TFSTwitterRelationship.h"
#include "TFSTwitterUserAssimilatable.h"
#include "TFSTwitterUserDesignatorInfo.h"
#include "TFSTwitterUserExtendedProfile.h"
#include "TFSTwitterUserReference.h"
#include "TFSTwitterUserVerificationInfo.h"
#include "TFSURTRichText.h"

@class NSArray, NSDate, NSNumber, NSObject, NSString;

@interface TFSTwitterUser : NSObject <TFSTwitterCanonicalUser> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 twitterUser;
}

@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) _Bool verified;
@property (nonatomic, readonly) NSNumber *isBlueVerified;
@property (nonatomic, readonly) long long identityType;
@property (nonatomic, readonly) _Bool protectedUser;
@property (nonatomic, readonly) TFSTwitterEntityMedia *profileImageMediaEntity;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) TFSTwitterEntitySet *urlEntities;
@property (nonatomic, readonly) long long numberOfFollowing;
@property (nonatomic, readonly) NSNumber *followingNumber;
@property (nonatomic, readonly) long long numberOfFollowers;
@property (nonatomic, readonly) NSNumber *followersNumber;
@property (nonatomic, readonly) NSNumber *statusesCountNumber;
@property (nonatomic, readonly) NSNumber *mediaCountNumber;
@property (nonatomic, readonly) NSNumber *favoritesCountNumber;
@property (nonatomic, readonly) NSNumber *pinnedTweetIDNumber;
@property (nonatomic, readonly) NSDate *createdDate;
@property (nonatomic, readonly) long long translatorType;
@property (nonatomic, readonly) NSNumber *translatorTypeNumber;
@property (nonatomic, readonly) long long profileInterstitialType;
@property (nonatomic, readonly) NSNumber *profileInterstitialTypeNumber;
@property (nonatomic, readonly) unsigned int profileLinkColorHexTriplet;
@property (nonatomic, readonly) NSNumber *profileLinkColorHexTripletNumber;
@property (nonatomic, readonly) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property (nonatomic, readonly) NSString *bio;
@property (nonatomic, readonly) TFSTwitterEntitySet *bioEntities;
@property (nonatomic, readonly) NSString *bioLanguage;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) NSString *withheldBio;
@property (nonatomic, readonly) TFSTwitterEntitySet *withheldBioEntities;
@property (nonatomic, readonly) NSArray *withheldInCountries;
@property (nonatomic, readonly) NSString *withheldScope;
@property (nonatomic, readonly) _Bool hasStructuredLocation;
@property (nonatomic, readonly) TFSTwitterPlace *structuredLocation;
@property (nonatomic, readonly) _Bool usernameless;
@property (nonatomic, readonly) NSNumber *usernamelessNumber;
@property (nonatomic, readonly) _Bool hasExtendedProfileBirthday;
@property (nonatomic, readonly) long long profileImageShape;
@property (nonatomic, readonly) NSNumber *hasExtendedProfileBirthdayNumber;
@property (nonatomic, readonly) TFSTwitterUserExtendedProfile *extendedProfile;
@property (nonatomic, readonly) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo;
@property (nonatomic, readonly) TFSTwitterRelationship *relationship;
@property (nonatomic, readonly) NSDate *updatedTimestamp;
@property (nonatomic, readonly) _Bool isProfileBioTranslatable;
@property (nonatomic, readonly) NSNumber *isProfileBioTranslatableNumber;
@property (nonatomic, readonly) TFSTwitterGrokTranslation *grokTranslatedBio;
@property (nonatomic, readonly) TFSTwitterProfessional *professional;
@property (nonatomic, readonly) _Bool hasGraduatedAccess;
@property (nonatomic, readonly) long long graduatedAccessType;
@property (nonatomic, readonly) NSNumber *affiliatesCount;
@property (nonatomic, readonly) NSNumber *highlightedTweetsCount;
@property (nonatomic, readonly) _Bool canHighlightTweets;
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
@property (nonatomic, readonly) NSNumber *userIDNumber;
@property (nonatomic, readonly) TFSTwitterUserReference *userReference;
@property (nonatomic, readonly) NSString *displayUsername;
@property (nonatomic, readonly) NSString *displayFullName;
@property (nonatomic, readonly) long long profileImageState;
@property (nonatomic, readonly) _Bool hasAccountLabel;
@property (nonatomic, readonly) NSString *designatorString;
@property (nonatomic, readonly) TFSURTRichText *designatorLongDescription;
@property (nonatomic, readonly) NSString *designatorImageUrl;
@property (nonatomic, readonly) NSString *designatorUrl;
@property (nonatomic, readonly) long long designatorIconType;
@property (nonatomic, readonly) long long designatorLabelType;
@property (nonatomic, readonly) _Bool hasBannerImageURL;
@property (nonatomic, readonly) _Bool hasFreshRelationship;
@property (nonatomic, readonly) _Bool hasFreshFullRelationship;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) TFSTwitterUserAssimilatable *assimilatable;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterUser_h */
