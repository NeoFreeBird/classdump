//
#ifndef Subsystem_ios_iosArm64_mainXClock_Protocol_h
#define Subsystem_ios_iosArm64_mainXClock_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainKotlinTimeSourceWithComparableMarks;

@protocol Subsystem_ios_iosArm64_mainXClock

@required

@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainKotlinTimeSourceWithComparableMarks> timeSource;

/* required instance methods */
- (id)currentTimeZone;
- (id)now;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainXClock_Protocol_h */
