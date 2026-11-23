//
#ifndef _TtC17ChatNotifications42ChatNotificationAttachmentDownloadDelegate_h
#define _TtC17ChatNotifications42ChatNotificationAttachmentDownloadDelegate_h
@import Foundation;

#include "NSURLSessionDownloadDelegate-Protocol.h"

@class NSObject, Swift.Bool, _$s10Foundation3URLVMn, _$s19XCertificatePinning0B18URLSessionDelegateCMn, _$sScCySb _$ss5NeverOMn ?, _$sShySSG, _$ss5Int64VMn;

@interface ChatNotifications.ChatNotificationAttachmentDownloadDelegate : NSObject <NSURLSessionDownloadDelegate> { // (Swift)
    /* instance variables */
    Swift.Set<Swift.String> allowedRedirectHosts;
    Swift.CheckedContinuation empty-list Swift.Bool nominal type descriptor for Swift.Never ? continuation;
    nominal type descriptor for Foundation.URL fileURL;
    Swift.Bool isDownloaded;
    nominal type descriptor for Swift.Int64 maxBytes;
    nominal type descriptor for XCertificatePinning.PinningURLSessionDelegate pinningDelegate;
}

/* instance methods */
- (void)URLSession:(id)urlsession downloadTask:(id)task didWriteData:(long long)data totalBytesWritten:(long long)written totalBytesExpectedToWrite:(long long)write;
- (void)URLSession:(id)urlsession downloadTask:(id)task didFinishDownloadingToURL:(id)url;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* _TtC17ChatNotifications42ChatNotificationAttachmentDownloadDelegate_h */
