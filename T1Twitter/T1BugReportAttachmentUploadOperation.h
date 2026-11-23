//
#ifndef T1BugReportAttachmentUploadOperation_h
#define T1BugReportAttachmentUploadOperation_h
@import Foundation;

#include "T1BugReportAttachmentUploadOperationDelegate-Protocol.h"

@class TDTBugReportAttachment, TFSConcurrentOperation;

@interface T1BugReportAttachmentUploadOperation : TFSConcurrentOperation

@property (retain, nonatomic) TDTBugReportAttachment *attachment;
@property (weak, nonatomic) id <T1BugReportAttachmentUploadOperationDelegate> delegate;
@property (copy, nonatomic) id /* block */ uploaderBlock;

/* instance methods */
- (id)initWithAttachment:(id)attachment delegate:(id)delegate andUploaderBlock:(id /* block */)block;
- (id)initWithAttachment:(id)attachment andDelegate:(id)delegate;
- (void)uploadAttachmentWithCompletion:(id /* block */)completion;
- (void)run;

@end

#endif /* T1BugReportAttachmentUploadOperation_h */
