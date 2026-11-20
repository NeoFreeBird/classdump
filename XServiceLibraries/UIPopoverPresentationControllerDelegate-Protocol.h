//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIPopoverPresentationControllerDelegate_Protocol_h
#define UIPopoverPresentationControllerDelegate_Protocol_h
@import Foundation;

#include "UIAdaptivePresentationControllerDelegate-Protocol.h"

@protocol UIPopoverPresentationControllerDelegate <UIAdaptivePresentationControllerDelegate>

@required

@optional

/* optional instance methods */
- (void)prepareForPopoverPresentation:(id)presentation;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)popover;
- (void)popoverPresentationControllerDidDismissPopover:(id)popover;
- (void)popoverPresentationController:(id)controller willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect inView:(inout id *)view;
- (void)popoverPresentationController:(id)controller willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect inView:(inout id *)view;

@end

#endif /* UIPopoverPresentationControllerDelegate_Protocol_h */
