//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainMessageRequestsActionHandler_Protocol_h
#define Subsystem_ios_iosArm64_mainMessageRequestsActionHandler_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainMessageRequestsActionHandler

@required

/* required instance methods */
- (void)acceptRequestConvId:(id)id completionHandler:(id /* block */)handler;
- (void)acceptRequestConvId:(id)id completionHandler:(id /* block */)handler;
- (void)blockRequestConvId:(id)id completionHandler:(id /* block */)handler;
- (void)blockRequestConvId:(id)id completionHandler:(id /* block */)handler;
- (void)deleteRequestConvId:(id)id completionHandler:(id /* block */)handler;
- (void)deleteRequestConvId:(id)id completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainMessageRequestsActionHandler_Protocol_h */
