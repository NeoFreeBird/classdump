//
#ifndef GADQueryInfoCollection_h
#define GADQueryInfoCollection_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GADQueryInfoCollection : NSObject {
    /* instance variables */
    NSMutableArray *_requestIDs;
    NSMutableDictionary *_queryInfoMap;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)addQueryInfo:(id)info;
- (id)queryInfoForRequestID:(id)id renderID:(id)id maxRenderCount:(unsigned long long)count error:(id *)error;
- (void)cleanUpExpiredQueryInfos;
- (void)cleanUpOverflowingQueryInfos;

@end

#endif /* GADQueryInfoCollection_h */
