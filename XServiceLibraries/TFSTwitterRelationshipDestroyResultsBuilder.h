//
#ifndef TFSTwitterRelationshipDestroyResultsBuilder_h
#define TFSTwitterRelationshipDestroyResultsBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterRelationshipDestroyResultsBuilder : NSObject <TFSModel.TFSModelBuilder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;

@end

#endif /* TFSTwitterRelationshipDestroyResultsBuilder_h */
