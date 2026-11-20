//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UISearchResultsUpdating_Protocol_h
#define UISearchResultsUpdating_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UISearchResultsUpdating <NSObject>

@required

/* required instance methods */
- (void)updateSearchResultsForSearchController:(id)controller;
- (void)updateSearchResultsForSearchController:(id)controller;

@optional

/* optional instance methods */
- (void)updateSearchResultsForSearchController:(id)controller selectingSearchSuggestion:(id)suggestion;
- (void)updateSearchResultsForSearchController:(id)controller selectingSearchSuggestion:(id)suggestion;

@end

#endif /* UISearchResultsUpdating_Protocol_h */
