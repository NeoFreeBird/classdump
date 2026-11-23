//
#ifndef TUCComponentContainerViewRegistry_h
#define TUCComponentContainerViewRegistry_h
@import Foundation;

@class NSObject;

@interface TUCComponentContainerViewRegistry : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 classMap;
}

/* class methods */
+ (id)registryForDisplayType:(long long)type;

/* instance methods */
- (id)layoutDelegateForContainer:(id)container;
- (id)containerViewForUnifiedCard:(id)card reusableComponentViews:(id)views componentViewRegistry:(id)registry eventDelegate:(id)delegate;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TUCComponentContainerViewRegistry_h */
