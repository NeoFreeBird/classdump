//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFAppStoreScribeParametersBuilder_Protocol_h
#define TAFAppStoreScribeParametersBuilder_Protocol_h
@import Foundation;

@protocol TAFAppStoreScribeParametersBuilder

@required

/* required instance methods */
- (void)addParametersForAppId:(id)id category:(id)category parameters:(id)parameters completion:(id /* block */)completion;

@optional

@end

#endif /* TAFAppStoreScribeParametersBuilder_Protocol_h */
