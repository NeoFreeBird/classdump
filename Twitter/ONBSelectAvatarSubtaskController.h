//
#ifndef ONBSelectAvatarSubtaskController_h
#define ONBSelectAvatarSubtaskController_h
@import Foundation;

#include "ONBSelectAvatarViewControllerDelegate-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFSelectAvatarSubtask, T1PhotoSelection;

@interface ONBSelectAvatarSubtaskController : ONBSubtaskController <ONBSelectAvatarViewControllerDelegate> {
    /* instance variables */
    T1PhotoSelection *_photo;
    OCFSelectAvatarSubtask *_subtask;
    NSString *_flowToken;
    id <ONBSubtaskControllerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (id)subtaskData;
- (_Bool)requiresAccountToStart;
- (void)selectAvatarViewController:(id)controller didTapNextWithPhoto:(id)photo;
- (void)selectAvatarViewControllerDidTapSkip:(id)skip;
- (void)selectAvatarViewControllerDidTapAddImage:(id)image;
- (void)private_finishWithPhoto:(id)photo;

@end

#endif /* ONBSelectAvatarSubtaskController_h */
