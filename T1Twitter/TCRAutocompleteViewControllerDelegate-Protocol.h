//
#ifndef TCRAutocompleteViewControllerDelegate_Protocol_h
#define TCRAutocompleteViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRAutocompleteViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)autocompleteViewController:(id)controller didSelectItem:(id)item;
- (void)autocompleteViewController:(id)controller scrollViewDidScroll:(id)scroll;

@end

#endif /* TCRAutocompleteViewControllerDelegate_Protocol_h */
