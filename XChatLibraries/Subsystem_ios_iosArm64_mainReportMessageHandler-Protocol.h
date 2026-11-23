//
#ifndef Subsystem_ios_iosArm64_mainReportMessageHandler_Protocol_h
#define Subsystem_ios_iosArm64_mainReportMessageHandler_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainReportMessageHandler

@required

/* required instance methods */
- (void)reportMessageSeqNum:(id)num completionHandler:(id /* block */)handler;
- (void)reportMessageSeqNum:(id)num completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainReportMessageHandler_Protocol_h */
