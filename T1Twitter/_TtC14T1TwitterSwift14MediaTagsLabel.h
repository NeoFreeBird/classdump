//
#ifndef _TtC14T1TwitterSwift14MediaTagsLabel_h
#define _TtC14T1TwitterSwift14MediaTagsLabel_h
@import Foundation;

@class Swift.Bool, UIView, _$s14TFSTwitterCore13TwitterTagSetCMn ?, _$sSo11UIImageViewCSg, _$sSo22UITapGestureRecognizerCSg, _$sSo29TFNTouchDownGestureRecognizerCSg, _$sSo6UIFontC, _$sSo7UIColorC, _$sSo7UIColorCSg, _$sSo7UIImageCSg, _$sSo7UILabelC, _$ss5Int64VMn, _$syycSg;

@interface T1TwitterSwift.MediaTagsLabel : UIView { // (Swift)
    /* instance variables */
    __C.UILabel titleLabel;
    __C.UIImageView? iconImageView;
    nominal type descriptor for TFSTwitterCore.TwitterTagSet ? tagSet;
    nominal type descriptor for Swift.Int64 prioritizedUserID;
    __C.UIFont font;
    __C.UIFont boldFont;
    __C.UIColor textColor;
    __C.UIImage? icon;
    Swift.Bool highlightEnabled;
    (() -> ())? tapHandler;
    __C.UIColor? originalBackgroundColor;
    __C.TFNTouchDownGestureRecognizer? touchDownRecognizer;
    __C.UITapGestureRecognizer? tapRecognizer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)handleTap;
- (void)handleTouchDown;

@end

#endif /* _TtC14T1TwitterSwift14MediaTagsLabel_h */
