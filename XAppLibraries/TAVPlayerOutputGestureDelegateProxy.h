//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
