//
#ifndef _TtC6ChatUI25ChatHostingNavigationItem_h
#define _TtC6ChatUI25ChatHostingNavigationItem_h
@import Foundation;

@class Swift.Bool, UINavigationItem;

@interface ChatUI.ChatHostingNavigationItem : UINavigationItem { // (Swift)
    /* instance variables */
    Swift.Bool ignoresLeftItemsSupplementBackButton;
}

@property (nonatomic) _Bool leftItemsSupplementBackButton;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithTitle:(id)title;

@end

#endif /* _TtC6ChatUI25ChatHostingNavigationItem_h */
