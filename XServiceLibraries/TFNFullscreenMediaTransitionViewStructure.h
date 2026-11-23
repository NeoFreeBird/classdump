//
#ifndef TFNFullscreenMediaTransitionViewStructure_h
#define TFNFullscreenMediaTransitionViewStructure_h
@import Foundation;

@class NSArray, NSObject, UIImage, UIView, UIWindow;

@interface TFNFullscreenMediaTransitionViewStructure : NSObject

@property (readonly, nonatomic) UIWindow *window;
@property (readonly, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) UIView *transitionView;
@property (readonly, nonatomic) UIView *transitionBackgroundView;
@property (readonly, nonatomic) UIView *transitionMediaView;
@property (readonly, nonatomic) UIView *transitionContainer;
@property (readonly, nonatomic) NSArray *frontViews;
@property (readonly, nonatomic) UIImage *previewImage;

/* instance methods */
- (id)initWithWindow:(id)window sourceView:(id)view transitionView:(id)view backgroundView:(id)view transitionMediaView:(id)view container:(id)container frontViews:(id)views;
- (id)description;

@end

#endif /* TFNFullscreenMediaTransitionViewStructure_h */
