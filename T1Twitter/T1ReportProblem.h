//
#ifndef T1ReportProblem_h
#define T1ReportProblem_h
@import Foundation;

#include "TDTBugReporterDelegate-Protocol.h"
#include "TFNApplicationBackgroundTaskHandle-Protocol.h"

@class NSError, NSMutableArray, NSObject, NSString, TFNTwitterAccount;
@protocol OS_dispatch_queue;

@interface T1ReportProblem : NSObject <TDTBugReporterDelegate> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_gatherQueue;
    NSString *_zipFilePath;
    NSError *_zipFileError;
    NSMutableArray *_gatheringCompletionBlocks;
    NSMutableArray *_uploadCompletionBlocks;
    id <TFNApplicationBackgroundTaskHandle> _gatheringTaskHandle;
    id <TFNApplicationBackgroundTaskHandle> _uploadTaskHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool logsGathered;
@property (readonly, nonatomic) unsigned long long uploadSize;
@property (readonly, nonatomic) TFNTwitterAccount *account;

/* class methods */
+ (void)uploadLogsWithData:(id)data filePath:(id)path contentType:(id)type completion:(id /* block */)completion;

/* instance methods */
- (id)contextForBugReporter:(id)reporter;
- (void)bugReporter:(id)reporter didTriggerBugReport:(id)report;
- (void)bugReporter:(id)reporter sendBugReport:(id)report didCompleteWithResult:(long long)result;
- (id)init;
- (id)initWithAccount:(id)account;
- (void)dealloc;
- (void)_background_didFinishGatheringReport:(id)report;
- (void)_background_didFinishGatheringLogsIntoZipFile;
- (void)_cleanup;

@end

#endif /* T1ReportProblem_h */
