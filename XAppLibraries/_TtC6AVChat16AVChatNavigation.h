//
#ifndef _TtC6AVChat16AVChatNavigation_h
#define _TtC6AVChat16AVChatNavigation_h
@import Foundation;

@class Chat.AVChatGroupCallCoordinator, Chat.AVChatNavigationManagedRootViewController ?, NSObject;

@interface AVChat.AVChatNavigation : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatNavigationManagedRootViewController ? _rootViewController;
    oneway _Atomic Chat.AVChatGroupCallCoordinator _coordinator;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC6AVChat16AVChatNavigation_h */
