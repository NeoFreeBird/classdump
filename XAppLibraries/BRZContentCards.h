//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZContentCards_h
#define BRZContentCards_h
@import Foundation;

@class Chat.DidEndCall, NSArray, NSDate, NSObject;

@interface BRZContentCards : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall viewStore;
    oneway _Atomic Chat.DidEndCall environment;
    oneway _Atomic Chat.DidEndCall _subscribers;
    oneway _Atomic Chat.DidEndCall __atomicCards;
    oneway _Atomic Chat.DidEndCall __atomicLastUpdate;
}

@property (nonatomic, readonly) NSArray *cards;
@property (nonatomic, readonly) NSArray *unviewedCards;
@property (nonatomic, readonly) NSDate *lastUpdate;

/* instance methods */
- (void)requestRefresh;
- (void)requestRefreshWithCompletion:(id /* block */)completion;
- (id)subscribeToUpdates:(id /* block */)updates;
- (id)init;

@end

#endif /* BRZContentCards_h */
