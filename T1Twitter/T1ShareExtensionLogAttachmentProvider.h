//
#ifndef T1ShareExtensionLogAttachmentProvider_h
#define T1ShareExtensionLogAttachmentProvider_h
@import Foundation;

#include "TDTBugReportAttachmentProvider-Protocol.h"

@class NSObject, NSString, TFSFileManager;

@interface T1ShareExtensionLogAttachmentProvider : NSObject <TDTBugReportAttachmentProvider>

@property (retain, nonatomic) TFSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFileManager:(id)manager;
- (id)attachmentsWithContext:(id)context;
- (id)logText;
- (id)_logFilesFromDirectory:(id)directory;
- (id)_retrieveLoggedData:(id)data;

@end

#endif /* T1ShareExtensionLogAttachmentProvider_h */
