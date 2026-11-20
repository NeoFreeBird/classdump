//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModalSheetLayoutModeMutableHeightController_Protocol_h
#define TFNModalSheetLayoutModeMutableHeightController_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNModalSheetLayoutModeMutableHeightController <NSObject>

@required

@property (readonly, nonatomic) _Bool supportsCustomPreferredHeight;
@property (readonly, nonatomic) double defaultPreferredHeight;
@property (readonly, nonatomic) double maximumHeight;

/* required instance methods */
- (void)updateCurrentHeight:(double)height animated:(_Bool)animated completion:(id /* block */)completion;

@optional

@end

#endif /* TFNModalSheetLayoutModeMutableHeightController_Protocol_h */
