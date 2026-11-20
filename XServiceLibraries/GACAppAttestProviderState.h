//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppAttestProviderState_h
#define GACAppAttestProviderState_h
@import Foundation;

@class NSData, NSError, NSObject, NSString;

@interface GACAppAttestProviderState : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSError *appAttestUnsupportedError;
@property (readonly, nonatomic) NSString *appAttestKeyID;
@property (readonly, nonatomic) NSData *attestationArtifact;

/* instance methods */
- (id)initUnsupportedWithError:(id)error;
- (id)initWithSupportedInitialState;
- (id)initWithGeneratedKeyID:(id)id;
- (id)initWithRegisteredKeyID:(id)id artifact:(id)artifact;

@end

#endif /* GACAppAttestProviderState_h */
