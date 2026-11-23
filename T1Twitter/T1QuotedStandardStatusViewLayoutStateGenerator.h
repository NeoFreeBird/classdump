//
#ifndef T1QuotedStandardStatusViewLayoutStateGenerator_h
#define T1QuotedStandardStatusViewLayoutStateGenerator_h
@import Foundation;

#include "TTACoreStatusViewLayoutStateGenerator-Protocol.h"

@class NSObject, NSString;

@interface T1QuotedStandardStatusViewLayoutStateGenerator : NSObject <TTACoreStatusViewLayoutStateGenerator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_t1_customizeLayoutMetrics:(id)metrics width:(double)width viewModel:(id)model;

/* instance methods */
- (id)layoutStateForViewModel:(id)model options:(unsigned long long)options account:(id)account layoutMetrics:(id)metrics withPreviousLayoutState:(id)state;
- (id)layoutStateForViewModel:(id)model options:(unsigned long long)options account:(id)account width:(double)width layoutMetrics:(id)metrics withPreviousLayoutState:(id)state;
- (id)_t1_updateLayoutStateForMediaFirstMediumQuoteTweetViewModel:(id)model layoutState:(id)state viewAdapterSet:(id)set options:(unsigned long long)options account:(id)account width:(double)width layoutMetrics:(id)metrics;
- (id)_t1_updateLayoutStateForDefaultQuoteTweetViewModel:(id)model layoutState:(id)state viewAdapterSet:(id)set options:(unsigned long long)options account:(id)account width:(double)width layoutMetrics:(id)metrics;

@end

#endif /* T1QuotedStandardStatusViewLayoutStateGenerator_h */
