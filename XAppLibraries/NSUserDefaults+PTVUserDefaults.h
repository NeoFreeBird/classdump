//
#ifndef NSUserDefaults_PTVUserDefaults_h
#define NSUserDefaults_PTVUserDefaults_h
@import Foundation;

@interface NSUserDefaults (PTVUserDefaults)

/* class methods */
+ (id)ptvUserDefaults;
+ (void)ptvSetObject:(id)object forKey:(id)key inDictionaryAtDefaultName:(id)name;

@end

#endif /* NSUserDefaults_PTVUserDefaults_h */
