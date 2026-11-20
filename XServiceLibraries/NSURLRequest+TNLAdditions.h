//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSURLRequest_TNLAdditions_h
#define NSURLRequest_TNLAdditions_h
@import Foundation;

@interface NSURLRequest (TNLAdditions)

/* instance methods */
- (id)tnl_hostName;

@end

#endif /* NSURLRequest_TNLAdditions_h */
