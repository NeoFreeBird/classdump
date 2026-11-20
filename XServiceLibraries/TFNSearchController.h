//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSearchController_h
#define TFNSearchController_h
@import Foundation;

#include "TFNSearchBar.h"

@class UISearchController;

@interface TFNSearchController : UISearchController

@property (readonly, nonatomic) TFNSearchBar *tfnSearchBar;

/* instance methods */
- (id)searchBar;

@end

#endif /* TFNSearchController_h */
