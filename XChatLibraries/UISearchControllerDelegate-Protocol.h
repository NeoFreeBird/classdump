//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UISearchControllerDelegate_Protocol_h
#define UISearchControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UISearchControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)willPresentSearchController:(id)controller;
- (void)didPresentSearchController:(id)controller;
- (void)willDismissSearchController:(id)controller;
- (void)didDismissSearchController:(id)controller;
- (void)presentSearchController:(id)controller;
- (void)searchController:(id)controller willChangeToSearchBarPlacement:(long long)placement;
- (void)searchController:(id)controller willChangeToSearchBarPlacement:(long long)placement;
- (void)searchController:(id)controller didChangeFromSearchBarPlacement:(long long)placement;
- (void)searchController:(id)controller didChangeFromSearchBarPlacement:(long long)placement;

@end

#endif /* UISearchControllerDelegate_Protocol_h */
