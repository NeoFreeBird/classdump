//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRTweetComposeAutocompleteSearchBarView_h
#define TCRTweetComposeAutocompleteSearchBarView_h
@import Foundation;

#include "TCRTweetComposeAutocompleteViewController.h"

@class UISearchBar, UIView;

@interface TCRTweetComposeAutocompleteSearchBarView : UIView

@property (readonly, weak) TCRTweetComposeAutocompleteViewController *delegate;
@property (retain, nonatomic) UISearchBar *searchBar;

/* instance methods */
- (id)initWithSearchBar:(id)bar;
- (void)layoutSubviews;
- (id)nextResponder;

@end

#endif /* TCRTweetComposeAutocompleteSearchBarView_h */
