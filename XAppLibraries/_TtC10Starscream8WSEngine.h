//
#ifndef _TtC10Starscream8WSEngine_h
#define _TtC10Starscream8WSEngine_h
@import Foundation;

@class DispatchQueue, Starscream.CertificatePinning ?, Starscream.CompressionHandler ?, Starscream.EngineDelegate ?, Starscream.FrameCollector, Starscream.Framer, Starscream.HTTPHandler, Starscream.HeaderValidator, Starscream.Transport, Swift.Bool, _$s10Foundation10URLRequestVMn ?, _$sSS, _$sSo21OS_dispatch_semaphoreC, _TtCs12_SwiftObject;

@interface Starscream.WSEngine : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Starscream.Transport transport;
    Starscream.Framer framer;
    Starscream.HTTPHandler httpHandler;
    Starscream.CompressionHandler ? compressionHandler;
    Starscream.CertificatePinning ? certPinner;
    Starscream.HeaderValidator headerChecker;
    nominal type descriptor for Foundation.URLRequest ? request;
    Starscream.FrameCollector frameHandler;
    Swift.Bool didUpgrade;
    Swift.String secKeyValue;
    DispatchQueue writeQueue;
    __C.OS_dispatch_semaphore mutex;
    Swift.Bool canSend;
    Swift.Bool isConnecting;
    Starscream.EngineDelegate ? delegate;
    Swift.Bool respondToPingWithPong;
}

@end

#endif /* _TtC10Starscream8WSEngine_h */
