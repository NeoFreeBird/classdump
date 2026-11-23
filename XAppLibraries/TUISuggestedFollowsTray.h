//
#ifndef TUISuggestedFollowsTray_h
#define TUISuggestedFollowsTray_h
@import Foundation;

@class NSObject;

@interface TUISuggestedFollowsTray : NSObject // (Swift)

/* class methods */
+ (id)makeTrayWithTitle:(id)title users:(id)users imagePipeline:(id)pipeline onPresented:(id /* block */)presented onSelectUser:(id /* block */)user onDismissUser:(id /* block */)user;
+ (void)setUsers:(id)users inTray:(id)tray;

/* instance methods */
- (id)init;

@end

#endif /* TUISuggestedFollowsTray_h */
