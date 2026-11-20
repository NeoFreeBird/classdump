//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
