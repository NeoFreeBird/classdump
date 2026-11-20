//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCViewRegistry_h
#define TUCViewRegistry_h
@import Foundation;

#include "TUCViewRegistryProtocol-Protocol.h"

@class NSObject;

@interface TUCViewRegistry : NSObject <TUCViewRegistryProtocol> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 componentViewRegistry;
    @40@0:8:16@24@32 containerViewRegistry;
}

/* instance methods */
- (id)initWithComponentViewRegistry:(id)registry displayType:(long long)type;
- (id)viewForComponent:(id)component;
- (Class)viewClassForComponent:(id)component;
- (id)layoutDelegateForComponent:(id)component;
- (id /* block */)configurationBlockForComponent:(id)component;
- (id)viewForContainer:(id)container unifiedCard:(id)card reusableViews:(id)views eventDelegate:(id)delegate;
- (id)layoutDelegateForContainer:(id)container;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TUCViewRegistry_h */
