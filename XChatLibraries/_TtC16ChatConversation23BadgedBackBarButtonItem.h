//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation23BadgedBackBarButtonItem_h
#define _TtC16ChatConversation23BadgedBackBarButtonItem_h
@import Foundation;

@class ChatConversation.ChevronBadgeButton, UIAction, UIBarButtonItem;

@interface ChatConversation.BadgedBackBarButtonItem : UIBarButtonItem { // (Swift)
    /* instance variables */
    ChatConversation.ChevronBadgeButton chevronBadgeView;
}

@property (nonatomic, retain) UIAction *primaryAction;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC16ChatConversation23BadgedBackBarButtonItem_h */
