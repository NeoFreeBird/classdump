//
#ifndef _TtC12XPhotoEditor14EditCheckpoint_h
#define _TtC12XPhotoEditor14EditCheckpoint_h
@import Foundation;

@class XPhotoEditor.EditCheckpoint.Backing, XPhotoEditor.EditCheckpoint.CheckpointSource, XPhotoEditor.EditParameters, _$s10Foundation4DataVMn ?, _$sSo6NSLockC, _$sSo7UIImageCSg, _$sSo7UIImageCSgSg, _TtCs12_SwiftObject;

@interface XPhotoEditor.EditCheckpoint : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XPhotoEditor.EditCheckpoint.CheckpointSource source;
    XPhotoEditor.EditParameters parameters;
    XPhotoEditor.EditCheckpoint.Backing backing;
    __C.NSLock encodeLock;
    nominal type descriptor for Foundation.Data ? lazyEncodedData;
    __C.UIImage?? $__lazy_storage_$_rawBaseImage;
    __C.UIImage? previewBaseImage;
    __C.UIImage? previewImage;
}

@end

#endif /* _TtC12XPhotoEditor14EditCheckpoint_h */
