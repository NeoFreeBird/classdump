//
#ifndef ActivityHistoryManager_h
#define ActivityHistoryManager_h
@import Foundation;

@class NSObject;

@interface ActivityHistoryManager : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 stores;
    @40@0:8:16@24@32 flushTimer;
    @40@0:8:16@24@32 progressObservers;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)flushAllStores;

@end

#endif /* ActivityHistoryManager_h */
