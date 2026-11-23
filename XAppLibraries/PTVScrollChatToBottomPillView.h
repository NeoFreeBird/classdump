//
#ifndef PTVScrollChatToBottomPillView_h
#define PTVScrollChatToBottomPillView_h
@import Foundation;

#include "PTVButton.h"

@interface PTVScrollChatToBottomPillView : PTVButton

@property (nonatomic) unsigned long long numberOfUnreadMessages;

/* class methods */
+ (id)CaretImage;
+ (id)TitleFont;
+ (id)TitleColor;
+ (id)BackgroundColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)animateNewMessageReceived;
- (void)updateButtonTitle;

@end

#endif /* PTVScrollChatToBottomPillView_h */
