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
