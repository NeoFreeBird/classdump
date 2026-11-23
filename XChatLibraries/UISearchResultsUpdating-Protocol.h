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
