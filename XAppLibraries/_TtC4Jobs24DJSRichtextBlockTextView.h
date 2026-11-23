//
#ifndef _TtC4Jobs24DJSRichtextBlockTextView_h
#define _TtC4Jobs24DJSRichtextBlockTextView_h
@import Foundation;

@class Jobs.DJSRichtextBlockTextViewDelegate ?, Jobs.DJSRichtextContext ?, Jobs.DraftJSBlock ?, UIView, _$sSo23NSMutableParagraphStyleC, _$sSo25NSMutableAttributedStringC, _$sSo6UIFontCSg, _$sSo7UILabelC;

@interface Jobs.DJSRichtextBlockTextView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel textLabel;
    __C.NSMutableAttributedString textAttributedString;
    __C.NSMutableParagraphStyle textParagraphStyle;
    __C.UIFont? textFont;
    Jobs.DraftJSBlock ? block;
    Jobs.DJSRichtextContext ? context;
    Jobs.DJSRichtextBlockTextViewDelegate ? delegate;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)labelTapped:(id)tapped;

@end

#endif /* _TtC4Jobs24DJSRichtextBlockTextView_h */
