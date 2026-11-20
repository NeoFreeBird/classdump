//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10Starscream19FoundationTransport_h
#define _TtC10Starscream19FoundationTransport_h
@import Foundation;

#include "NSStreamDelegate-Protocol.h"

@class DispatchQueue, NSObject, Starscream.CertificatePinning ?, Starscream.TransportEventClient ?, Swift.Bool, _$sSo13NSInputStreamCSg, _$sSo14NSOutputStreamCSg, _$sySo13NSInputStreamC_So08NSOutputB0CtcSg;

@interface Starscream.FoundationTransport : NSObject <NSStreamDelegate> { // (Swift)
    /* instance variables */
    Starscream.TransportEventClient ? delegate;
    DispatchQueue workQueue;
    __C.NSInputStream? inputStream;
    __C.NSOutputStream? outputStream;
    Swift.Bool isOpen;
    ((__C.NSInputStream, __C.NSOutputStream) -> ())? onConnect;
    Swift.Bool isTLS;
    Starscream.CertificatePinning ? certPinner;
}

/* instance methods */
- (void)dealloc;
- (void)stream:(id)stream handleEvent:(unsigned long long)event;
- (id)init;

@end

#endif /* _TtC10Starscream19FoundationTransport_h */
