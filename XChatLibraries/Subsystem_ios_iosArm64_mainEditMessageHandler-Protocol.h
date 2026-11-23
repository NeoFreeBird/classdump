//
#ifndef Subsystem_ios_iosArm64_mainEditMessageHandler_Protocol_h
#define Subsystem_ios_iosArm64_mainEditMessageHandler_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainEditMessageHandler

@required

/* required instance methods */
- (void)editMessageConvId:(id)id messageSequenceNum:(id)num updatedText:(id)text completionHandler:(id /* block */)handler;
- (void)editMessageConvId:(id)id messageSequenceNum:(id)num updatedText:(id)text completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainEditMessageHandler_Protocol_h */
