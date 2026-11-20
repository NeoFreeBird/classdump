//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVCopyrightViolationViewController_h
#define PTVCopyrightViolationViewController_h
@import Foundation;

#include "PTVBroadcastController.h"
#include "PTVCopyrightViolation.h"
#include "PTVCopyrightViolationViewControllerDelegate-Protocol.h"
#include "PTVCopyrightViolationViewDelegate-Protocol.h"

@class NSString, UIViewController;

@interface PTVCopyrightViolationViewController : UIViewController <PTVCopyrightViolationViewDelegate>

@property (weak, nonatomic) id <PTVCopyrightViolationViewControllerDelegate> delegate;
@property (readonly, nonatomic) PTVBroadcastController *broadcastController;
@property (readonly, nonatomic) PTVCopyrightViolation *violation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate broadcastController:(id)controller;
- (void)copyrightViolationViewDidSelectConfirmViolation:(id)violation;
- (void)copyrightViolationViewDidSelectDisputeViolation:(id)violation;
- (void)copyrightViolationViewDidSelectHasBroadcastingRights:(id)rights;
- (void)copyrightViolationViewDidSelectDismiss:(id)dismiss;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
- (id)violationView;
- (void)didSelectConfirmViolation;
- (void)didSelectHasBroadcastingRights;
- (void)didSelectDisputeViolation;
- (void)didSelectDismiss;

@end

#endif /* PTVCopyrightViolationViewController_h */
