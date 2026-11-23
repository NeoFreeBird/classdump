//
#ifndef _TtC12MarkdownView16CustomUITextView_h
#define _TtC12MarkdownView16CustomUITextView_h
@import Foundation;

#include "NSTextStorageDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class MarkdownView.MarkdownTextAppendAnimation, Swift.Bool, UITextView, _$sSD -> _$s12CoreGraphics7CGFloatVMn _$sAA, _$sSS, _$sSa -> __C._NSRange _$s_Sdt, _$sSo13CADisplayLinkCSg, _$sSo7UIImageCSg;

@interface MarkdownView.CustomUITextView : UITextView <UIGestureRecognizerDelegate, NSTextStorageDelegate> { // (Swift)
    /* instance variables */
    __C.CADisplayLink? displayLink;
    Swift.Array -> __C._NSRange _$s_Sdt animatedRanges;
    MarkdownView.MarkdownTextAppendAnimation appendAnimation;
    Swift.Dictionary -> nominal type descriptor for CoreGraphics.CGFloat _$sAA fittingHeightCache;
    Swift.Bool isEditingLayoutNeutralAttributes;
    Swift.String inlineLaTeXCopyLaTeXTitle;
    Swift.String inlineLaTeXCopyImageTitle;
    __C.UIImage? inlineLaTeXCopyLaTeXIcon;
    __C.UIImage? inlineLaTeXCopyImageIcon;
}

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textContainerInset;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame textContainer:(id)container;
- (id)initWithCoder:(id)coder;
- (void)textStorage:(id)storage didProcessEditing:(unsigned long long)editing range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range changeInLength:(long long)length;
- (void)traitCollectionDidChange:(id)change;
- (_Bool)resignFirstResponder;
- (void)dealloc;
- (void)copy:(id)copy;
- (void)updateAnimation:(id)animation;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;

@end

#endif /* _TtC12MarkdownView16CustomUITextView_h */
