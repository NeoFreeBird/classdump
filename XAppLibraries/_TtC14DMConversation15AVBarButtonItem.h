//
#ifndef _TtC14DMConversation15AVBarButtonItem_h
#define _TtC14DMConversation15AVBarButtonItem_h
@import Foundation;

@class Swift.Bool, TFNBarButtonItem, _$sSo7UIImageCSg;

@interface DMConversation.AVBarButtonItem : TFNBarButtonItem { // (Swift)
    /* instance variables */
    Swift.Bool shouldAppearDisabled;
    __C.UIImage? iconImage;
    __C.UIImage? disabledImage;
}

@property (nonatomic) _Bool enabled;

/* instance methods */
- (_Bool)isEnabled;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithTitle:(id)title target:(id)target action:(SEL)action;
- (id)initWithConfiguration:(id)configuration target:(id)target action:(SEL)action;
- (id)initWithImage:(id)image target:(id)target action:(SEL)action;
- (id)initWithCustomView:(id)view target:(id)target action:(SEL)action;

@end

#endif /* _TtC14DMConversation15AVBarButtonItem_h */
