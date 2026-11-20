//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BlockOrReportSpacesMode_h
#define T1BlockOrReportSpacesMode_h
@import Foundation;

#include "T1BlockOrReportMode-Protocol.h"
#include "TASSpaceModel-Protocol.h"

@class NSObject, NSString;

@interface T1BlockOrReportSpacesMode : NSObject <T1BlockOrReportMode>

@property (readonly, nonatomic) id <TASSpaceModel> spaceModel;
@property (readonly, nonatomic) long long timecode;
@property (readonly, nonatomic) NSString *reportScribeElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSpaceModel:(id)model atTimecode:(double)timecode;
- (void)actionDidCompleteInContext:(id)context;
- (void)setParams:(id)params inContext:(id)context;
- (_Bool)shouldUseNativeReportingForContext:(id)context account:(id)account;
- (id)userReferenceForID:(long long)id;

@end

#endif /* T1BlockOrReportSpacesMode_h */
