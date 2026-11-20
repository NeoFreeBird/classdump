//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
