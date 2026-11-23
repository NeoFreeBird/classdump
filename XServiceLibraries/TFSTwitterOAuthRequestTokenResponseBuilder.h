//
#ifndef TFSTwitterOAuthRequestTokenResponseBuilder_h
#define TFSTwitterOAuthRequestTokenResponseBuilder_h
@import Foundation;

#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterOAuthRequestTokenResponseBuilder : NSObject <TFSModel.TFSModelBuilder>

@property (nonatomic) _Bool accountPermissionDataParsingEnabled;
@property (nonatomic) _Bool jsonResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountPermissionDataParsingEnabled:(_Bool)enabled jsonResponse:(_Bool)response;
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;

@end

#endif /* TFSTwitterOAuthRequestTokenResponseBuilder_h */
