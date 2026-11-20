//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSURLSession_GACPromises_h
#define NSURLSession_GACPromises_h
@import Foundation;

@interface NSURLSession (GACPromises)

/* instance methods */
- (id)gac_dataTaskPromiseWithRequest:(id)request;

@end

#endif /* NSURLSession_GACPromises_h */
