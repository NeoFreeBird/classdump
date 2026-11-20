//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRPlaceView_h
#define TCRPlaceView_h
@import Foundation;

@class UILabel, UIView;

@interface TCRPlaceView : UIView

@property (readonly, nonatomic) UILabel *distanceDotSeparatorLabel;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (readonly, nonatomic) UILabel *addressLabel;
@property (readonly, nonatomic) UILabel *distanceLabel;

/* class methods */
+ (double)height;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)accessibilityLabel;

@end

#endif /* TCRPlaceView_h */
