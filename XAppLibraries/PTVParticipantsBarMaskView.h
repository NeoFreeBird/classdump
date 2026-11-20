//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVParticipantsBarMaskView_h
#define PTVParticipantsBarMaskView_h
@import Foundation;

@class CAGradientLayer, UIView;

@interface PTVParticipantsBarMaskView : UIView {
    /* instance variables */
    CAGradientLayer *_maskLayer;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setupMaskLayer;
- (void)updateMaskLayer;

@end

#endif /* PTVParticipantsBarMaskView_h */
