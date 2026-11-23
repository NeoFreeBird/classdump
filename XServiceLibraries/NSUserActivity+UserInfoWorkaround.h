//
#ifndef NSUserActivity_UserInfoWorkaround_h
#define NSUserActivity_UserInfoWorkaround_h
@import Foundation;

@interface NSUserActivity (UserInfoWorkaround)

/* instance methods */
- (void)setTfs_userInfo:(id)info;
- (id)tfs_userInfo;

@end

#endif /* NSUserActivity_UserInfoWorkaround_h */
