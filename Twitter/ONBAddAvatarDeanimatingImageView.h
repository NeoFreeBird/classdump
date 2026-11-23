//
#ifndef ONBAddAvatarDeanimatingImageView_h
#define ONBAddAvatarDeanimatingImageView_h
@import Foundation;

@class UIImageView;

@interface ONBAddAvatarDeanimatingImageView : UIImageView {
    /* instance variables */
    long long _frameIndex;
}

@property (copy, nonatomic) id /* block */ setImageAction;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame animationStillIndex:(long long)index;
- (void)setImage:(id)image;

@end

#endif /* ONBAddAvatarDeanimatingImageView_h */
