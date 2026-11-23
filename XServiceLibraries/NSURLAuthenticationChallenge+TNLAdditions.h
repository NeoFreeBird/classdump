//
#ifndef NSURLAuthenticationChallenge_TNLAdditions_h
#define NSURLAuthenticationChallenge_TNLAdditions_h
@import Foundation;

@interface NSURLAuthenticationChallenge (TNLAdditions)

/* instance methods */
- (_Bool)tnl_isHTTPWWWAuthenticationChallenge;

@end

#endif /* NSURLAuthenticationChallenge_TNLAdditions_h */
