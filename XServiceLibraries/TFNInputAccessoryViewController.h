//
#ifndef TFNInputAccessoryViewController_h
#define TFNInputAccessoryViewController_h
@import Foundation;

#include "TFNInputAccessoryControllerView.h"

@class UIInputViewController, UIView;
@protocol TFNInputAccessoryViewControllerDelegate;

@interface TFNInputAccessoryViewController : UIInputViewController

@property (retain, nonatomic) TFNInputAccessoryControllerView *view;
@property (retain, nonatomic) UIView *hostView;
@property (weak, nonatomic) id <TFNInputAccessoryViewControllerDelegate> delegate;
@property (nonatomic) double accessoryHeight;

/* class methods */
+ (void)setDebugOutlinesEnabled:(_Bool)enabled;
+ (_Bool)debugOutlinesEnabled;

/* instance methods */
- (void)dealloc;
- (void)_tfn_main_updateViewIntrinsicContentSize;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_tfn_main_hostViewDidChangeCenter;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;

@end

#endif /* TFNInputAccessoryViewController_h */
