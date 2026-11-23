//
#ifndef T1ProfileModalSheetViewController_h
#define T1ProfileModalSheetViewController_h
@import Foundation;

#include "T1ModalProfileViewController-Protocol.h"
#include "T1ModalViewControllerNonModalPresentationDelegate-Protocol.h"
#include "T1ProfileViewController-Protocol.h"

@class NSString, TFNModalSheetViewController, TFSTwitterScribeContext, UIViewController;

@interface T1ProfileModalSheetViewController : TFNModalSheetViewController <T1ModalProfileViewController, T1ModalViewControllerNonModalPresentationDelegate>

@property (weak, nonatomic) id <T1ModalViewControllerNonModalPresentationDelegate> nonModalPresentationDelegate;
@property (retain, nonatomic) UIViewController<T1ProfileViewController> *profileContentViewController;
@property (retain, nonatomic) UIViewController *presentedFromViewController;
@property (readonly, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)profileModalWithProfileViewController:(id)controller sourceView:(id)view sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

/* instance methods */
- (id)initWithProfileViewController:(id)controller;
- (void)tfnPresentedCustomPresentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)dismissAndPresentViewControllerCreatedFromBlock:(id /* block */)block;
- (id)scribePage;
- (id)scribeSection;
- (void)modalViewController:(id)controller nonModallyPresentViewControllerCreatedFromBlock:(id /* block */)block;
- (void)_t1_presentViewController:(id)controller fromPresenter:(id)presenter withSnapshot:(id)snapshot;
- (id)_t1_addSnapshotOfView:(id)view toHostView:(id)view;
- (void)_t1_animateSlidingInSubviewsOfView:(id)view excludingView:(id)view dx:(double)dx dy:(double)dy completion:(id /* block */)completion;
- (void)_t1_voiceOverStatusDidChange:(id)change;

@end

#endif /* T1ProfileModalSheetViewController_h */
