//
#ifndef T1ComposerAttachmentDelegate_Protocol_h
#define T1ComposerAttachmentDelegate_Protocol_h
@import Foundation;

@protocol T1ComposerAttachmentDelegate

@required

/* required instance methods */
- (void)composer:(id)composer didAddOrReplaceAttachment:(id)attachment;
- (void)composer:(id)composer didReplaceAllAttachments:(id)attachments;

@optional

@end

#endif /* T1ComposerAttachmentDelegate_Protocol_h */
