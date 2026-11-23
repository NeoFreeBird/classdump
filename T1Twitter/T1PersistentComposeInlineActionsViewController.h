//
#ifndef T1PersistentComposeInlineActionsViewController_h
#define T1PersistentComposeInlineActionsViewController_h
@import Foundation;

#include "T1PersistentComposeInlineActionsViewControllerDelegate-Protocol.h"
#include "TTACoreStatusViewModel-Protocol.h"
#include "TTAStatusInlineActionsViewDelegate-Protocol.h"

@class NSString, TFNTwitterAccount, TFNViewController;

@interface T1PersistentComposeInlineActionsViewController : TFNViewController <TTAStatusInlineActionsViewDelegate>

@property (weak, nonatomic) id <T1PersistentComposeInlineActionsViewControllerDelegate> delegate;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) id <TTACoreStatusViewModel> statusViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)internalView;
- (void)loadView;
- (void)viewDidLoad;
- (void)inlineActionsView:(id)view didTapInlineActionWithType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didLongPressInlineActionWithType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didBeginLongPressForInlineActionType:(unsigned long long)type;
- (void)inlineActionsView:(id)view didStartBrandedAnimationFromInlineActionWithType:(unsigned long long)type;
- (void)statusItemDidUpdate:(id)update;
- (void)_t1_updateViewModel;
- (void)_t1_handleEventType:(id)type forInlineActionsView:(id)view inlineActionType:(unsigned long long)type;

@end

#endif /* T1PersistentComposeInlineActionsViewController_h */
