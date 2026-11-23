//
#ifndef UIGestureRecognizerDelegate_Protocol_h
#define UIGestureRecognizerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIGestureRecognizerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceivePress:(id)press;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveEvent:(id)event;

@end

#endif /* UIGestureRecognizerDelegate_Protocol_h */
