//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainColdInboxSuggestionRepo_Protocol_h
#define Subsystem_ios_iosArm64_mainColdInboxSuggestionRepo_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainColdInboxSuggestionRepo

@required

/* required instance methods */
- (void)dismissUserId:(id)id;
- (void)dismissUserId:(id)id;
- (id)observeOpenedFromSuggestionConversationId:(id)id;
- (id)observeOpenedFromSuggestionConversationId:(id)id;
- (void)onContactsSyncResultResult:(id)result;
- (void)onContactsSyncResultResult:(id)result;
- (void)onFindFriendsDismissTapped;
- (_Bool)onFindFriendsSyncTapped;
- (void)onInviteFriendsDismissTapped;
- (void)onInviteFriendsShareResultResult:(id)result;
- (void)onInviteFriendsShareResultResult:(id)result;
- (id)onInviteFriendsShareTapped;
- (void)onInviteLinkOpenedInviterId:(id)id;
- (void)onInviteLinkOpenedInviterId:(id)id;
- (void)onSuggestionChatOpenedSuggestion:(id)suggestion;
- (void)onSuggestionChatOpenedSuggestion:(id)suggestion;
- (void)onSuggestionInviteTappedSuggestion:(id)suggestion;
- (void)onSuggestionInviteTappedSuggestion:(id)suggestion;
- (void)scribeAvatarClickedSuggestion:(id)suggestion;
- (void)scribeAvatarClickedSuggestion:(id)suggestion;
- (void)scribeDismissClickedSuggestion:(id)suggestion;
- (void)scribeDismissClickedSuggestion:(id)suggestion;
- (void)scribeFindFriendsShown;
- (void)scribeInviteFriendsShown;
- (void)scribeProfileClickedSuggestion:(id)suggestion;
- (void)scribeProfileClickedSuggestion:(id)suggestion;
- (void)scribeSuggestionsShownCount:(int)count;
- (void)scribeSuggestionsShownCount:(int)count;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainColdInboxSuggestionRepo_Protocol_h */
