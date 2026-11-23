//
#ifndef TFNTwitterComposition_T1UndoSendContext_h
#define TFNTwitterComposition_T1UndoSendContext_h
@import Foundation;

@interface TFNTwitterComposition (T1UndoSendContext)

/* instance methods */
- (_Bool)addCashtagAttachmentFromTypeaheadCashtag:(id)cashtag;
- (_Bool)addCashtagAttachmentFromTypeaheadCashtag:(id)cashtag active:(_Bool)active themeOverrideRawValue:(id)value;
- (void)configureUndoableCompositionIfNecessaryForAccount:(id)account;

@end

#endif /* TFNTwitterComposition_T1UndoSendContext_h */
