//
#ifndef T1BlockOrReportListMode_h
#define T1BlockOrReportListMode_h
@import Foundation;

#include "T1BlockOrReportActionContextTargetList.h"
#include "T1BlockOrReportMode-Protocol.h"

@class NSObject, NSString;

@interface T1BlockOrReportListMode : NSObject <T1BlockOrReportMode>

@property (readonly, nonatomic) T1BlockOrReportActionContextTargetList *targetList;
@property (readonly, nonatomic) NSString *reportScribeElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTargetList:(id)list;
- (void)setParams:(id)params inContext:(id)context;
- (void)actionDidCompleteInContext:(id)context;
- (id)userReferenceForID:(long long)id;
- (_Bool)shouldUseNativeReportingForContext:(id)context account:(id)account;

@end

#endif /* T1BlockOrReportListMode_h */
