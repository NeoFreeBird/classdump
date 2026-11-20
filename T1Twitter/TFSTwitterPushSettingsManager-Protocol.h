//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
