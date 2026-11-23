//
#ifndef T1ResizableHeaderViewControllerDelegate_Protocol_h
#define T1ResizableHeaderViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ResizableHeaderViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (id)resizableHeaderSubheaderViewControllersForResizableHeaderViewController:(id)controller;
- (id)resizableHeaderSubheaderViewControllersForResizableHeaderViewController:(id)controller;
- (void)resizableHeaderViewControllerDidUpdateExpandedHeaderHeight:(id)height;
- (void)resizableHeaderViewControllerDidUpdateCurrentHeaderHeight:(id)height;
- (void)resizableHeaderViewControllerDidRequestRefresh:(id)refresh;
- (void)resizableHeaderViewControllerDidUpdateActionButtons:(id)buttons;

@optional

/* optional instance methods */
- (void)resizableHeaderViewControllerDidStartAnimatingSubheaders:(id)subheaders;
- (void)resizableHeaderViewControllerDidFinishAnimatingSubheaders:(id)subheaders;

@end

#endif /* T1ResizableHeaderViewControllerDelegate_Protocol_h */
