//
#ifndef NSMutableURLRequest_PTVAdditions_h
#define NSMutableURLRequest_PTVAdditions_h
@import Foundation;

@interface NSMutableURLRequest (PTVAdditions)

/* class methods */
+ (id)ptv_URLFormEncodedRequestWithURL:(id)url URLFormEncodedString:(id)string additionalHeaderFields:(id)fields;

@end

#endif /* NSMutableURLRequest_PTVAdditions_h */
