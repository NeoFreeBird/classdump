//
#ifndef TFSTwitterTrendsLocationListBuilder_h
#define TFSTwitterTrendsLocationListBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterTrendsLocationListBuilder : NSObject <TFSModel.TFSModelBuilder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;

@end

#endif /* TFSTwitterTrendsLocationListBuilder_h */
