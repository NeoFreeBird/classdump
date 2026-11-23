//
#ifndef _TtC13ChatUtilities27LocalizedStringProviderImpl_h
#define _TtC13ChatUtilities27LocalizedStringProviderImpl_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainLocalizedStringProvider-Protocol.h"

@class _TtCs12_SwiftObject;

@interface ChatUtilities.LocalizedStringProviderImpl : Swift._SwiftObject <Subsystem_ios_iosArm64_mainLocalizedStringProvider> // (Swift)

/* instance methods */
- (id)defaultGroupTitleFiveOrMoreMembersFirstDisplayName:(id)name secondDisplayName:(id)name remainingGroupMembersCount:(int)count;
- (id)defaultGroupTitleFourMembersFirstDisplayName:(id)name secondDisplayName:(id)name thirdDisplayName:(id)name fourthDisplayName:(id)name;
- (id)defaultGroupTitleThreeMembersFirstDisplayName:(id)name secondDisplayName:(id)name thirdDisplayName:(id)name;
- (id)defaultGroupTitleTwoMembersFirstDisplayName:(id)name secondDisplayName:(id)name;
- (id)defaultUserDisplayName;
- (id)groupInviteWelcomeMessageInvitingUserDisplayName:(id)name groupTitle:(id)title;
- (id)shortGroupTitleGroupMembersCount:(int)count;
- (id)subscriberChatGroupTitleCreatorDisplayName:(id)name;

@end

#endif /* _TtC13ChatUtilities27LocalizedStringProviderImpl_h */
