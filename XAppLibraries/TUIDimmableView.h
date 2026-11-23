//
#ifndef TUIDimmableView_h
#define TUIDimmableView_h
@import Foundation;

@class UIView;

@interface TUIDimmableView : UIView // (Swift)

@property (nonatomic) long long interactivityVisibilityState;
@property (nonatomic, readonly) _Bool isVisible;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* TUIDimmableView_h */
