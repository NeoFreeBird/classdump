//
#ifndef Subsystem_ios_iosArm64_mainUnpinMessageSendHandler_Protocol_h
#define Subsystem_ios_iosArm64_mainUnpinMessageSendHandler_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainUnpinMessageSendHandler

@required

/* required instance methods */
- (void)unpinAllConvId:(id)id completionHandler:(id /* block */)handler;
- (void)unpinAllConvId:(id)id completionHandler:(id /* block */)handler;
- (void)unpinMessageConvId:(id)id sourceSeqNum:(id)num completionHandler:(id /* block */)handler;
- (void)unpinMessageConvId:(id)id sourceSeqNum:(id)num completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainUnpinMessageSendHandler_Protocol_h */
