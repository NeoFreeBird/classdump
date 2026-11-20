//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
