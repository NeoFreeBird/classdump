//
#ifndef FIRCLSReportUploader_h
#define FIRCLSReportUploader_h
@import Foundation;

#include "FIRAnalyticsInterop-Protocol.h"
#include "FIRCLSFileManager.h"
#include "FIRCLSInstallIdentifierModel.h"
#include "GDTCORTransport.h"

@class NSObject, NSOperationQueue, NSString;

@interface FIRCLSReportUploader : NSObject {
    /* instance variables */
    id <FIRAnalyticsInterop> _analytics;
}

@property (retain, nonatomic) GDTCORTransport *googleTransport;
@property (retain, nonatomic) FIRCLSInstallIdentifierModel *installIDModel;
@property (readonly, nonatomic) NSString *googleAppID;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) FIRCLSFileManager *fileManager;
@property (copy, nonatomic) NSString *fiid;
@property (copy, nonatomic) NSString *authToken;

/* instance methods */
- (id)initWithManagerData:(id)data;
- (void)prepareAndSubmitReport:(id)report dataCollectionToken:(id)token asUrgent:(_Bool)urgent withProcessing:(_Bool)processing;
- (void)uploadPackagedReportAtPath:(id)path dataCollectionToken:(id)token asUrgent:(_Bool)urgent;
- (_Bool)cleanUpSubmittedReportAtPath:(id)path;

@end

#endif /* FIRCLSReportUploader_h */
