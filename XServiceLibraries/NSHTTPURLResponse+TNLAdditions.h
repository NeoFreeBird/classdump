//
#ifndef NSHTTPURLResponse_TNLAdditions_h
#define NSHTTPURLResponse_TNLAdditions_h
@import Foundation;

@interface NSHTTPURLResponse (TNLAdditions)

/* class methods */
+ (id)tip_responseWithRequestURL:(id)url dataLength:(unsigned long long)length responseMIMEType:(id)mimetype;
+ (id)tnl_parseRetryAfterValueFromString:(id)string;
+ (double)tnl_delayFromRetryAfterValue:(id)value;

/* instance methods */
- (id)tnl_parsedRetryAfterValue;
- (_Bool)tnl_isEqualToResponse:(id)response;
- (id)tnl_contentEncoding;
- (long long)tnl_expectedResponseBodySize;
- (long long)tnl_expectedResponseBodyExpandedDataSize;

@end

#endif /* NSHTTPURLResponse_TNLAdditions_h */
