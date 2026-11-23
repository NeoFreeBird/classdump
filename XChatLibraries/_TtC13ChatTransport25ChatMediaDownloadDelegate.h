//
#ifndef _TtC13ChatTransport25ChatMediaDownloadDelegate_h
#define _TtC13ChatTransport25ChatMediaDownloadDelegate_h
@import Foundation;

#include "TFSAPIRequestDelegate-Protocol.h"

@class NSObject, _$s10Foundation4DataVMn, _$ss5Int64VMn ?, _$sySfYbc;

@interface ChatTransport.ChatMediaDownloadDelegate : NSObject <TFSAPIRequestDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.Data receivedData;
    nominal type descriptor for Swift.Int64 ? expectedByteCount;
    @Sendable (Swift.Float) -> () progress;
}

/* instance methods */
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didCompleteWithResponse:(id)response;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didReceiveURLResponse:(id)urlresponse;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didReceiveData:(id)data;
- (id)init;

@end

#endif /* _TtC13ChatTransport25ChatMediaDownloadDelegate_h */
