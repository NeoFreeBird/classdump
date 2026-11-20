//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
