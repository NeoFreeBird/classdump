//
#ifndef FIRCLSNotificationManager_h
#define FIRCLSNotificationManager_h
@import Foundation;

@class NSObject;

@interface FIRCLSNotificationManager : NSObject

/* instance methods */
- (void)registerNotificationListener;
- (void)captureInitialNotificationStates;
- (void)willBecomeActive:(id)active;
- (void)didBecomeInactive:(id)inactive;
- (void)didChangeOrientation:(id)orientation;
- (void)didChangeUIOrientation:(id)uiorientation;

@end

#endif /* FIRCLSNotificationManager_h */
