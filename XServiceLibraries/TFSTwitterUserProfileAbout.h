//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterUserProfileAbout_h
#define TFSTwitterUserProfileAbout_h
@import Foundation;

@class NSDate, NSObject, NSString;

@interface TFSTwitterUserProfileAbout : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 sourceDetails;
}

@property (nonatomic, readonly) NSString *accountBasedInCountry;
@property (nonatomic, readonly) NSString *createdCountry;
@property (nonatomic, readonly) _Bool createdCountryAccurate;
@property (nonatomic, readonly) NSString *connectedViaCountry;
@property (nonatomic, readonly) long long usernameChangesCount;
@property (nonatomic, readonly) NSDate *usernameLastChangedDate;
@property (nonatomic, readonly) NSString *affiliateUrl;
@property (nonatomic, readonly) NSString *learnMoreUrl;
@property (nonatomic, readonly) NSString *affiliateUsername;
@property (nonatomic, readonly) _Bool isLocationAccurate;
@property (nonatomic, readonly) NSString *reportProblemUrl;
@property (nonatomic, readonly) NSDate *verifiedSinceDate;
@property (nonatomic, readonly) _Bool identityVerified;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterUserProfileAbout_h */
