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
