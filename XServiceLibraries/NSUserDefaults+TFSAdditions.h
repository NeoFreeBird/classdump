//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSUserDefaults_TFSAdditions_h
#define NSUserDefaults_TFSAdditions_h
@import Foundation;

@interface NSUserDefaults (TFSAdditions)

/* class methods */
+ (id)tfs_sharedApplicationGroupDefaults;

/* instance methods */
- (void)tfs_setObjectAndNotify:(id)notify forKey:(id)key;

@end

#endif /* NSUserDefaults_TFSAdditions_h */
