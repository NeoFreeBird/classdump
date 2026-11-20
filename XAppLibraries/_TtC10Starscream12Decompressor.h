//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10Starscream12Decompressor_h
#define _TtC10Starscream12Decompressor_h
@import Foundation;

@class Swift.Bool, _$sSa -> _$ss5UInt8VMn, _$sSi, _TtCs12_SwiftObject, __C.z_stream_s;

@interface Starscream.Decompressor : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.z_stream_s strm;
    Swift.Array -> nominal type descriptor for Swift.UInt8 buffer;
    Swift.Bool inflateInitialized;
    Swift.Int windowBits;
}

@end

#endif /* _TtC10Starscream12Decompressor_h */
