//
#ifndef T1TabbedContainerViewControllerDelegate_Protocol_h
#define T1TabbedContainerViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TabbedContainerViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)tabbedContainerViewControllerView:(id)view didChangeViewDockedBarsSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;

@end

#endif /* T1TabbedContainerViewControllerDelegate_Protocol_h */
