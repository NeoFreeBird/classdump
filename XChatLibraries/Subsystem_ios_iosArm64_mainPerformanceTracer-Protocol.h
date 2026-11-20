//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainPerformanceTracer_Protocol_h
#define Subsystem_ios_iosArm64_mainPerformanceTracer_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainPerformanceTracer

@required

/* required instance methods */
- (void)beginAsyncSectionSection:(id)section uuid:(int)uuid;
- (void)beginAsyncSectionSection:(id)section uuid:(int)uuid;
- (void)endAsyncSectionSection:(id)section uuid:(int)uuid;
- (void)endAsyncSectionSection:(id)section uuid:(int)uuid;
- (_Bool)isEnabled;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainPerformanceTracer_Protocol_h */
