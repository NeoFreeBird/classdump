//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUITweetAudienceSelectionModelObserver_Protocol_h
#define TUITweetAudienceSelectionModelObserver_Protocol_h
@import Foundation;

@protocol TUITweetAudienceSelectionModelObserver

@required

/* required instance methods */
- (void)tweetAudienceSelectionModelDidChangeSelection:(id)selection;
- (void)tweetAudienceSelectionModelDidUpdate:(id)update;
- (void)tweetAudienceSelectionModel:(id)model didCreateNewAudienceReference:(id)reference;

@optional

@end

#endif /* TUITweetAudienceSelectionModelObserver_Protocol_h */
