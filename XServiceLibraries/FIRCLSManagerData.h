//
#ifndef FIRCLSManagerData_h
#define FIRCLSManagerData_h
@import Foundation;

#include "FIRAnalyticsInterop-Protocol.h"
#include "FIRCLSApplicationIdentifierModel.h"
#include "FIRCLSContextManager.h"
#include "FIRCLSDataCollectionArbiter.h"
#include "FIRCLSExecutionIdentifierModel.h"
#include "FIRCLSFileManager.h"
#include "FIRCLSInstallIdentifierModel.h"
#include "FIRCLSOnDemandModel.h"
#include "FIRCLSSettings.h"
#include "FIRInstallations.h"
#include "GDTCORTransport.h"

@class NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface FIRCLSManagerData : NSObject

@property (readonly, nonatomic) NSString *googleAppID;
@property (retain, nonatomic) GDTCORTransport *googleTransport;
@property (retain, nonatomic) FIRInstallations *installations;
@property (retain, nonatomic) id <FIRAnalyticsInterop> analytics;
@property (retain, nonatomic) FIRCLSFileManager *fileManager;
@property (retain, nonatomic) FIRCLSDataCollectionArbiter *dataArbiter;
@property (retain, nonatomic) FIRCLSApplicationIdentifierModel *appIDModel;
@property (retain, nonatomic) FIRCLSInstallIdentifierModel *installIDModel;
@property (retain, nonatomic) FIRCLSExecutionIdentifierModel *executionIDModel;
@property (readonly, nonatomic) FIRCLSOnDemandModel *onDemandModel;
@property (retain, nonatomic) FIRCLSSettings *settings;
@property (retain, nonatomic) FIRCLSContextManager *contextManager;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

/* instance methods */
- (id)initWithGoogleAppID:(id)id googleTransport:(id)transport installations:(id)installations analytics:(id)analytics fileManager:(id)manager dataArbiter:(id)arbiter settings:(id)settings onDemandModel:(id)model;

@end

#endif /* FIRCLSManagerData_h */
