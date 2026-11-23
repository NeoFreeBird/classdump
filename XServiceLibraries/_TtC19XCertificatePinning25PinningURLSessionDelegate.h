//
#ifndef _TtC19XCertificatePinning25PinningURLSessionDelegate_h
#define _TtC19XCertificatePinning25PinningURLSessionDelegate_h
@import Foundation;

#include "NSURLSessionDelegate-Protocol.h"
#include "NSURLSessionTaskDelegate-Protocol.h"

@class NSObject, XCertificatePinning.CertificatePinEvaluator;

@interface XCertificatePinning.PinningURLSessionDelegate : NSObject <NSURLSessionTaskDelegate, NSURLSessionDelegate> { // (Swift)
    /* instance variables */
    XCertificatePinning.CertificatePinEvaluator evaluator;
}

/* instance methods */
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* _TtC19XCertificatePinning25PinningURLSessionDelegate_h */
