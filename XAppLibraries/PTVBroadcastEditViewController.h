//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastEditViewController_h
#define PTVBroadcastEditViewController_h
@import Foundation;

#include "PTVBroadcastEditSaveChangesView.h"
#include "PTVBroadcastEditSaveChangesViewDelegate-Protocol.h"
#include "PTVBroadcastEditViewDelegate-Protocol.h"
#include "PTVBroadcastEditViewModel.h"
#include "PTVOverflowContentViewController-Protocol.h"

@class NSString, UIViewController;

@interface PTVBroadcastEditViewController : UIViewController <PTVOverflowContentViewController, PTVBroadcastEditViewDelegate, PTVBroadcastEditSaveChangesViewDelegate>

@property (readonly, nonatomic) PTVBroadcastEditViewModel *viewModel;
@property (retain, nonatomic) PTVBroadcastEditSaveChangesView *saveChangesView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)PresentSaveChangesFailErrorToast;

/* instance methods */
- (id)initWithBroadcastController:(id)controller;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)broadcastEditViewDidUpdateThumbnail:(id)thumbnail;
- (void)broadcastEditViewDidUpdateStartPoint:(id)point;
- (void)broadcastEditViewDidUpdateTitle:(id)title;
- (void)broadcastEditSaveChangesViewDidClickSaveChanges:(id)changes;
- (_Bool)overflowContentViewControllerShouldGoBack;
- (_Bool)overflowContentViewControllerShouldDisplayBackButton;
- (_Bool)overflowContentViewControllerShouldAllowSwipeToGoBack;
- (void)updateSaveChangesButton;
- (void)saveChanges;
- (void)didCompleteSaveChangesWithSuccess:(_Bool)success error:(id)error;
- (id)broadcastEditView;
- (id)broadcastOverflowView;
- (_Bool)hasUnsavedChanges;
- (_Bool)isRootOfNavigationViewController;
- (void)dismissEditViewController;
- (void)presentDiscardChangesConfirmation;
- (void)backButtonPressed;

@end

#endif /* PTVBroadcastEditViewController_h */
