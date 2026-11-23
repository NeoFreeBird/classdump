//
#ifndef TAPUserPerspectiveExchange_TAPTweetUserPerspective_h
#define TAPUserPerspectiveExchange_TAPTweetUserPerspective_h
@import Foundation;

@interface TAPUserPerspectiveExchange (TAPTweetUserPerspective)

/* class methods */
+ (id)compositionPerspectiveForPerspectiveOrNil:(id)nil;
+ (id)compositionPerspectiveForPerspective:(id)perspective;
+ (id)twitterStatusUserPerspectiveForUserPerspective:(id)perspective;

@end

#endif /* TAPUserPerspectiveExchange_TAPTweetUserPerspective_h */
