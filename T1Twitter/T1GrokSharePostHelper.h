//
#ifndef T1GrokSharePostHelper_h
#define T1GrokSharePostHelper_h
@import Foundation;

@class NSObject;

@interface T1GrokSharePostHelper : NSObject // (Swift)

/* class methods */
+ (_Bool)isShareURL:(id)url;
+ (id)shareIDInURL:(id)url;
+ (_Bool)isSharePost:(id)post;

/* instance methods */
- (id)init;

@end

#endif /* T1GrokSharePostHelper_h */
