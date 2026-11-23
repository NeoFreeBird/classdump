//
#ifndef Subsystem_ios_iosArm64_mainDeviceEnrollmentManager_Protocol_h
#define Subsystem_ios_iosArm64_mainDeviceEnrollmentManager_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainDeviceEnrollmentManager

@required

@property (nonatomic, readonly) id state;

/* required instance methods */
- (void)approveEnrollmentEnrollmentId:(id)id;
- (void)approveEnrollmentEnrollmentId:(id)id;
- (void)cancel;
- (void)confirmVerification;
- (void)denyVerification;
- (void)initiateEnrollment;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainDeviceEnrollmentManager_Protocol_h */
