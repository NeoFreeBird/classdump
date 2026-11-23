//
#ifndef T1CashTagComposerPreviewControllerDelegate_Protocol_h
#define T1CashTagComposerPreviewControllerDelegate_Protocol_h
@import Foundation;

@protocol T1CashTagComposerPreviewControllerDelegate

@required

/* required instance methods */
- (void)cashTagComposerPreviewControllerDidShowPreview:(id)preview;
- (void)cashTagComposerPreviewControllerDidRemovePreview:(id)preview;
- (void)cashTagComposerPreviewControllerDidChangeSize:(id)size;
- (void)cashTagComposerPreviewControllerDidTapDismiss:(id)dismiss;
- (void)cashTagComposerPreviewControllerDidTapCustomize:(id)customize;
- (void)cashTagComposerPreviewController:(id)controller didChangeDisplayStyle:(long long)style;

@optional

@end

#endif /* T1CashTagComposerPreviewControllerDelegate_Protocol_h */
