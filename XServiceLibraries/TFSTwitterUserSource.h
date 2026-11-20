//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterUserSource_h
#define TFSTwitterUserSource_h
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

@interface TFSTwitterUserSource : NSObject <TFSTwitterCanonicalUser> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 twitterUser;
    B24@0:8@"NSString"16 modelContext;
    B24@0:8@"NSString"16 observer;
}

@property (nonatomic, readonly) id updateEventDispatcher;
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
@property (nonatomic, readonly) _Bool isProfileBioTranslatable;
@property (nonatomic, readonly) NSNumber *isProfileBioTranslatableNumber;
@property (nonatomic, readonly) TFSTwitterGrokTranslation *grokTranslatedBio;
@property (nonatomic, readonly) _Bool superFollowPlatformAvailability;
@property (nonatomic, readonly) _Bool superFollowEligible;
@property (nonatomic, readonly) _Bool superFollowedBy;
@property (nonatomic, readonly) _Bool superFollowing;
@property (nonatomic, readonly) _Bool privateSuperFollowing;
@property (nonatomic, readonly) TFSTwitterProfessional *professional;
@property (nonatomic, readonly) NSNumber *affiliatesCount;
@property (nonatomic, readonly) NSNumber *highlightedTweetsCount;
@property (nonatomic, readonly) _Bool canHighlightTweets;
@property (nonatomic, readonly) NSNumber *creatorSubscriptionsCount;
@property (nonatomic, readonly) NSDate *updatedTimestamp;
@property (nonatomic, readonly) _Bool hasHiddenLikesOnProfile;
@property (nonatomic, readonly) _Bool hasGraduatedAccess;
@property (nonatomic, readonly) NSNumber *hasGraduatedAccessNumber;
@property (nonatomic, readonly) long long graduatedAccessType;
@property (nonatomic, readonly) _Bool hasParodyProfileLabel;
@property (nonatomic, readonly) NSNumber *hasParodyProfileLabelNumber;
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
@property (nonatomic, readonly) TFSTwitterUserAssimilatable *assimilatable;

/* instance methods */
- (id)initWithUserID:(long long)id username:(id)username fullName:(id)name profileImageMediaEntity:(id)entity verified:(_Bool)verified isBlueVerified:(id)verified identityType:(long long)type protected:(_Bool)_protected url:(id)url urlEntities:(id)entities numberOfFollowing:(id)following numberOfFollowers:(id)followers statusesCountNumber:(id)number mediaCountNumber:(id)number favoritesCountNumber:(id)number pinnedTweetIDNumber:(id)idnumber createdDate:(id)date translatorType:(id)type profileInterstitialType:(id)type profileLinkColorHexTriplet:(id)triplet profileBannerMediaEntity:(id)entity bio:(id)bio bioEntities:(id)entities bioLanguage:(id)language location:(id)location withheldBio:(id)bio withheldBioEntities:(id)entities withheldInCountries:(id)countries withheldScope:(id)scope hasStructuredLocation:(_Bool)location structuredLocation:(id)location usernameless:(id)usernameless hasExtendedProfileBirthday:(id)birthday profileImageShape:(long long)shape extendedProfile:(id)profile highlightedDesignatorInfo:(id)info relationship:(id)relationship isProfileBioTranslatable:(id)translatable grokTranslatedBio:(id)bio professional:(id)professional hasGraduatedAccess:(id)access affiliatesCount:(id)count highlightedTweetsCount:(id)count canHighlightTweets:(id)tweets creatorSubscriptionsCount:(id)count hasHiddenLikesOnProfile:(id)profile lastUpdated:(id)updated hasParodyProfileLabel:(id)label parodyCommentaryFanLabel:(id)label emailSharingFromSubscribersEnabled:(id)enabled hasHiddenSubscriptionsOnProfile:(id)profile userSeedTweetCount:(id)count canReceiveGift:(id)gift canPay:(id)pay verificationInfo:(id)info;
- (id)initWithUser:(id)user;
- (void)setModelContext:(id)context cs2Transaction:(id)transaction;
- (_Bool)shouldAssimilateWithTwitterUserSource:(id)source;
- (id)assimilateTwitterUserSource:(id)source;
- (id)init;

@end

#endif /* TFSTwitterUserSource_h */
