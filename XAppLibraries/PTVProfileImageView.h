//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVProfileImageView_h
#define PTVProfileImageView_h
@import Foundation;

#include "PTVLoadingImageView.h"
#include "PTVProfileImageViewDelegate-Protocol.h"

@class UITapGestureRecognizer;

@interface PTVProfileImageView : PTVLoadingImageView

@property (readonly, nonatomic) id <PTVProfileImageViewDelegate> profileImageViewDelegate;
@property (readonly, nonatomic) UITapGestureRecognizer *defaultImageTapRecognizer;

/* class methods */
+ (id)ProfilePlaceholder;
+ (id)CircularProfilePlaceholder;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initUsingPlaceholder:(_Bool)placeholder;
- (id)initWithDelegate:(id)delegate usingPlaceholder:(_Bool)placeholder;
- (id)initWithDelegate:(id)delegate placeholderImage:(id)image;
- (void)didMoveToWindow;
- (void)setDelegate:(id)delegate;
- (_Bool)shouldEnableTapRecognizer;
- (void)updateTapRecognizer;
- (void)profileImagePressed;

@end

#endif /* PTVProfileImageView_h */
