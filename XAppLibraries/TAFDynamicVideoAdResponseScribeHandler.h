//
#ifndef TAFDynamicVideoAdResponseScribeHandler_h
#define TAFDynamicVideoAdResponseScribeHandler_h
@import Foundation;

@class NSObject;

@interface TAFDynamicVideoAdResponseScribeHandler : NSObject

/* class methods */
+ (void)scribeCacheHitWithError:(id)error videoAdsTweet:(id)tweet scribe:(id)scribe;
+ (id)errorForDynamicAdResponseItem:(id)item videoAdsTweet:(id)tweet batchFetchManager:(id)manager;

/* instance methods */
- (id)init;

@end

#endif /* TAFDynamicVideoAdResponseScribeHandler_h */
