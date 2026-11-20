//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainDeleteMessageHandler_Protocol_h
#define Subsystem_ios_iosArm64_mainDeleteMessageHandler_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainDeleteMessageHandler

@required

/* required instance methods */
- (void)cancelAndDeletePendingMessageConvId:(id)id messageId:(id)id;
- (void)cancelAndDeletePendingMessageConvId:(id)id messageId:(id)id;
- (void)deleteMessageConvId:(id)id messageSequenceNum:(id)num deleteMessageAction:(id)action completionHandler:(id /* block */)handler;
- (void)deleteMessageConvId:(id)id messageSequenceNum:(id)num deleteMessageAction:(id)action completionHandler:(id /* block */)handler;
- (void)deleteMessagesConvId:(id)id messageSequenceNumbers:(id)numbers deleteMessageAction:(id)action completionHandler:(id /* block */)handler;
- (void)deleteMessagesConvId:(id)id messageSequenceNumbers:(id)numbers deleteMessageAction:(id)action completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainDeleteMessageHandler_Protocol_h */
