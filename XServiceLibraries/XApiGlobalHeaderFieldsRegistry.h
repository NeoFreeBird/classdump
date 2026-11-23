//
#ifndef XApiGlobalHeaderFieldsRegistry_h
#define XApiGlobalHeaderFieldsRegistry_h
@import Foundation;

@class NSArray, NSObject;

@interface XApiGlobalHeaderFieldsRegistry : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 lock;
    B24@0:8@"NSString"16 registeredProviders;
}

@property (nonatomic, readonly) NSArray *providers;

/* class methods */
+ (id)shared;

/* instance methods */
- (void)addProvider:(id)provider;
- (void)removeProvider:(id)provider;
- (id)init;

@end

#endif /* XApiGlobalHeaderFieldsRegistry_h */
