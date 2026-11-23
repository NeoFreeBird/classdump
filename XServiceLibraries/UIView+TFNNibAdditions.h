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
