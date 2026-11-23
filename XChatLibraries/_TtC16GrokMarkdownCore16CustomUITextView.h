//
#ifndef _TtC16GrokMarkdownCore16CustomUITextView_h
#define _TtC16GrokMarkdownCore16CustomUITextView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class GrokMarkdownCore.MarkdownEnvironment, GrokMarkdownCore.TextAnimationStyle, Swift.Bool, UITextView, _$s10Foundation21NSKeyValueObservationCMn ?, _$s12CoreGraphics7CGFloatVMn, _$sSa -> __C._NSRange _$s_Sdt, _$sSo13CADisplayLinkCSg, _$sSo7UIColorC, _$sySScSg, _$syycSg;

@interface GrokMarkdownCore.CustomUITextView : UITextView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onTextCopied;
    GrokMarkdownCore.MarkdownEnvironment environment;
    __C.CADisplayLink? displayLink;
    Swift.Array -> __C._NSRange _$s_Sdt animatedRanges;
    GrokMarkdownCore.TextAnimationStyle animationStyle;
    Swift.Bool allowsSelectionGestures;
    (() -> ())? onLayoutSubviews;
    __C.UIColor horizontalRuleColor;
    nominal type descriptor for Foundation.NSKeyValueObservation ? usedHeightObservation;
    Swift.Bool needsHorizontalRuleUpdate;
    nominal type descriptor for CoreGraphics.CGFloat lastHorizontalRuleWidth;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (void)dealloc;
- (void)copy:(id)copy;
- (void)updateAnimation:(id)animation;
- (void)handleTripleTap:(id)tap;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame textContainer:(id)container;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC16GrokMarkdownCore16CustomUITextView_h */
