//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatKotlin23AttachmentProcessorImpl_h
#define _TtC10ChatKotlin23AttachmentProcessorImpl_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainAttachmentProcessor-Protocol.h"
#include "Subsystem_ios_iosArm64_mainKmpSourceWrapper-Protocol.h"

@class ChatUtilities.AttachmentService, Subsystem_ios_iosArm64_mainChatComposerAttachmentNeedsProcessing, _$sSo13NSFileManagerC, _TtCs12_SwiftObject;

@interface ChatKotlin.AttachmentProcessorImpl : Swift._SwiftObject <Subsystem_ios_iosArm64_mainAttachmentProcessor> { // (Swift)
    /* instance variables */
    ChatUtilities.AttachmentService attachmentService;
    __C.NSFileManager fileManager;
}

/* instance methods */
- (void)processAttachment:(Subsystem_ios_iosArm64_mainChatComposerAttachmentNeedsProcessing *)attachment progressHandler:(id /* block */)handler source:((void (^)((id /* block */)self (Subsystem_ios_iosArm64_mainFloat *)id)))source completionHandler:(<Subsystem_ios_iosArm64_mainKmpSourceWrapper> *)handler;
- (void)processIfNeededAttachment:(id)attachment;
- (void)cancelProcessingAttachment:(id)attachment;

@end

#endif /* _TtC10ChatKotlin23AttachmentProcessorImpl_h */
