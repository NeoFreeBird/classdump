//
#ifndef FIRInstallationsErrorUtil_h
#define FIRInstallationsErrorUtil_h
@import Foundation;

@class NSObject;

@interface FIRInstallationsErrorUtil : NSObject

/* class methods */
+ (id)keyedArchiverErrorWithException:(id)exception;
+ (id)keyedArchiverErrorWithError:(id)error;
+ (id)keychainErrorWithFunction:(id)function status:(int)status;
+ (id)installationItemNotFoundForAppID:(id)id appName:(id)name;
+ (id)corruptedIIDTokenData;
+ (id)APIErrorWithHTTPResponse:(id)httpresponse data:(id)data;
+ (_Bool)isAPIError:(id)apierror withHTTPCode:(long long)httpcode;
+ (id)JSONSerializationError:(id)error;
+ (id)FIDRegistrationErrorWithResponseMissingField:(id)field;
+ (id)networkErrorWithError:(id)error;
+ (id)backoffIntervalWaitError;
+ (id)publicDomainErrorWithError:(id)error;
+ (id)installationsErrorWithCode:(long long)code failureReason:(id)reason underlyingError:(id)error;
+ (id)rejectedPromiseWithError:(id)error;

@end

#endif /* FIRInstallationsErrorUtil_h */
