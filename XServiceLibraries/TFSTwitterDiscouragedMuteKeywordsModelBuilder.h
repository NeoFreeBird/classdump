//
#ifndef TFSTwitterDiscouragedMuteKeywordsModelBuilder_h
#define TFSTwitterDiscouragedMuteKeywordsModelBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterDiscouragedMuteKeywordsModelBuilder : NSObject <TFSModel.TFSModelBuilder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)private_languageSectionForLanguageCode:(id)code;
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;

@end

#endif /* TFSTwitterDiscouragedMuteKeywordsModelBuilder_h */
