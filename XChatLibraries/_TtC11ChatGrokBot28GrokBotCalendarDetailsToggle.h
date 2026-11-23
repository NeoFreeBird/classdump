//
#ifndef _TtC11ChatGrokBot28GrokBotCalendarDetailsToggle_h
#define _TtC11ChatGrokBot28GrokBotCalendarDetailsToggle_h
@import Foundation;

@class UIControl, _$sSo11UIImageViewC, _$syycSg;

@interface ChatGrokBot.GrokBotCalendarDetailsToggle : UIControl { // (Swift)
    /* instance variables */
    __C.UIImageView chevronView;
    (() -> ())? onToggle;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)didTap;

@end

#endif /* _TtC11ChatGrokBot28GrokBotCalendarDetailsToggle_h */
