//
#ifndef Subsystem_ios_iosArm64_mainChatItemRepo_Protocol_h
#define Subsystem_ios_iosArm64_mainChatItemRepo_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainChatItemRepo

@required

/* required instance methods */
- (void)dispose;
- (void)expandWindowCurrentMin:(id)min target:(id)target completionHandler:(id /* block */)handler;
- (void)expandWindowCurrentMin:(id)min target:(id)target completionHandler:(id /* block */)handler;
- (void)getLatestSequenceNumberWithCompletionHandler:(id /* block */)handler;
- (void)getLatestSequenceNumberWithCompletionHandler:(id /* block */)handler;
- (void)getMessageItemsBySequenceNumbersSeqNums:(id)nums completionHandler:(id /* block */)handler;
- (void)getMessageItemsBySequenceNumbersSeqNums:(id)nums completionHandler:(id /* block */)handler;
- (void)getSequenceNumberByMessageIdMessageId:(id)id completionHandler:(id /* block */)handler;
- (void)getSequenceNumberByMessageIdMessageId:(id)id completionHandler:(id /* block */)handler;
- (id)observeLastSeenSeqNum:(id)num initialSequenceNumber:(id)number;
- (id)observeLastSeenSeqNum:(id)num initialSequenceNumber:(id)number;
- (id)observeConvId:(id)id messageId:(id)id;
- (id)observeConvId:(id)id messageId:(id)id;
- (id)observeChatScreenInitialSequenceNumber:(id)number;
- (id)observeChatScreenInitialSequenceNumber:(id)number;
- (void)setupWindowWithTargetSequenceTargetSequenceNumber:(id)number completionHandler:(id /* block */)handler;
- (void)setupWindowWithTargetSequenceTargetSequenceNumber:(id)number completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainChatItemRepo_Protocol_h */
