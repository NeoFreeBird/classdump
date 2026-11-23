//
#ifndef PTVGiftHeartButton_h
#define PTVGiftHeartButton_h
@import Foundation;

#include "PTVButton.h"

@class UIImageView, UILabel;

@interface PTVGiftHeartButton : PTVButton {
    /* instance variables */
    UIImageView *_giftHeartView;
    UILabel *_giftsRemainingLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setGiftStyle:(id)style giftCount:(long long)count;

@end

#endif /* PTVGiftHeartButton_h */
