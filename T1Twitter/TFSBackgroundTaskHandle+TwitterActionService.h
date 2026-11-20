//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSBackgroundTaskHandle_TwitterActionService_h
#define TFSBackgroundTaskHandle_TwitterActionService_h
@import Foundation;

@interface TFSBackgroundTaskHandle (TwitterActionService) <TASActionBackgroundTaskHandle>

/* instance methods */
- (void)invalidate;

@end

#endif /* TFSBackgroundTaskHandle_TwitterActionService_h */
