//
#ifndef T1BlockOrReportMomentMode_h
#define T1BlockOrReportMomentMode_h
@import Foundation;

#include "T1BlockOrReportMode-Protocol.h"

@class NSObject, NSString;

@interface T1BlockOrReportMomentMode : NSObject <T1BlockOrReportMode>

@property (readonly, nonatomic) NSString *reportScribeElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setParams:(id)params inContext:(id)context;
- (void)actionDidCompleteInContext:(id)context;
- (id)userReferenceForID:(long long)id;
- (_Bool)shouldUseNativeReportingForContext:(id)context account:(id)account;

@end

#endif /* T1BlockOrReportMomentMode_h */
