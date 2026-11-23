//
#ifndef T1InlineComposeAutocompleteControllerDelegate_Protocol_h
#define T1InlineComposeAutocompleteControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1InlineComposeAutocompleteControllerDelegate <NSObject>

@required

/* required instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inlineComposeAutocompleteController:(id)controller autocompletePopoverPresentingRectForAutocompletePopover:(id)popover;
- (id)inlineComposeAutocompleteController:(id)controller autocompletePopoverPresentingViewForAutocompletePopover:(id)popover;

@optional

/* optional instance methods */
- (void)inlineComposeAutocompleteControllerDidTapCloseButton:(id)button;
- (void)inlineComposeAutocompleteController:(id)controller didChangeDisplayModeFromMode:(long long)mode toNewMode:(long long)mode;

@end

#endif /* T1InlineComposeAutocompleteControllerDelegate_Protocol_h */
