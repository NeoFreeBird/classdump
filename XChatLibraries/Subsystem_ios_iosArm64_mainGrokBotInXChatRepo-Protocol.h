//
#ifndef Subsystem_ios_iosArm64_mainGrokBotInXChatRepo_Protocol_h
#define Subsystem_ios_iosArm64_mainGrokBotInXChatRepo_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainGrokBotInXChatRepo

@required

/* required instance methods */
- (void)enableWithCompletionHandler:(id /* block */)handler;
- (void)enableWithCompletionHandler:(id /* block */)handler;
- (void)markPromptReadWithCompletionHandler:(id /* block */)handler;
- (void)markPromptReadWithCompletionHandler:(id /* block */)handler;
- (id)observeEnabled;
- (id)observePrompt;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainGrokBotInXChatRepo_Protocol_h */
