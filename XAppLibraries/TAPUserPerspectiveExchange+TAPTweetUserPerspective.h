//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
