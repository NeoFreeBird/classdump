//
#ifndef Subsystem_ios_iosArm64_mainAttachmentProcessor_Protocol_h
#define Subsystem_ios_iosArm64_mainAttachmentProcessor_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainAttachmentProcessor

@required

/* required instance methods */
- (void)cancelProcessingAttachment:(id)attachment;
- (void)cancelProcessingAttachment:(id)attachment;
- (void)processAttachment:(id)attachment progressHandler:(id /* block */)handler source:(id)source completionHandler:(id /* block */)handler;
- (void)processAttachment:(id)attachment progressHandler:(id /* block */)handler source:(id)source completionHandler:(id /* block */)handler;
- (void)processIfNeededAttachment:(id)attachment;
- (void)processIfNeededAttachment:(id)attachment;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainAttachmentProcessor_Protocol_h */
