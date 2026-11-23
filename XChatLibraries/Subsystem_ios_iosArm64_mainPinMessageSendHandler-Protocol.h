//
#ifndef Subsystem_ios_iosArm64_mainPinMessageSendHandler_Protocol_h
#define Subsystem_ios_iosArm64_mainPinMessageSendHandler_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainPinMessageSendHandler

@required

/* required instance methods */
- (void)editPinnedMessageConvId:(id)id sourceSeqNum:(id)num completionHandler:(id /* block */)handler;
- (void)editPinnedMessageConvId:(id)id sourceSeqNum:(id)num completionHandler:(id /* block */)handler;
- (void)pinMessageConvId:(id)id sourceSeqNum:(id)num completionHandler:(id /* block */)handler;
- (void)pinMessageConvId:(id)id sourceSeqNum:(id)num completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainPinMessageSendHandler_Protocol_h */
