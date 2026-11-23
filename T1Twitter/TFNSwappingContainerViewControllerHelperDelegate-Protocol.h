//
#ifndef TFNSwappingContainerViewControllerHelperDelegate_Protocol_h
#define TFNSwappingContainerViewControllerHelperDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIView;

@protocol TFNSwappingContainerViewControllerHelperDelegate <NSObject>

@required

@optional

@property (readonly, nonatomic) UIView *swappingContainerView;

/* optional instance methods */
- (void)contentViewControllerWillSwapWithTransitionCoordinator:(id)coordinator;

@end

#endif /* TFNSwappingContainerViewControllerHelperDelegate_Protocol_h */
