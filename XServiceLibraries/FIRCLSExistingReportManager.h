//
#ifndef FIRCLSExistingReportManager_h
#define FIRCLSExistingReportManager_h
@import Foundation;

#include "FIRCLSDataCollectionArbiter.h"
#include "FIRCLSFileManager.h"
#include "FIRCLSInternalReport.h"
#include "FIRCLSOnDemandModel.h"
#include "FIRCLSReportUploader.h"
#include "FIRCLSSettings.h"
#include "FIRCrashlyticsReport.h"

@class NSArray, NSObject, NSOperationQueue;

@interface FIRCLSExistingReportManager : NSObject

@property (retain, nonatomic) FIRCLSFileManager *fileManager;
@property (retain, nonatomic) FIRCLSReportUploader *reportUploader;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) FIRCLSSettings *settings;
@property (retain, nonatomic) FIRCLSDataCollectionArbiter *dataArbiter;
@property (retain, nonatomic) FIRCLSOnDemandModel *onDemandModel;
@property (retain, nonatomic) NSArray *existingUnemptyActiveReportPaths;
@property (retain, nonatomic) NSArray *processingReportPaths;
@property (retain, nonatomic) NSArray *preparedReportPaths;
@property (retain, nonatomic) FIRCLSInternalReport *newestInternalReport;
@property (readonly, nonatomic) unsigned long long unsentReportsCount;
@property (readonly, nonatomic) FIRCrashlyticsReport *newestUnsentReport;

/* instance methods */
- (id)initWithManagerData:(id)data reportUploader:(id)uploader;
- (void)collectExistingReports;
- (id)getUnsentActiveReportsAndDeleteEmptyOrOld:(id)old;
- (void)sendUnsentReportsWithToken:(id)token asUrgent:(_Bool)urgent;
- (void)processExistingActiveReportPath:(id)path dataCollectionToken:(id)token asUrgent:(_Bool)urgent;
- (void)deleteUnsentReports;
- (void)handleOnDemandReportUpload:(id)upload dataCollectionToken:(id)token asUrgent:(_Bool)urgent;

@end

#endif /* FIRCLSExistingReportManager_h */
