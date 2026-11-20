//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFBottomOverlayContentViewable_Protocol_h
#define TAFBottomOverlayContentViewable_Protocol_h
@import Foundation;

#include "TAFBottomOverlayContentViewableDelegate-Protocol.h"

@protocol TAFBottomOverlayContentViewable

@required

@property (nonatomic, retain) id <TAFBottomOverlayContentViewableDelegate> delegate;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@optional

@end

#endif /* TAFBottomOverlayContentViewable_Protocol_h */
