//
#ifndef _TtC9XLiveChatP33_BC339FCE12DA2EFF5D166B0D8412CA9629LiveChatStreamRequestDelegate_h
#define _TtC9XLiveChatP33_BC339FCE12DA2EFF5D166B0D8412CA9629LiveChatStreamRequestDelegate_h
@import Foundation;

#include "TFSAPIRequestDelegate-Protocol.h"

@class NSObject;

@interface XLiveChat.(LiveChatStreamRequestDelegate in _BC339FCE12DA2EFF5D166B0D8412CA96) : NSObject <TFSAPIRequestDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 continuation;
    @40@0:8:16@24@32 bufferQueue;
    @40@0:8:16@24@32 buffer;
}

/* instance methods */
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didReceiveURLResponse:(id)urlresponse;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didReceiveData:(id)data;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didCompleteWithResponse:(id)response;
- (id)init;

@end

#endif /* _TtC9XLiveChatP33_BC339FCE12DA2EFF5D166B0D8412CA9629LiveChatStreamRequestDelegate_h */
