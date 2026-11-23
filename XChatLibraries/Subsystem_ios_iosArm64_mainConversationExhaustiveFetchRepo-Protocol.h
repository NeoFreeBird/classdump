//
#ifndef Subsystem_ios_iosArm64_mainConversationExhaustiveFetchRepo_Protocol_h
#define Subsystem_ios_iosArm64_mainConversationExhaustiveFetchRepo_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainConversationExhaustiveFetchRepo

@required

/* required instance methods */
- (void)downloadChosenHistoryWithCompletionHandler:(id /* block */)handler;
- (void)downloadChosenHistoryWithCompletionHandler:(id /* block */)handler;
- (void)exhaustiveFetchConvTopCursorLogName:(id)name completionHandler:(id /* block */)handler;
- (void)exhaustiveFetchConvTopCursorLogName:(id)name completionHandler:(id /* block */)handler;
- (id)observeHistoryChatsQuery:(id)query;
- (id)observeHistoryChatsQuery:(id)query;
- (id)observeHistoryDownloadState;
- (id)observeIsExhaustiveConvFetchDone;
- (void)setKeepAllHistoryKeep:(_Bool)keep;
- (void)setKeepAllHistoryKeep:(_Bool)keep;
- (void)setKeepFullHistoryConversationIds:(id)ids keep:(_Bool)keep;
- (void)setKeepFullHistoryConversationIds:(id)ids keep:(_Bool)keep;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainConversationExhaustiveFetchRepo_Protocol_h */
