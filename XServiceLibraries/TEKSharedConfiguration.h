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
