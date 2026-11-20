//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIListContentConfiguration_TFNAdditions_h
#define UIListContentConfiguration_TFNAdditions_h
@import Foundation;

@interface UIListContentConfiguration (TFNAdditions)

/* instance methods */
- (void)tfn_applyLayoutMetrics:(id)metrics;
- (void)tfn_applyLayoutMetrics:(id)metrics isAvatarImage:(_Bool)image;

@end

#endif /* UIListContentConfiguration_TFNAdditions_h */
