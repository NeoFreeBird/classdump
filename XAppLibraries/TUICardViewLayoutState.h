//
#ifndef TUICardViewLayoutState_h
#define TUICardViewLayoutState_h
@import Foundation;

#include "TFNTwitterCardContext.h"
#include "TUICardViewLayoutStateValidation-Protocol.h"

@class NSObject, NSString, TFNLayoutMetrics;

@interface TUICardViewLayoutState : NSObject <TUICardViewLayoutStateValidation>

@property (retain, nonatomic) TFNTwitterCardContext *cardContext;
@property (retain, nonatomic) TFNLayoutMetrics *layoutMetrics;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */

@end

#endif /* TUICardViewLayoutState_h */
