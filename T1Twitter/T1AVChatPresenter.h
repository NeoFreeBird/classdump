//
#ifndef T1AVChatPresenter_h
#define T1AVChatPresenter_h
@import Foundation;

@class NSObject;

@interface T1AVChatPresenter : NSObject // (Swift)

/* class methods */
+ (void)prepareAVChat;
+ (void)startAppCallServices;
+ (void)joinCallWithCallID:(id)id accountID:(id)id userID:(long long)id;
+ (_Bool)turnOnVideoForLiveCallWithHandleValue:(id)value;
+ (void)endCallsWithAccountID:(id)id completion:(id /* block */)completion;
+ (void)startCallScheduleSessionWithAccount:(id)account;
+ (void)endCallScheduleSessionWithAccountID:(id)id;
+ (id)usernameForIntentHandleValue:(id)value;
+ (_Bool)handleXNumberCallIntentWithHandleValue:(id)value isAudioOnly:(_Bool)only account:(id)account fromViewController:(id)controller;
+ (void)handleAVChatFromCallIntentWithAccount:(id)account conversationID:(id)id isAudioOnly:(_Bool)only startsOnSpeaker:(_Bool)speaker origin:(long long)origin fromViewController:(id)controller;
+ (void)handleGroupCallFromCallIntentWithAccount:(id)account conversationID:(id)id isAudioOnly:(_Bool)only;
+ (_Bool)isBlockingConcurrentActivities;
+ (_Bool)presentErrorToastForConcurrentActivitiesIfNeeded;
+ (void)joinConferenceCallWithAccount:(id)account conferenceKey:(id)key conversationID:(id)id fromViewController:(id)controller;
+ (void)joinGroupCallWithAccount:(id)account conversationID:(id)id broadcastID:(id)id fromViewController:(id)controller;

/* instance methods */
- (id)init;

@end

#endif /* T1AVChatPresenter_h */
