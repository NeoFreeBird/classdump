//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNNavigationViewHiding_Protocol_h
#define TFNNavigationViewHiding_Protocol_h
@import Foundation;

@protocol TFNNavigationViewHiding

@required

/* required instance methods */
- (void)tfn_setAlpha:(double)alpha;

@optional

@end

#endif /* TFNNavigationViewHiding_Protocol_h */
