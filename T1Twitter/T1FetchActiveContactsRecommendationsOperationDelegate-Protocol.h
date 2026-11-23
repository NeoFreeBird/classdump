//
#ifndef T1FetchActiveContactsRecommendationsOperationDelegate_Protocol_h
#define T1FetchActiveContactsRecommendationsOperationDelegate_Protocol_h
@import Foundation;

@protocol T1FetchActiveContactsRecommendationsOperationDelegate

@required

/* required instance methods */
- (void)fetchActiveContactsRecommendationsOperation:(id)operation didReceiveRecommendations:(id)recommendations;
- (void)fetchActiveContactsRecommendationsOperation:(id)operation didFailWithError:(id)error;

@optional

@end

#endif /* T1FetchActiveContactsRecommendationsOperationDelegate_Protocol_h */
