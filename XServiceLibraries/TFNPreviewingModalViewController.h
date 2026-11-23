//
#ifndef TFNPreviewingModalViewController_h
#define TFNPreviewingModalViewController_h
@import Foundation;

#include "TFNModalContainerViewController-Protocol.h"
#include "TFNModalContainerViewControllerDelegate-Protocol.h"

@class NSArray, NSString, UIView, UIViewController;

@interface TFNPreviewingModalViewController : UIViewController <TFNModalContainerViewController>

@property (nonatomic) long long result;
@property (retain, nonatomic) UIView *transformView;
@property (retain, nonatomic) UIViewController<TFNModalContainerViewController> *originalModalContainerViewController;
@property (copy, nonatomic) id /* block */ previewDidRun;
@property (retain, nonatomic) UIViewController *modalContentViewController;
@property (copy, nonatomic) NSArray *tfn_deprecated_overrideActionItems;
@property (copy, nonatomic) id /* block */ commitAction;
@property (readonly, nonatomic) _Bool previewCancelled;
@property (weak, nonatomic) id <TFNModalContainerViewControllerDelegate> delegate;
@property (readonly, nonatomic) _Bool dismissableWithGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)visibleModalViewControllers;
+ (_Bool)isPreviewVisible;

/* instance methods */
- (id)initWithModalContentViewController:(id)controller;
- (id)initWithModalContentViewController:(id)controller didRunBlock:(id /* block */)block;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)_addModalContentViewControllerView;
- (id)commit;
- (void)cancelPreviewing;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidAppear:(_Bool)appear;
- (void)dismissViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)previewActionItems;
- (id)tfn_modalContainerViewController;
- (_Bool)isDismissableWithGesture;
- (void)tfnPresentedCustomPresentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)animated completion:(id /* block */)completion;

@end

#endif /* TFNPreviewingModalViewController_h */
