//
#ifndef Subsystem_ios_iosArm64_mainMessagePullStatusObserver_Protocol_h
#define Subsystem_ios_iosArm64_mainMessagePullStatusObserver_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainMessagePullStatusObserver

@required

/* required instance methods */
- (_Bool)isInboxSuccessfullyProcessed;
- (id)observeIsInboxDoneProcessing;
- (id)observeIsInboxSuccessfullyProcessed;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainMessagePullStatusObserver_Protocol_h */
