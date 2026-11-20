//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainDebugLogsUploader_Protocol_h
#define Subsystem_ios_iosArm64_mainDebugLogsUploader_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainDebugLogsUploader

@required

/* required instance methods */
- (id)uploadLatestLogFileSource:(id)source error:(id *)error;
- (id)uploadLatestLogFileSource:(id)source error:(id *)error;
- (void)uploadLogFileSource:(id)source completionHandler:(id /* block */)handler;
- (void)uploadLogFileSource:(id)source completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainDebugLogsUploader_Protocol_h */
