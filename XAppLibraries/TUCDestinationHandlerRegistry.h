//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCDestinationHandlerRegistry_h
#define TUCDestinationHandlerRegistry_h
@import Foundation;

@class NSObject;

@interface TUCDestinationHandlerRegistry : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 handlerClasses;
}

/* instance methods */
- (id)init;
- (id)handlerForContext:(id)context;
- (void)registerClass:(Class)_class forType:(unsigned long long)type;

@end

#endif /* TUCDestinationHandlerRegistry_h */
