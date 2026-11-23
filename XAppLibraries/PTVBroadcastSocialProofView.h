//
#ifndef PTVBroadcastSocialProofView_h
#define PTVBroadcastSocialProofView_h
@import Foundation;

#include "PTVBroadcastSocialProof.h"

@class UIImageView, UILabel, UIView;

@interface PTVBroadcastSocialProofView : UIView {
    /* instance variables */
    UIImageView *_imageView;
    UILabel *_label;
}

@property (retain, nonatomic) PTVBroadcastSocialProof *socialProof;

/* class methods */
+ (double)CalculatedHeightWithSocialProof:(id)proof;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* PTVBroadcastSocialProofView_h */
