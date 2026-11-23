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
