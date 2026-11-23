//
#ifndef TDLCustomFormatRollingFileOutputStream_h
#define TDLCustomFormatRollingFileOutputStream_h
@import Foundation;

#include "TDTBugReportAttachmentProvider-Protocol.h"

@class NSSet, NSString, TLSRollingFileOutputStream;

@interface TDLCustomFormatRollingFileOutputStream : TLSRollingFileOutputStream <TDTBugReportAttachmentProvider> {
    /* instance variables */
    NSSet *_channels;
    id /* block */ _customFormatBlock;
}

@property (copy, nonatomic) NSString *attachmentFileExtension;
@property (copy, nonatomic) NSString *attachmentFileName;
@property (nonatomic) _Bool shouldOutputBugReportAttachment;
@property (nonatomic) _Bool shouldLogFileOutputEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLogFileDirectoryPath:(id)path logFilePrefix:(id)prefix maxLogFiles:(unsigned long long)files maxBytesPerLogFile:(unsigned long long)file channels:(id)channels customFormatBlock:(id /* block */)block error:(out id *)error;
- (long long)tls_shouldFilterLevel:(long long)level channel:(id)channel contextObject:(id)object;
- (void)tls_outputLogInfo:(id)info;
- (void)tls_fileOutputEventBegan:(long long)began info:(id)info;
- (void)tls_fileOutputEventFinished:(long long)finished info:(id)info;
- (void)tls_fileOutputEventFailed:(long long)failed info:(id)info error:(id)error;
- (id)attachmentFullFileName;
- (id)attachmentsWithContext:(id)context;

@end

#endif /* TDLCustomFormatRollingFileOutputStream_h */
