//
#ifndef PTVBroadcastOverflowScrollViewController_h
#define PTVBroadcastOverflowScrollViewController_h
@import Foundation;

#include "PTVBroadcastOverflowScrollContainerView.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSString, UIViewController;

@interface PTVBroadcastOverflowScrollViewController : UIViewController <UIScrollViewDelegate>

@property (readonly, nonatomic) PTVBroadcastOverflowScrollContainerView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)loadView;
- (void)viewDidLoad;
- (id)scrollViewForContainerView;

@end

#endif /* PTVBroadcastOverflowScrollViewController_h */
