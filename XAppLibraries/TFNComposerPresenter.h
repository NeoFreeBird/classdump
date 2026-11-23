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
