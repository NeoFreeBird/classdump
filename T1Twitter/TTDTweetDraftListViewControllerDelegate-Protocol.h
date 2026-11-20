//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
