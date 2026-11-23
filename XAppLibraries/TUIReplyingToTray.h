//
#ifndef TUIReplyingToTray_h
#define TUIReplyingToTray_h
@import Foundation;

@class NSObject;

@interface TUIReplyingToTray : NSObject // (Swift)

/* class methods */
+ (id)makeTrayWithTitle:(id)title userReferences:(id)references unmentionedUserIDs:(id)ids account:(id)account actionService:(id)service imagePipeline:(id)pipeline followScribeContext:(id)context userDataSource:(id /* block */)source onPresented:(id /* block */)presented onSelectUser:(id /* block */)user onFollowFailed:(id /* block */)failed;

/* instance methods */
- (id)init;

@end

#endif /* TUIReplyingToTray_h */
