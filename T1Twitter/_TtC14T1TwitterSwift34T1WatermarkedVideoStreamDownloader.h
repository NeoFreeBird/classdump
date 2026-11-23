//
#ifndef _TtC14T1TwitterSwift34T1WatermarkedVideoStreamDownloader_h
#define _TtC14T1TwitterSwift34T1WatermarkedVideoStreamDownloader_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"

@class DispatchQueue, NSObject, _$s10Foundation3URLVMn ?, _$s7Combine18PassthroughSubjectCMn T1TwitterSwift.T1WatermarkedVideoDownloadEvent _$ss5NeverOMn, _$sSSSg, _$sScC -> _$s10Foundation3URLVMn _$ss5ErrorMp ?, _$sSo12NSFileHandleCSg, _$sSo12NSURLSessionCSg, _$sSo20NSURLSessionDataTaskCSg, _$ss5Int64VMn, _$ss5Int64VMn ?;

@interface T1TwitterSwift.T1WatermarkedVideoStreamDownloader : NSObject <NSURLSessionDataDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.PassthroughSubject T1TwitterSwift.T1WatermarkedVideoDownloadEvent nominal type descriptor for Swift.Never _progressSubject;
    DispatchQueue _stateQueue;
    __C.NSURLSession? _urlSessionHolder;
    __C.NSURLSessionDataTask? _dataTask;
    __C.NSFileHandle? _fileHandle;
    nominal type descriptor for Foundation.URL ? _outputFileURL;
    nominal type descriptor for Swift.Int64 _bytesWritten;
    nominal type descriptor for Swift.Int64 ? _totalBytesExpected;
    Swift.CheckedContinuation -> nominal type descriptor for Foundation.URL protocol descriptor for Swift.Error ? _continuation;
    Swift.String? _authorHandle;
}

/* instance methods */
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift34T1WatermarkedVideoStreamDownloader_h */
