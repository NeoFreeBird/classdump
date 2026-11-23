//
#ifndef TFNTabbedViewControllerDelegate_Protocol_h
#define TFNTabbedViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTabbedViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)tabbedViewController:(id)controller willSelectViewControllerAtIndex:(long long)index;
- (void)tabbedViewController:(id)controller didSelectViewControllerAtIndex:(long long)index;

@end

#endif /* TFNTabbedViewControllerDelegate_Protocol_h */
