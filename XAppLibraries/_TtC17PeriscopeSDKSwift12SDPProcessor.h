//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC17PeriscopeSDKSwift12SDPProcessor_h
#define _TtC17PeriscopeSDKSwift12SDPProcessor_h
@import Foundation;

@class NSDictionary, NSObject, _$sSDyS2SG, _$sSS, _$sSaySSG, _$sShySSG, _$sSo19NSRegularExpressionC;

@interface PeriscopeSDKSwift.SDPProcessor : NSObject { // (Swift)
    /* instance variables */
    [Swift.String] sdpLines;
    Swift.Set<Swift.String> bannedCodecs;
    __C.NSRegularExpression fmtpRegex;
    __C.NSRegularExpression payloadTypeAttributesRegex;
    Swift.String rtpmapPrefix;
    [Swift.String] profilePrefixes;
}

@property (nonatomic, copy) NSDictionary *audioCodecPayloadTypes;
@property (nonatomic, copy) NSDictionary *videoCodecPayloadTypes;

/* instance methods */
- (id)initWithSdpString:(id)string;
- (_Bool)modifyParameterWithCodec:(id)codec parameterName:(id)name value:(id)value codecPayloadTypes:(id)types;
- (_Bool)modifySdpDtxWithValue:(id)value;
- (_Bool)filterVideoToH264;
- (id)composeSdp;
- (id)init;

@end

#endif /* _TtC17PeriscopeSDKSwift12SDPProcessor_h */
