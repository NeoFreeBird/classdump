//
#ifndef FIRCLSContextManager_h
#define FIRCLSContextManager_h
@import Foundation;

#include "FIRCLSFileManager.h"
#include "FIRCLSInternalReport.h"
#include "FIRCLSSettings.h"

@class NSObject, NSString;

@interface FIRCLSContextManager : NSObject

@property (nonatomic) _Bool hasInitializedContext;
@property (retain, nonatomic) FIRCLSInternalReport *report;
@property (retain, nonatomic) FIRCLSSettings *settings;
@property (retain, nonatomic) FIRCLSFileManager *fileManager;
@property (copy, nonatomic) NSString *appQualitySessionId;

/* instance methods */
- (id)init;
- (id)setupContextWithReport:(id)report settings:(id)settings fileManager:(id)manager;
- (id)buildInitData;

@end

#endif /* FIRCLSContextManager_h */
