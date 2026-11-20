//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBComponentContainer_h
#define ONBComponentContainer_h
@import Foundation;

@class TFNFlexibleLayoutView;

@interface ONBComponentContainer : TFNFlexibleLayoutView

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFitsSize:(struct CGSize { double x0; double x1; })size layoutMetrics:(id)metrics;

@end

#endif /* ONBComponentContainer_h */
