//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainPostResolver_Protocol_h
#define Subsystem_ios_iosArm64_mainPostResolver_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainPostResolver

@required

/* required instance methods */
- (void)getCachedPostStateId:(id)id completionHandler:(id /* block */)handler;
- (void)getCachedPostStateId:(id)id completionHandler:(id /* block */)handler;
- (void)loadFromDbAndMaybeRefreshPostIds:(id)ids completionHandler:(id /* block */)handler;
- (void)loadFromDbAndMaybeRefreshPostIds:(id)ids completionHandler:(id /* block */)handler;
- (id)observePostLookupStates;
- (void)resolvePostIfNeededId:(id)id;
- (void)resolvePostIfNeededId:(id)id;
- (void)resolvePostImmediatelyId:(id)id;
- (void)resolvePostImmediatelyId:(id)id;
- (void)resolvePostImmediatelyAndReturnId:(id)id completionHandler:(id /* block */)handler;
- (void)resolvePostImmediatelyAndReturnId:(id)id completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainPostResolver_Protocol_h */
