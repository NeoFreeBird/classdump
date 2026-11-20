//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
