//
#ifndef TUCDefaultContainerViewFactory_h
#define TUCDefaultContainerViewFactory_h
@import Foundation;

@class NSObject;

@interface TUCDefaultContainerViewFactory : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 unifiedCard;
    @40@0:8:16@24@32 componentViewRegistry;
    @40@0:8:16@24@32 eventDelegate;
}

/* instance methods */
- (id)initWithUnifiedCard:(id)card componentViewRegistry:(id)registry eventDelegate:(id)delegate;
- (void)setEventDelegate:(id)delegate;
- (id)init;

@end

#endif /* TUCDefaultContainerViewFactory_h */
