//
#ifndef _TtC23QuickComposerComponents22QuickComposerQuoteView_h
#define _TtC23QuickComposerComponents22QuickComposerQuoteView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, QuickComposerComponents.QuickComposerComponentsMetrics, Swift.Bool, UIView, _$sSo11UIImageViewC, _$sSo22UITapGestureRecognizerCSg, _$sSo6UIViewCSg, _$sSo7UILabelC, _$syycSg;

@interface QuickComposerComponents.QuickComposerQuoteView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    __C.UIImageView previewImageView;
    Swift.Bool showsPreviewImage;
    __C.UIView? previewBadge;
    __C.UIView? caption;
    __C.UIView? trailingAccessory;
    (() -> ())? onTap;
    QuickComposerComponents.QuickComposerComponentsMetrics metrics;
    __C.UIImageView previewGlyphView;
    __C.UILabel textLabel;
    __C.UITapGestureRecognizer? $__lazy_storage_$_tap;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)handleTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC23QuickComposerComponents22QuickComposerQuoteView_h */
