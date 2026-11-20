//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XDrafts21RemoteDraftVideoAsset_h
#define _TtC7XDrafts21RemoteDraftVideoAsset_h
@import Foundation;

#include "TTMAssetRemoteVideo.h"

@class NSString, _$s10Foundation3URLVMn, _$s10Foundation3URLVMn ?, _$sSS;

@interface XDrafts.RemoteDraftVideoAsset : TTMAssetRemoteVideo { // (Swift)
    /* instance variables */
    Swift.String draftMediaId;
    nominal type descriptor for Foundation.URL videoURL;
    nominal type descriptor for Foundation.URL ? previewVideoURL;
    nominal type descriptor for Foundation.URL ? previewImageURL;
}

@property (nonatomic, readonly) NSString *mediaId;
@property (nonatomic, readonly) _Bool needsUpload;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithVideoURL:(id)url previewVideoURL:(id)url previewImageURL:(id)url dimensions:(struct CGSize { double x0; double x1; })dimensions;

@end

#endif /* _TtC7XDrafts21RemoteDraftVideoAsset_h */
