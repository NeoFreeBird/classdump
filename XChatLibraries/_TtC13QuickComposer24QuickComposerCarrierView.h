//
#ifndef _TtC13QuickComposer24QuickComposerCarrierView_h
#define _TtC13QuickComposer24QuickComposerCarrierView_h
@import Foundation;

@class NSString, UIView, _$sSo6UIViewC;

@interface QuickComposer.QuickComposerCarrierView : UIView { // (Swift)
    /* instance variables */
    __C.UIView content;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;
@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13QuickComposer24QuickComposerCarrierView_h */
