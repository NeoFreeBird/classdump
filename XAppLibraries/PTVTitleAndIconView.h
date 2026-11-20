//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTitleAndIconView_h
#define PTVTitleAndIconView_h
@import Foundation;

@class UIImageView, UILabel, UIStackView;

@interface PTVTitleAndIconView : UIStackView

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIImageView *imageView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithTitle:(id)title image:(id)image;
- (id)initWithAttributedTitle:(id)title image:(id)image accessibilityLabel:(id)label;

@end

#endif /* PTVTitleAndIconView_h */
