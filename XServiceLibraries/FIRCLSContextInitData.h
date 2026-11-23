//
#ifndef FIRCLSContextInitData_h
#define FIRCLSContextInitData_h
@import Foundation;

@class NSObject, NSString;

@interface FIRCLSContextInitData : NSObject

@property (copy, nonatomic) NSString *customBundleId;
@property (copy, nonatomic) NSString *rootPath;
@property (copy, nonatomic) NSString *previouslyCrashedFileRootPath;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *appQualitySessionId;
@property (copy, nonatomic) NSString *betaToken;
@property (nonatomic) _Bool errorsEnabled;
@property (nonatomic) _Bool customExceptionsEnabled;
@property (nonatomic) unsigned int maxCustomExceptions;
@property (nonatomic) unsigned int maxErrorLogSize;
@property (nonatomic) unsigned int maxLogSize;
@property (nonatomic) unsigned int maxKeyValues;

/* instance methods */

@end

#endif /* FIRCLSContextInitData_h */
