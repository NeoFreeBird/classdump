//
#ifndef PTVScrollViewDelegate_Protocol_h
#define PTVScrollViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVScrollViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)touchesShouldCancelInContentView:(id)view;
- (_Bool)touchesShouldBegin:(id)begin withEvent:(id)event inContentView:(id)view;
- (_Bool)ptvScrollViewShouldReceiveTouch:(id)touch;

@end

#endif /* PTVScrollViewDelegate_Protocol_h */
