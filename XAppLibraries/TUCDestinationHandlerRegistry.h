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
