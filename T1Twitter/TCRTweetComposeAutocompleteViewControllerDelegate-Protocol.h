//
#ifndef TCRTweetComposeAutocompleteViewControllerDelegate_Protocol_h
#define TCRTweetComposeAutocompleteViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRTweetComposeAutocompleteViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)tweetComposeAutocompleteViewController:(id)controller didSelectItem:(id)item;
- (void)tweetComposeAutocompleteViewController:(id)controller textDidChange:(id)change;
- (void)tweetComposeAutocompleteViewControllerDidEnterFullScreen:(id)screen;
- (id)currentPrefixForTweetComposeAutocompleteViewController:(id)controller;

@optional

@end

#endif /* TCRTweetComposeAutocompleteViewControllerDelegate_Protocol_h */
