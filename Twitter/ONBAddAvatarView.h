//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBAddAvatarView_h
#define ONBAddAvatarView_h
@import Foundation;

@class CAShapeLayer, UIControl, UIImageView, UILabel;

@interface ONBAddAvatarView : UIControl

@property (retain, nonatomic) CAShapeLayer *dashedLayer;
@property (retain, nonatomic) UIImageView *actionIcon;
@property (retain, nonatomic) UILabel *uploadLabel;
@property (nonatomic) double backgroundAlpha;
@property (nonatomic) _Bool shouldShowCloseIcon;

/* instance methods */
- (id)initWithBackgroundAlpha:(double)alpha;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)highlighted;
- (id)private_actionIconImage;

@end

#endif /* ONBAddAvatarView_h */
