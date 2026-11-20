//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKSharedConfiguration_h
#define TEKSharedConfiguration_h
@import Foundation;

@class NSObject, NSString, NSUserDefaults;

@interface TEKSharedConfiguration : NSObject {
    /* instance variables */
    NSString *_applicationGroupName;
}

@property (readonly, nonatomic) NSUserDefaults *groupDefaults;

/* instance methods */
- (id)initWithApplicationGroupName:(id)name;
- (long long)shortURLLengthSecure;

@end

#endif /* TEKSharedConfiguration_h */
