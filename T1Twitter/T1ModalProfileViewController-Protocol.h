//
#ifndef T1ModalProfileViewController_Protocol_h
#define T1ModalProfileViewController_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "T1ModalViewControllerNonModalPresentationDelegate-Protocol.h"
#include "T1ProfileViewController-Protocol.h"

@class TFSTwitterScribeContext, UIViewController;

@protocol T1ModalProfileViewController <NSObject>

@required

@property (readonly, nonatomic) UIViewController<T1ProfileViewController> *profileContentViewController;
@property (readonly, nonatomic) UIViewController *presentedFromViewController;
@property (weak, nonatomic) id <T1ModalViewControllerNonModalPresentationDelegate> nonModalPresentationDelegate;
@property (readonly, nonatomic) TFSTwitterScribeContext *scribeContext;

/* required instance methods */
- (void)dismissAndPresentViewControllerCreatedFromBlock:(id /* block */)block;

@optional

@end

#endif /* T1ModalProfileViewController_Protocol_h */
