//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSMutableURLRequest_PTVAdditions_h
#define NSMutableURLRequest_PTVAdditions_h
@import Foundation;

@interface NSMutableURLRequest (PTVAdditions)

/* class methods */
+ (id)ptv_URLFormEncodedRequestWithURL:(id)url URLFormEncodedString:(id)string additionalHeaderFields:(id)fields;

@end

#endif /* NSMutableURLRequest_PTVAdditions_h */
