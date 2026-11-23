//
#ifndef _TtC14CommunityNotes23BirdwatchPivotTitleView_h
#define _TtC14CommunityNotes23BirdwatchPivotTitleView_h
@import Foundation;

@class CommunityNotes.BirdwatchPivotViewModel ?, UIView, _$sSo11UIImageViewC, _$sSo21TFNAttributedTextViewC;

@interface CommunityNotes.BirdwatchPivotTitleView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView titleIconImageView;
    __C.TFNAttributedTextView titleTextView;
    __C.UIImageView footerIconImageView;
    __C.TFNAttributedTextView footerTextView;
    __C.UIImageView accessoryImageView;
    CommunityNotes.BirdwatchPivotViewModel ? viewModel;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC14CommunityNotes23BirdwatchPivotTitleView_h */
