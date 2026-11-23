//
#ifndef TFSTwitterTwoFactorAuthSettingsBuilder_h
#define TFSTwitterTwoFactorAuthSettingsBuilder_h
@import Foundation;

#include "TFSTwitterTwoFactorAuthMethodBuilder.h"
#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterTwoFactorAuthSettingsBuilder : NSObject <TFSModel.TFSModelBuilder> {
    /* instance variables */
    TFSTwitterTwoFactorAuthMethodBuilder *_methodBuilder;
}

@property (readonly, nonatomic) _Bool useNewEndpointFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithShouldUseNewEndpointFormat:(_Bool)format;
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;
- (id)_tfs_twoFactorAuthSettingsFromJSONDict:(id)jsondict;
- (_Bool)shouldUseNewEndpointFormat;

@end

#endif /* TFSTwitterTwoFactorAuthSettingsBuilder_h */
