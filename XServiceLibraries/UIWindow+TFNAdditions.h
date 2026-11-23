//
#ifndef UIWindow_TFNAdditions_h
#define UIWindow_TFNAdditions_h
@import Foundation;

@interface UIWindow (TFNAdditions)

/* class methods */
+ (void)load;
+ (id)tfn_windowForResponder:(id)responder;

/* instance methods */
- (_Bool)tfn_isFullscreen;
- (_Bool)tfn_isLiveResizing;
- (void)tfn_setTitlebarHidden:(_Bool)hidden;
- (void)tfn_setMovableByWindowBackground:(_Bool)background;
- (_Bool)tfn_ignoreTitlebarInset;
- (void)setTfn_ignoreTitlebarInset:(_Bool)inset;
- (void)tfn_setZoomButtonEnabled:(_Bool)enabled;
- (void)tfn_withInitialSize:(id /* block */)size;
- (void)tfn_setInitialSize:(struct CGSize { double x0; double x1; })size minimumSize:(struct CGSize { double x0; double x1; })size maximumSize:(struct CGSize { double x0; double x1; })size;
- (void)tfn_setInitialFrameFromString:(id)string minimumSize:(struct CGSize { double x0; double x1; })size maximumSize:(struct CGSize { double x0; double x1; })size;
- (void)_tfn_setInitialFrameFromString:(id)string size:(struct CGSize { double x0; double x1; })size minimumSize:(struct CGSize { double x0; double x1; })size maximumSize:(struct CGSize { double x0; double x1; })size;
- (id)tfn_frameAutosaveKey;
- (void)setTfn_frameAutosaveKey:(id)key;
- (void)tfn_autosaveFrame;
- (id)tfn_frameString;
- (void)tfn_setButtonsVisible:(_Bool)visible animated:(_Bool)animated;
- (void)tfn_setApplyShadowToButtons:(_Bool)buttons;
- (void)tfn_bringToFront;
- (void)tfn_orderOut;
- (void)tfn_setNSWindowDelegate:(id)delegate;
- (void)tfn_setSideBarWidth:(double)width completion:(id /* block */)completion;
- (void)setTfn_overrideUserInterfaceStyle:(long long)style;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_cachedSafeAreaInsets;
- (id)_tfn_windowState:(_Bool)state;
- (void)_tfn_swizzledWindowSafeAreaInsetsDidChange;

@end

#endif /* UIWindow_TFNAdditions_h */
