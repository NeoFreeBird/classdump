//
#ifndef Subsystem_ios_iosArm64_mainDmDebugHelper_Protocol_h
#define Subsystem_ios_iosArm64_mainDmDebugHelper_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainDmDebugHelper

@required

/* required instance methods */
- (void)clearEntriesAndMetadataTearDownAppSocketType:(id)type;
- (void)clearEntriesAndMetadataTearDownAppSocketType:(id)type;
- (void)clearEntriesAndMetadataAndKeypairsTearDownAppSocketType:(id)type;
- (void)clearEntriesAndMetadataAndKeypairsTearDownAppSocketType:(id)type;
- (void)clearUserCache;
- (void)doBackgroundFetch;
- (void)fetchMessageRequests;
- (void)fetchMoreMessageRequests;
- (void)forceClientRequiresUpdate;
- (id)forceDeferredCoroutineCrash;
- (id)forceDeferredCoroutineCrashWithThrowsAnnotationAndReturnError:(id *)error;
- (void)forceNonfatal;
- (void)forceShowPINReminderDialog;
- (void)forceShowTemporaryPasscodeDialog;
- (void)forceUserScopeCoroutineCrash;
- (void)seedFakeInboxConversations:(int)conversations messagesPerConversation:(int)conversation;
- (void)seedFakeInboxConversations:(int)conversations messagesPerConversation:(int)conversation;
- (void)sendBogusMessage;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainDmDebugHelper_Protocol_h */
