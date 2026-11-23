//
#ifndef TFNNavigationChromeHandler_h
#define TFNNavigationChromeHandler_h
@import Foundation;

@class NSLayoutConstraint, NSObject, UINavigationController, UIView;

@interface TFNNavigationChromeHandler : NSObject {
    /* instance variables */
    _Bool _isTransition;
    NSLayoutConstraint *_temporaryAccessoryHeightConstraint;
}

@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *chromeContainerBottomConstraint;
@property (readonly, nonatomic) UIView *chromeContainerView;
@property (nonatomic) _Bool keepsAccessoryInsideSafeArea;

/* instance methods */
- (id)initWithTransition:(_Bool)transition;
- (void)attachToViewController:(id)controller navigationController:(id)controller;
- (void)attachToTabBarViewController:(id)controller;
- (void)detachFromViewController;
- (void)forceHeight:(double)height;
- (void)setShadowHidden:(_Bool)hidden animated:(_Bool)animated;
- (void)_tfn_updateBackgroundColor;
- (void)attachAccessoryViewForViewControler:(id)controler navigationController:(id)controller;
- (void)dealloc;

@end

#endif /* TFNNavigationChromeHandler_h */
