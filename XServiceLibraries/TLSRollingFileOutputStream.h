//
#ifndef TLSRollingFileOutputStream_h
#define TLSRollingFileOutputStream_h
@import Foundation;

#include "TLSDataRetrieval-Protocol.h"
#include "TLSFileOutputStream.h"
#include "TLSFileOutputStreamEvent-Protocol.h"

@class NSString;

@interface TLSRollingFileOutputStream : TLSFileOutputStream <TLSDataRetrieval, TLSFileOutputStreamEvent> {
    /* instance variables */
    _Bool _hasRunPrune;
}

@property (readonly, nonatomic) unsigned long long maxBytesPerLogFile;
@property (readonly, nonatomic) unsigned long long maxLogFiles;
@property (readonly, copy, nonatomic) NSString *logFilePrefix;
@property (readonly, nonatomic) unsigned long long tls_loggedDataEncoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOutError:(id *)error;
- (id)initAndReturnError:(id *)error;
- (id)initWithLogFileDirectoryPath:(id)path;
- (id)initWithLogFileDirectoryPath:(id)path error:(out id *)error;
- (id)initWithLogFileDirectoryPath:(id)path logFilePrefix:(id)prefix maxLogFiles:(unsigned long long)files maxBytesPerLogFile:(unsigned long long)file;
- (id)initWithLogFileDirectoryPath:(id)path logFilePrefix:(id)prefix maxLogFiles:(unsigned long long)files maxBytesPerLogFile:(unsigned long long)file error:(out id *)error;
- (void)outputLogData:(id)data;
- (id)tls_retrieveLoggedData:(unsigned long long)data;
- (void)tls_fileOutputEventBegan:(long long)began info:(id)info;
- (void)tls_fileOutputEventFinished:(long long)finished info:(id)info;
- (void)tls_fileOutputEventFailed:(long long)failed info:(id)info error:(id)error;

@end

#endif /* TLSRollingFileOutputStream_h */
