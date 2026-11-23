//
#ifndef _TtC10Starscream10Compressor_h
#define _TtC10Starscream10Compressor_h
@import Foundation;

@class Swift.Bool, _$sSa -> _$ss5UInt8VMn, _$sSi, _TtCs12_SwiftObject, __C.z_stream_s;

@interface Starscream.Compressor : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.z_stream_s strm;
    Swift.Array -> nominal type descriptor for Swift.UInt8 buffer;
    Swift.Bool deflateInitialized;
    Swift.Int windowBits;
}

@end

#endif /* _TtC10Starscream10Compressor_h */
