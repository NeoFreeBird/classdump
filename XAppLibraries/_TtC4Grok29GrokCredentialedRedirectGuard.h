//
#ifndef _TtC4Grok29GrokCredentialedRedirectGuard_h
#define _TtC4Grok29GrokCredentialedRedirectGuard_h
@import Foundation;

#include "NSURLSessionTaskDelegate-Protocol.h"

@class NSHTTPURLResponse, NSObject, NSURLRequest, NSURLSession, NSURLSessionTask, Swift.Bool _$s10Foundation3URLVMn _$sYbc;

@interface Grok.GrokCredentialedRedirectGuard : NSObject <NSURLSessionTaskDelegate> { // (Swift)
    /* instance variables */
    Swift.Bool nominal type descriptor for Foundation.URL _$sYbc authorizes;
}

/* instance methods */
- (void)URLSession:(NSURLSession *)urlsession task:(NSURLSessionTask *)task willPerformHTTPRedirection:(NSHTTPURLResponse *)httpredirection newRequest:(NSURLRequest *)request completionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* _TtC4Grok29GrokCredentialedRedirectGuard_h */
