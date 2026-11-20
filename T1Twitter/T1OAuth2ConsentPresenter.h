//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1OAuth2ConsentPresenter_h
#define T1OAuth2ConsentPresenter_h
@import Foundation;

@class NSObject;

@interface T1OAuth2ConsentPresenter : NSObject // (Swift)

/* class methods */
+ (void)presentWhenReady:(id)ready from:(id)from;

/* instance methods */
- (id)init;

@end

#endif /* T1OAuth2ConsentPresenter_h */
