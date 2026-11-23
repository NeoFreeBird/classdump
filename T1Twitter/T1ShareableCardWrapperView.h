//
#ifndef T1ShareableCardWrapperView_h
#define T1ShareableCardWrapperView_h
@import Foundation;

#include "WatermarkConfigurable-Protocol.h"

@class UIImageView, UILabel, UIView;

@interface T1ShareableCardWrapperView : UIView <WatermarkConfigurable>

@property (readonly, nonatomic) UIView *cardView;
@property (readonly, nonatomic) UIImageView *logoImageView;
@property (readonly, nonatomic) UILabel *stickerLabel;
@property (nonatomic) _Bool logoHidden;
@property (nonatomic) _Bool stickerLabelHidden;

/* instance methods */
- (id)initWithCardView:(id)view logoImageView:(id)view stickerLabel:(id)label frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1ShareableCardWrapperView_h */
