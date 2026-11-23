//
#ifndef TFSTwitterLoginVerificationTemporaryPasswordBuilder_h
#define TFSTwitterLoginVerificationTemporaryPasswordBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterLoginVerificationTemporaryPasswordBuilder : NSObject <TFSModel.TFSModelBuilder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;

@end

#endif /* TFSTwitterLoginVerificationTemporaryPasswordBuilder_h */
