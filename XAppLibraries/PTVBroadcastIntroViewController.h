//
#ifndef PTVBroadcastIntroViewController_h
#define PTVBroadcastIntroViewController_h
@import Foundation;

#include "PTVBroadcastController.h"
#include "PTVBroadcastIntroViewDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol PTVBroadcastIntroViewControllerDelegate;

@interface PTVBroadcastIntroViewController : UIViewController <PTVBroadcastIntroViewDelegate>

@property (readonly, nonatomic) PTVBroadcastController *broadcastController;
@property (weak, nonatomic) id <PTVBroadcastIntroViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)loadView;
- (void)broadcastIntroViewDidReceiveTap:(id)tap;
- (void)broadcastIntroViewDidTapBroadcaster:(id)broadcaster;
- (id)initWithDelegate:(id)delegate broadcastController:(id)controller;

@end

#endif /* PTVBroadcastIntroViewController_h */
