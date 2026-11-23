//
#ifndef _TtC16FaceLivenessCore16WebSocketSession_h
#define _TtC16FaceLivenessCore16WebSocketSession_h
@import Foundation;

@class FaceLivenessCore.WebSocketSession.Delegate, FaceLivenessCore.WebSocketSession.WebSocketMessageResult _$ss6ResultOMn _$sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMn _$ss5ErrorMp _$sGcSg ->, _$s10Foundation4DateVMn _$sSgcSg ->, _$sSo12NSURLSessionC, _$sSo16NSOperationQueueC, _$sSo25NSURLSessionWebSocketTaskCSg, _TtCs12_SwiftObject, __C.CloseCode _$scSg ->;

@interface FaceLivenessCore.WebSocketSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    FaceLivenessCore.WebSocketSession.Delegate urlSessionWebSocketDelegate;
    __C.NSURLSession session;
    __C.NSURLSessionWebSocketTask? task;
    FaceLivenessCore.WebSocketSession.WebSocketMessageResult nominal type descriptor for Swift.Result nominal type descriptor for (extension in Foundation):__C.NSURLSessionWebSocketTask.Message protocol descriptor for Swift.Error _$sGcSg -> receiveMessage;
    __C.CloseCode _$scSg -> onSocketClosed;
    nominal type descriptor for Foundation.Date _$sSgcSg -> onServerDateReceived;
    __C.NSOperationQueue delegateQueue;
}

@end

#endif /* _TtC16FaceLivenessCore16WebSocketSession_h */
