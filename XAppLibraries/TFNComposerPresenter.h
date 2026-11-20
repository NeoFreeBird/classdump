//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNComposerPresenter_h
#define TFNComposerPresenter_h
@import Foundation;

@class NSObject;

@interface TFNComposerPresenter : NSObject

/* class methods */
+ (void)installPresenter:(id)presenter;
+ (void)presentFromViewController:(id)controller;

/* instance methods */
- (id)init;

@end

#endif /* TFNComposerPresenter_h */
