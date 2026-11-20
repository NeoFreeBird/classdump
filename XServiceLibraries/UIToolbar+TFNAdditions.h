//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIToolbar_TFNAdditions_h
#define UIToolbar_TFNAdditions_h
@import Foundation;

@interface UIToolbar (TFNAdditions)

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
+ (double)tfn_standardHeight;

@end

#endif /* UIToolbar_TFNAdditions_h */
