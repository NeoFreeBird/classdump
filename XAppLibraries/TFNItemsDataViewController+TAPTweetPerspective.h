//
#ifndef TFNItemsDataViewController_TAPTweetPerspective_h
#define TFNItemsDataViewController_TAPTweetPerspective_h
@import Foundation;

@interface TFNItemsDataViewController (TAPTweetPerspective) <OCFContentSizing>

/* instance methods */
- (double)ocf_calculatedContentHeight;
- (void)useDataViewAdapterForTweetPerspectives:(id)perspectives;

@end

#endif /* TFNItemsDataViewController_TAPTweetPerspective_h */
