//
#ifndef _TtP14TFSTwitterCore27TFSTwitterAccountTeamsState__Protocol_h
#define _TtP14TFSTwitterCore27TFSTwitterAccountTeamsState__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterCore.TFSTwitterAccountTeamsState <NSObject>

@required

/* required instance methods */
- (_Bool)canManageTeam;
- (_Bool)canQuitTeam;
- (_Bool)isContributor;
- (_Bool)isAdministrator;
- (_Bool)isOwner;
- (_Bool)isDelegateAccount;
- (_Bool)isProfileAccessible;
- (_Bool)isAccountSettingsAccessible;
- (_Bool)isDisabledForTeamsAccount;
- (_Bool)hasContributee;
- (id)headerStringForDelegationGroups;
- (id)headerContributorVersionForDelegationGroups;
- (unsigned long long)pendingTeamsInvitationCountForceRefresh:(_Bool)refresh;
- (void)acceptTeamsInvitationFromUserID:(long long)id;
- (void)denyTeamsInvitationFromUserID:(long long)id;

@optional

@end

#endif /* _TtP14TFSTwitterCore27TFSTwitterAccountTeamsState__Protocol_h */
