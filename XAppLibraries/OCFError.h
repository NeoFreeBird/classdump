//
#ifndef OCFError_h
#define OCFError_h
@import Foundation;

@class NSError, NSObject, NSString;

@interface OCFError : NSObject

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *stringWithoutDebugText;
@property (readonly, nonatomic) _Bool retryable;
@property (readonly, nonatomic) NSError *connectionError;
@property (readonly, nonatomic) long long apiErrorCode;

/* instance methods */
- (id)initWithConnectionError:(id)error;
- (id)initRuntimeFlowErrorWithDescription:(id)description;
- (id)initWithConnectionError:(id)error string:(id)string description:(id)description apiErrorCode:(long long)code retryable:(_Bool)retryable;
- (_Bool)private_isInternetConnectivityError:(id)error;
- (_Bool)private_isRetryableForError:(id)error code:(long long)code;
- (id)private_apiErrorMessageForError:(id)error code:(long long)code;
- (id)initWithConnectionError:(id)error string:(id)string additionalDebugText:(id)text apiErrorCode:(long long)code retryable:(_Bool)retryable;
- (_Bool)isRetryable;

@end

#endif /* OCFError_h */
