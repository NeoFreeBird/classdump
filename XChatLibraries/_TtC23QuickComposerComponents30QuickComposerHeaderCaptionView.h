//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23QuickComposerComponents30QuickComposerHeaderCaptionView_h
#define _TtC23QuickComposerComponents30QuickComposerHeaderCaptionView_h
@import Foundation;

@class NSString, UIView, _$sSo6UIViewC, _$syycSg, __C.UIEdgeInsets;

@interface QuickComposerComponents.QuickComposerHeaderCaptionView : UIView { // (Swift)
    /* instance variables */
    __C.UIView caption;
    __C.UIEdgeInsets hitOutsets;
    (() -> ())? onActivate;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (_Bool)accessibilityActivate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC23QuickComposerComponents30QuickComposerHeaderCaptionView_h */
