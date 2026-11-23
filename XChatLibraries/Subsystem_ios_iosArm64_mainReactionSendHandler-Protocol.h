//
#ifndef Subsystem_ios_iosArm64_mainReactionSendHandler_Protocol_h
#define Subsystem_ios_iosArm64_mainReactionSendHandler_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainReactionSendHandler

@required

/* required instance methods */
- (void)addReactionConvId:(id)id emoji:(id)emoji messageAttachmentId:(id)id messageSequenceNum:(id)num completionHandler:(id /* block */)handler;
- (void)addReactionConvId:(id)id emoji:(id)emoji messageAttachmentId:(id)id messageSequenceNum:(id)num completionHandler:(id /* block */)handler;
- (void)removeReactionConvId:(id)id emoji:(id)emoji messageAttachmentId:(id)id messageSequenceNum:(id)num completionHandler:(id /* block */)handler;
- (void)removeReactionConvId:(id)id emoji:(id)emoji messageAttachmentId:(id)id messageSequenceNum:(id)num completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainReactionSendHandler_Protocol_h */
