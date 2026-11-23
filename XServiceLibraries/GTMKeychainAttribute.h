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
