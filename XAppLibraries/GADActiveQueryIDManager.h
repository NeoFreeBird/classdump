//
#ifndef GADActiveQueryIDManager_h
#define GADActiveQueryIDManager_h
@import Foundation;

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface GADActiveQueryIDManager : NSObject {
    /* instance variables */
    NSMutableArray *_queryIDs;
    NSObject<OS_dispatch_queue> *_queue;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)addQueryID:(id)id;
- (void)removeOneObjectFromMutableArray:(id)array;
- (void)removeQueryID:(id)id;

@end

#endif /* GADActiveQueryIDManager_h */
