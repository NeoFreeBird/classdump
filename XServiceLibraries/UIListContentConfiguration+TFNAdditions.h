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
