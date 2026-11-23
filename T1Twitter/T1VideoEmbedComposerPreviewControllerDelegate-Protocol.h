//
#ifndef T1VideoEmbedComposerPreviewControllerDelegate_Protocol_h
#define T1VideoEmbedComposerPreviewControllerDelegate_Protocol_h
@import Foundation;

@protocol T1VideoEmbedComposerPreviewControllerDelegate

@required

/* required instance methods */
- (void)videoEmbedComposerPreviewControllerDidShowPreview:(id)preview;
- (void)videoEmbedComposerPreviewControllerDidRemovePreview:(id)preview;
- (void)videoEmbedComposerPreviewController:(id)controller didDeclineURL:(id)url;

@optional

@end

#endif /* T1VideoEmbedComposerPreviewControllerDelegate_Protocol_h */
