//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSURLAuthenticationChallenge_TNLAdditions_h
#define NSURLAuthenticationChallenge_TNLAdditions_h
@import Foundation;

@interface NSURLAuthenticationChallenge (TNLAdditions)

/* instance methods */
- (_Bool)tnl_isHTTPWWWAuthenticationChallenge;

@end

#endif /* NSURLAuthenticationChallenge_TNLAdditions_h */
