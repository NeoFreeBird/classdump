//
#ifndef _TtC18TwitterAudiospaces13TitleTextView_h
#define _TtC18TwitterAudiospaces13TitleTextView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class Swift.Bool, TwitterAudiospaces.TitleTextViewDelegate ?, UIColor, UIView, _$sSS, _$sSh -> __C.TFSActiveTextRangeFlavor, _$sSo21TFNAttributedTextViewC, _$sSo6UIFontC, _$sSo7UIColorC, __C.NSTextAlignment;

@interface TwitterAudiospaces.TitleTextView : UIView <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    TwitterAudiospaces.TitleTextViewDelegate ? delegate;
    __C.TFNAttributedTextView textView;
    __C.UIFont font;
    __C.UIColor textColor;
    __C.NSTextAlignment textAlignment;
    Swift.String text;
    Swift.Bool showsEditLabel;
    Swift.Bool isActiveTextRangesEnabled;
    Swift.Set -> __C.TFSActiveTextRangeFlavor highlightingTextRangeFlavors;
}

@property (nonatomic, retain) UIColor *highlightedTextColor;

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextViewDidTapInactiveArea:(id)area;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)dynamicColorDidReload:(id)reload;
- (void)hashflagVersionDidChange:(id)change;

@end

#endif /* _TtC18TwitterAudiospaces13TitleTextView_h */
