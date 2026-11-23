//
#ifndef GACAppCheckErrorUtil_h
#define GACAppCheckErrorUtil_h
@import Foundation;

@class NSObject;

@interface GACAppCheckErrorUtil : NSObject

/* class methods */
+ (id)publicDomainErrorWithError:(id)error;
+ (id)cachedTokenNotFound;
+ (id)cachedTokenExpired;
+ (id)keychainErrorWithError:(id)error;
+ (id)APIErrorWithHTTPResponse:(id)httpresponse data:(id)data;
+ (id)APIErrorWithNetworkError:(id)error;
+ (id)appCheckTokenResponseErrorWithMissingField:(id)field;
+ (id)appAttestAttestationResponseErrorWithMissingField:(id)field;
+ (id)JSONSerializationError:(id)error;
+ (id)unsupportedAttestationProvider:(id)provider;
+ (id)errorWithFailureReason:(id)reason;
+ (id)appAttestKeyIDNotFound;
+ (id)appAttestGenerateKeyFailedWithError:(id)error;
+ (id)appAttestAttestKeyFailedWithError:(id)error keyId:(id)id clientDataHash:(id)hash;
+ (id)appAttestGenerateAssertionFailedWithError:(id)error keyId:(id)id clientDataHash:(id)hash;
+ (id)unknownErrorWithError:(id)error;
+ (id)appCheckErrorWithCode:(long long)code failureReason:(id)reason underlyingError:(id)error;
+ (id)errorDescriptionWithDeviceCheckError:(id)error;

@end

#endif /* GACAppCheckErrorUtil_h */
