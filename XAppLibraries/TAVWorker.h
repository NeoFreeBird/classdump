//
#ifndef TAVWorker_h
#define TAVWorker_h
@import Foundation;

@class NSObject;

@interface TAVWorker : NSObject

/* class methods */
+ (_Bool)isSingleThreaded;
+ (void)setIsSingleThreaded:(_Bool)threaded;
+ (_Bool)testTurkey;
+ (void)setTestTurkey:(_Bool)turkey;
+ (id)queue;
+ (void)enqueue:(id)enqueue;
+ (void)enqueueBlock:(id /* block */)block withName:(id)name;

@end

#endif /* TAVWorker_h */
