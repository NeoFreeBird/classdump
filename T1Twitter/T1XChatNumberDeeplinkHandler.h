//
#ifndef T1XChatNumberDeeplinkHandler_h
#define T1XChatNumberDeeplinkHandler_h
@import Foundation;

@class NSObject;

@interface T1XChatNumberDeeplinkHandler : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *isApplyingNumber;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)handleForScreenName:(id)name chatNumber:(id)number userID:(long long)id account:(id)account appNavigation:(id)navigation panel:(long long)panel source:(long long)source navigationContext:(id)context sourceNavigationMetadata:(id)metadata profileOptions:(unsigned long long)options completion:(id /* block */)completion;

@end

#endif /* T1XChatNumberDeeplinkHandler_h */
