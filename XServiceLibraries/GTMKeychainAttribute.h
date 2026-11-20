//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GTMKeychainAttribute_h
#define GTMKeychainAttribute_h
@import Foundation;

@class HasMalware, NSObject;

@interface GTMKeychainAttribute : NSObject { // (Swift)
    /* instance variables */
    HasMalware attribute;
}

/* class methods */
+ (id)useDataProtectionKeychain;
+ (id)keychainAccessGroupWithName:(id)name;

/* instance methods */
- (id)init;

@end

#endif /* GTMKeychainAttribute_h */
