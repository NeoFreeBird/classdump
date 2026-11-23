//
#ifndef TUCViewLayoutState_h
#define TUCViewLayoutState_h
@import Foundation;

#include "TUCComponentContainerViewLayoutState-Protocol.h"
#include "TUCLayoutContext.h"
#include "TUCUnifiedCard.h"

@class NSObject, TFNLayoutMetrics;

@interface TUCViewLayoutState : NSObject

@property (readonly, nonatomic) TFNLayoutMetrics *layoutMetrics;
@property (readonly, nonatomic) TUCUnifiedCard *unifiedCard;
@property (readonly, nonatomic) NSObject<TUCComponentContainerViewLayoutState> *containerLayout;
@property (readonly, nonatomic) TUCLayoutContext *layoutContext;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

/* instance methods */
- (id)initWithUnifiedCard:(id)card layoutContext:(id)context containerLayout:(id)layout;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TUCViewLayoutState_h */
