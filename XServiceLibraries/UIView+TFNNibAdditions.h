//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIView_TFNNibAdditions_h
#define UIView_TFNNibAdditions_h
@import Foundation;

@interface UIView (TFNNibAdditions)

/* class methods */
+ (id)tfn_instanceFromNIB;
+ (id)tfn_instanceFromNIBInBundle:(id)bundle;

@end

#endif /* UIView_TFNNibAdditions_h */
