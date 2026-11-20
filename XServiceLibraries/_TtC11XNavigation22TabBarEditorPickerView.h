//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XNavigation22TabBarEditorPickerView_h
#define _TtC11XNavigation22TabBarEditorPickerView_h
@import Foundation;

@class UIView, XDesignSystem.Glass, XNavigation.TabBarEditor.Option _$scSg ->, _$sSaySo6UIViewCG, _$sSo12UIScrollViewC, _$sSo6UIViewC, _$syycSg;

@interface XNavigation.TabBarEditorPickerView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onRemove;
    XNavigation.TabBarEditor.Option _$scSg -> onPick;
    (() -> ())? onDismiss;
    XDesignSystem.Glass card;
    __C.UIView container;
    __C.UIScrollView scrollView;
    [__C.UIView] headerViews;
    [__C.UIView] rowViews;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)accessibilityPerformEscape;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigation22TabBarEditorPickerView_h */
