//
#ifndef TTDTweetDraftListViewControllerDelegate_Protocol_h
#define TTDTweetDraftListViewControllerDelegate_Protocol_h
@import Foundation;

@protocol TTDTweetDraftListViewControllerDelegate

@required

/* required instance methods */
- (void)tweetDraftListViewController:(id)controller didSelectCompositions:(id)compositions;

@optional

@end

#endif /* TTDTweetDraftListViewControllerDelegate_Protocol_h */
