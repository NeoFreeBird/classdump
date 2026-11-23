//
#ifndef NSMutableURLRequest_TNLAdditions_h
#define NSMutableURLRequest_TNLAdditions_h
@import Foundation;

@interface NSMutableURLRequest (TNLAdditions)

/* instance methods */
- (long long)tnl_replaceURLHost:(id)urlhost behavior:(long long)behavior error:(out id *)error;

@end

#endif /* NSMutableURLRequest_TNLAdditions_h */
