//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
