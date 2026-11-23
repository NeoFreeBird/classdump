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
