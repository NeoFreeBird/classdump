//
#ifndef T1MediaAppStoreViewControllerCardContext_h
#define T1MediaAppStoreViewControllerCardContext_h
@import Foundation;

@class NSObject;

@interface T1MediaAppStoreViewControllerCardContext : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *openDeeplinkOrAppStore;
    NSNumber"16@0:8 *imageRatio;
}

/* instance methods */
- (id)initWithImageRatio:(double)ratio openDeeplinkOrAppStore:(id /* block */)store;
- (id)init;

@end

#endif /* T1MediaAppStoreViewControllerCardContext_h */
