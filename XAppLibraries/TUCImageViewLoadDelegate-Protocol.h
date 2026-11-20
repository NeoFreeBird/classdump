//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCImageViewLoadDelegate_Protocol_h
#define TUCImageViewLoadDelegate_Protocol_h
@import Foundation;

@protocol TUCImageViewLoadDelegate

@required

/* required instance methods */
- (void)didLoadImage:(id)image;

@optional

@end

#endif /* TUCImageViewLoadDelegate_Protocol_h */
