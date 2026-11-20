//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
