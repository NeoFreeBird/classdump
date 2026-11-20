//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVPlayerItem_TAVSafePropertyAccessors_h
#define AVPlayerItem_TAVSafePropertyAccessors_h
@import Foundation;

@interface AVPlayerItem (TAVSafePropertyAccessors)

/* instance methods */
- (struct { long long x0; int x1; unsigned int x2; long long x3; })tav_duration;
- (_Bool)tav_shouldApplyMediaSelectionOption:(id)option;
- (void)tav_selectLegibleMediaOptionAutomaticallyWithPreferredOption:(id)option;
- (void)tav_disableLegibleMedia;

@end

#endif /* AVPlayerItem_TAVSafePropertyAccessors_h */
