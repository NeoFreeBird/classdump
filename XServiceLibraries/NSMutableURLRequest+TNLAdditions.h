//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSMutableURLRequest_TNLAdditions_h
#define NSMutableURLRequest_TNLAdditions_h
@import Foundation;

@interface NSMutableURLRequest (TNLAdditions)

/* instance methods */
- (long long)tnl_replaceURLHost:(id)urlhost behavior:(long long)behavior error:(out id *)error;

@end

#endif /* NSMutableURLRequest_TNLAdditions_h */
