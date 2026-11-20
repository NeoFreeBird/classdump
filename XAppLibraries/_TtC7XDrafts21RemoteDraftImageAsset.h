//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XDrafts21RemoteDraftImageAsset_h
#define _TtC7XDrafts21RemoteDraftImageAsset_h
@import Foundation;

#include "TTMAssetRemoteImage.h"

@class NSString, _$sSS;

@interface XDrafts.RemoteDraftImageAsset : TTMAssetRemoteImage { // (Swift)
    /* instance variables */
    Swift.String draftMediaId;
}

@property (nonatomic, readonly) NSString *mediaId;
@property (nonatomic, readonly) _Bool needsUpload;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithImageURL:(id)url dimensions:(struct CGSize { double x0; double x1; })dimensions;

@end

#endif /* _TtC7XDrafts21RemoteDraftImageAsset_h */
