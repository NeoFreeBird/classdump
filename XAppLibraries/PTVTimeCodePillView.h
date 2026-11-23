//
#ifndef PTVTimeCodePillView_h
#define PTVTimeCodePillView_h
@import Foundation;

@class UIImageView, UILabel, UIView;

@interface PTVTimeCodePillView : UIView

@property (readonly, nonatomic) UIImageView *timeCodeIcon;
@property (readonly, nonatomic) UILabel *timeCodeLabel;
@property (nonatomic) double timeCode;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateTimeCodeLabel;

@end

#endif /* PTVTimeCodePillView_h */
