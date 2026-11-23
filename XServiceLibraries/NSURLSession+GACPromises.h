//
#ifndef NSURLSession_GACPromises_h
#define NSURLSession_GACPromises_h
@import Foundation;

@interface NSURLSession (GACPromises)

/* instance methods */
- (id)gac_dataTaskPromiseWithRequest:(id)request;

@end

#endif /* NSURLSession_GACPromises_h */
