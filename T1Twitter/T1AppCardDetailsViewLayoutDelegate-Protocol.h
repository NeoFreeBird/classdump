//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppCardDetailsViewLayoutDelegate_Protocol_h
#define T1AppCardDetailsViewLayoutDelegate_Protocol_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"

@protocol T1AppCardDetailsViewLayoutDelegate <TFNLayoutableViewLayoutDelegate>

@required

/* class methods */
+ (id)sharedLayoutDelegate;

/* required instance methods */
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (long long)TFNButtonSizeForViewModel:(id)model;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsets;
- (id)titleFont;
- (id)titleTextColorForUnifiedCards:(_Bool)cards;
- (id)subtitleFontForUnifiedCards:(_Bool)cards;

@optional

@end

#endif /* T1AppCardDetailsViewLayoutDelegate_Protocol_h */
