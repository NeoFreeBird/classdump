//
#ifndef Subsystem_ios_iosArm64_mainPostAttachmentObserver_Protocol_h
#define Subsystem_ios_iosArm64_mainPostAttachmentObserver_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainPostAttachmentObserver

@required

/* required instance methods */
- (id)observeLoadedPosts;
- (void)onPostsLoadedPosts:(id)posts completionHandler:(id /* block */)handler;
- (void)onPostsLoadedPosts:(id)posts completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainPostAttachmentObserver_Protocol_h */
