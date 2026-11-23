//
#ifndef T1QuotedStandardStatusViewLayoutState_h
#define T1QuotedStandardStatusViewLayoutState_h
@import Foundation;

#include "TTACoreStatusViewLayoutState-Protocol.h"

@class NSString, TFNComposableViewLayoutStateSet, TFNStackLayout;

@interface T1QuotedStandardStatusViewLayoutState : TFNComposableViewLayoutStateSet <TTACoreStatusViewLayoutState>

@property (nonatomic) _Bool hideMultiPhotoAltTextBadge;
@property (readonly, nonatomic) _Bool hasNestedQuotedStatus;
@property (nonatomic) _Bool usesMediaFirstLayout;
@property (retain, nonatomic) TFNStackLayout *layout;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) _Bool bodyMayHaveHashflags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isValidAfterStatusUpdate:(id)update;
- (_Bool)isValidAfterExternalUpdateOfType:(long long)type;
- (_Bool)isValidForViewModel:(id)model width:(double)width layoutMetrics:(id)metrics;
- (_Bool)_t1_isValidForViewModel:(id)model width:(double)width layoutMetrics:(id)metrics;

@end

#endif /* T1QuotedStandardStatusViewLayoutState_h */
