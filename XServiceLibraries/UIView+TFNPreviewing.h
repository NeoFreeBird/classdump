//
#ifndef UIView_TFNPreviewing_h
#define UIView_TFNPreviewing_h
@import Foundation;

@interface UIView (TFNPreviewing)

/* instance methods */
- (long long)tfn_previewingState;
- (void)tfn_previewingStateDidChange;

@end

#endif /* UIView_TFNPreviewing_h */
