//
#ifndef TFSTwitterPushSettingsManager_Protocol_h
#define TFSTwitterPushSettingsManager_Protocol_h
@import Foundation;

@protocol TFSTwitterPushSettingsManager

@required

/* required instance methods */
- (void)checkinWithForce:(_Bool)force completion:(id /* block */)completion;
- (void)checkinWithForce:(_Bool)force completion:(id /* block */)completion;
- (_Bool)isRemovingPush;
- (void)unregisterForPushWithCompletion:(id /* block */)completion;
- (void)unregisterForPushWithCompletion:(id /* block */)completion;

@optional

@end

#endif /* TFSTwitterPushSettingsManager_Protocol_h */
