//
#ifndef T1InlineMediaViewDelegate_Protocol_h
#define T1InlineMediaViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1InlineMediaViewDelegate <NSObject>

@required

/* required instance methods */
- (void)inlineMediaViewWasTapped:(id)tapped withEvent:(id)event;
- (_Bool)inlineMediaViewShouldShowVideoDetailsInOverlay:(id)overlay;

@optional

/* optional instance methods */
- (void)inlineMediaViewWasDoubleTapped:(id)tapped;
- (void)inlineMediaView:(id)view wasLongPressedWithGestureRecognizer:(id)recognizer;
- (void)mediaView:(id)view willPresentPlayerView:(id)view;
- (void)mediaView:(id)view didDetachPlayerView:(id)view;

@end

#endif /* T1InlineMediaViewDelegate_Protocol_h */
