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
