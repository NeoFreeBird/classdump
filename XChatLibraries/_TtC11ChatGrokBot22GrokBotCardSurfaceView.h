//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot22GrokBotCardSurfaceView_h
#define _TtC11ChatGrokBot22GrokBotCardSurfaceView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtC11ChatGrokBot21GrokBotCardChromeView.h"

@class ChatGrokBot.GrokBotCardSurfaceView.Padding, Swift.Bool, _$sSo6UIViewC;

@interface ChatGrokBot.GrokBotCardSurfaceView : ChatGrokBot.GrokBotCardChromeView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    Swift.Bool ownsHorizontalPans;
    __C.UIView wrappedContentView;
    ChatGrokBot.GrokBotCardSurfaceView.Padding padding;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)didTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot22GrokBotCardSurfaceView_h */
