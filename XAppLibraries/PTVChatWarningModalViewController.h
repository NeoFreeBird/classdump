//
#ifndef PTVChatWarningModalViewController_h
#define PTVChatWarningModalViewController_h
@import Foundation;

#include "PTVChatWarningModalViewDelegate-Protocol.h"
#include "PTVInteractiveModal-Protocol.h"
#include "PTVInteractiveModalViewController.h"
#include "PTVLoggedInUserProtocol-Protocol.h"

@class NSObject, NSString;
@protocol PTVChatWarningModalViewControllerDelegate;

@interface PTVChatWarningModalViewController : PTVInteractiveModalViewController <PTVInteractiveModal, PTVChatWarningModalViewDelegate> {
    /* instance variables */
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
}

@property (weak, nonatomic) id <PTVChatWarningModalViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSString *messageBody;
@property (readonly, nonatomic) NSString *keyboardLanguage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)loadView;
- (void)viewDidLoad;
- (void)chatWarningViewDidPressSendMessage;
- (void)chatWarningViewDidPressDontSendMessage;
- (_Bool)interactiveModalShouldDismiss;
- (id)initWithDelegate:(id)delegate messageBody:(id)body keyboardLanguage:(id)language loggedInUser:(id)user;

@end

#endif /* PTVChatWarningModalViewController_h */
