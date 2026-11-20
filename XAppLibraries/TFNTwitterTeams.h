//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterTeams_h
#define TFNTwitterTeams_h
@import Foundation;

@class NSObject, NSString;

@interface TFNTwitterTeams : NSObject

@property (readonly, nonatomic) long long teamsPrivilege;
@property (readonly, nonatomic) NSString *contributorAccountID;
@property (readonly, nonatomic) long long contributorUserID;

/* instance methods */
- (id)initWithContributorAccountID:(id)id userID:(long long)id privilege:(long long)privilege;
- (id)initWithUserDefaultsDictionary:(id)dictionary;
- (void)updateUserDefaultsDictionary:(id)dictionary;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFNTwitterTeams_h */
