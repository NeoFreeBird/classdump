//
#ifndef T1InlineComposeAutocompleteController_h
#define T1InlineComposeAutocompleteController_h
@import Foundation;

#include "T1InlineComposeAutocompleteControllerDelegate-Protocol.h"

@class NSObject, TCRAutocompleteViewController, TFNViewController, UIButton, UIPopoverPresentationController, UIView;

@interface T1InlineComposeAutocompleteController : NSObject

@property (weak, nonatomic) TCRAutocompleteViewController *autocompleteViewController;
@property (weak, nonatomic) TFNViewController *containerViewController;
@property (weak, nonatomic) UIPopoverPresentationController *autocompletePopoverController;
@property (retain, nonatomic) UIView *navigationBarView;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) _Bool isAutocompleteVisible;
@property (weak, nonatomic) id <T1InlineComposeAutocompleteControllerDelegate> delegate;
@property (nonatomic) long long displayMode;

/* instance methods */
- (void)_t1_initializeAutocompleteNavigationBar;
- (void)_t1_addNavigationBarInContainerView:(id)view;
- (void)_t1_closeButtonPressed:(id)pressed;
- (double)_t1_statusBarHeight:(id)height;
- (long long)_t1_displayModeInContainerInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)showAutocompleteForAutocompleteViewController:(id)controller inContainerViewController:(id)controller inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame belowSubview:(id)subview;
- (void)removeAutocompleteForAutocompleteViewController:(id)controller fromContainerViewController:(id)controller;
- (void)updateAutocompleteFrameInContainerViewController:(id)controller withAvailableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1InlineComposeAutocompleteController_h */
