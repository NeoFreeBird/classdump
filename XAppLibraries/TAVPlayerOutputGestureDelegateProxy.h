//
#ifndef TAVPlayerOutputGestureDelegateProxy_h
#define TAVPlayerOutputGestureDelegateProxy_h
@import Foundation;

#include "TAVPlayerView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, NSString;

@interface TAVPlayerOutputGestureDelegateProxy : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) TAVPlayerView *playerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;

@end

#endif /* TAVPlayerOutputGestureDelegateProxy_h */
