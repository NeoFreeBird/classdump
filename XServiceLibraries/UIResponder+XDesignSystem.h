//
#ifndef UIResponder_XDesignSystem_h
#define UIResponder_XDesignSystem_h
@import Foundation;

@interface UIResponder (XDesignSystem)

/* class methods */
+ (id)tfn_lastRecordedFirstResponder;
+ (void)tfn_clearLastRecordedFirstResponder;

/* instance methods */
- (_Bool)tfn_acceptsKeyboardInput;
- (_Bool)tfn_acceptsMultipleLineKeyboardInput;
- (id)tfn_responderChain;
- (void)_tfn_constructResponderChain:(id)chain;
- (_Bool)tfn_becomeFirstResponderIfNotInResponderChain;
- (_Bool)tfn_isResponderChainVetoed;
- (_Bool)tfn_isLayoutSuppressed;
- (id)tfn_snapshotOfResponder;
- (_Bool)tfn_isAppGestureEnabled:(unsigned long long)enabled;
- (_Bool)tfn_canRestoreFirstResponderOnEnteringForeground;
- (void)setTfn_canRestoreFirstResponderOnEnteringForeground:(_Bool)foreground;
- (void)tfn_recordAsFirstResponder;
- (void)xdsTrayReportFirstResponder;

@end

#endif /* UIResponder_XDesignSystem_h */
