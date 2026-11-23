//
#ifndef PTVNavigationBarTitleSubtitleView_h
#define PTVNavigationBarTitleSubtitleView_h
@import Foundation;

@class UILabel, UIView;
@protocol PTVNavigationBarTitleSubtitleViewDelegate;

@interface PTVNavigationBarTitleSubtitleView : UIView {
    /* instance variables */
    id <PTVNavigationBarTitleSubtitleViewDelegate> _titleTapDelegate;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

/* class methods */
+ (id)TitleFont;
+ (id)SubtitleFont;

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithTitle:(id)title subtitle:(id)subtitle titleTapDelegate:(id)delegate;

@end

#endif /* PTVNavigationBarTitleSubtitleView_h */
