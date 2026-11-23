//
#ifndef NSURLSessionConfiguration_TNLAdditions_h
#define NSURLSessionConfiguration_TNLAdditions_h
@import Foundation;

@interface NSURLSessionConfiguration (TNLAdditions)

/* class methods */
+ (id)tnl_backgroundSessionConfigurationWithTaggedIdentifier:(id)identifier;
+ (_Bool)tnl_URLSessionCanUseTaskTransactionMetrics;
+ (_Bool)tnl_URLSessionSupportsDecodingBrotliContentEncoding;
+ (_Bool)tnl_URLSessionCanUseWaitsForConnectivity;

/* instance methods */
- (void)tnl_insertProtocolClasses:(id)classes;

@end

#endif /* NSURLSessionConfiguration_TNLAdditions_h */
