//
#ifndef NSURLResponse_TNLCacheAdditions_h
#define NSURLResponse_TNLCacheAdditions_h
@import Foundation;

@interface NSURLResponse (TNLCacheAdditions)

/* instance methods */
- (unsigned long long)tnu_textEncoding;
- (_Bool)tnu_hasHTMLMIMEType;
- (_Bool)tnu_hasPassbookMIMEType;
- (_Bool)tnl_isEqualToResponse:(id)response;
- (_Bool)tnl_wasCachedResponse;

@end

#endif /* NSURLResponse_TNLCacheAdditions_h */
