//
#ifndef UISearchBarDelegate_Protocol_h
#define UISearchBarDelegate_Protocol_h
@import Foundation;

#include "UIBarPositioningDelegate-Protocol.h"

@protocol UISearchBarDelegate <UIBarPositioningDelegate>

@required

@optional

/* optional instance methods */
- (_Bool)searchBarShouldBeginEditing:(id)editing;
- (void)searchBarTextDidBeginEditing:(id)editing;
- (_Bool)searchBarShouldEndEditing:(id)editing;
- (void)searchBarTextDidEndEditing:(id)editing;
- (void)searchBar:(id)bar textDidChange:(id)change;
- (_Bool)searchBar:(id)bar shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (_Bool)searchBar:(id)bar shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (_Bool)searchBar:(id)bar shouldChangeTextInRanges:(id)ranges replacementText:(id)text;
- (void)searchBarSearchButtonClicked:(id)clicked;
- (void)searchBarBookmarkButtonClicked:(id)clicked;
- (void)searchBarCancelButtonClicked:(id)clicked;
- (void)searchBarResultsListButtonClicked:(id)clicked;
- (void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(long long)change;

@end

#endif /* UISearchBarDelegate_Protocol_h */
