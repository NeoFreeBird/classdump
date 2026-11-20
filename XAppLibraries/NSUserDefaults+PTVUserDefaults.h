//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
