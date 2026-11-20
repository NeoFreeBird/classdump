//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UnifiedCardCellLayout_h
#define T1UnifiedCardCellLayout_h
@import Foundation;

@class TFNDataViewCellLayout, TUCUnifiedCard, TUCViewLayoutState, TUCViewRegistry;

@interface T1UnifiedCardCellLayout : TFNDataViewCellLayout

@property (retain, nonatomic) TUCUnifiedCard *unifiedCard;
@property (retain, nonatomic) TUCViewRegistry *viewRegistry;
@property (retain, nonatomic) TUCViewLayoutState *layoutState;

/* instance methods */
- (id)initWithUnifiedCard:(id)card viewRegistry:(id)registry layoutState:(id)state;

@end

#endif /* T1UnifiedCardCellLayout_h */
