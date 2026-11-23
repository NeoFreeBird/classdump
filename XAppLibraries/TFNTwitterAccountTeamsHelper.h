//
#ifndef TFNTwitterAccountTeamsHelper_h
#define TFNTwitterAccountTeamsHelper_h
@import Foundation;

@class NSObject;

@interface TFNTwitterAccountTeamsHelper : NSObject // (Swift)

/* class methods */
+ (_Bool)isOwnerForPrivilege:(long long)privilege;
+ (_Bool)isContributorForPrivilege:(long long)privilege;
+ (_Bool)isAdministratorForPrivilege:(long long)privilege;
+ (_Bool)canManageTeamForPrivilege:(long long)privilege;
+ (_Bool)canQuitTeamForPrivilege:(long long)privilege;
+ (_Bool)isProfileAccessibleForPrivilege:(long long)privilege;
+ (_Bool)isAccountSettingsAccessibleForPrivilege:(long long)privilege;
+ (id)headerStringForDelegationGroupsWithUserID:(long long)id;
+ (id)headerContributorVersionForDelegationGroups;

/* instance methods */
- (id)init;

@end

#endif /* TFNTwitterAccountTeamsHelper_h */
