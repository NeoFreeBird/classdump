//
#ifndef T1XAuthCredentialsManagerAdapter_h
#define T1XAuthCredentialsManagerAdapter_h
@import Foundation;

@class NSObject;

@interface T1XAuthCredentialsManagerAdapter : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *tfsAuthRulesObservers;
}

/* class methods */
+ (void)configureXAuthCredentialsManagerWithConsumerKey:(id)key consumerSecret:(id)secret;
+ (id)sharedAdapter;

/* instance methods */
- (id)init;

@end

#endif /* T1XAuthCredentialsManagerAdapter_h */
