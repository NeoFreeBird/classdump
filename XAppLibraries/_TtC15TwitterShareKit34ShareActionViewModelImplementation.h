//
#ifndef _TtC15TwitterShareKit34ShareActionViewModelImplementation_h
#define _TtC15TwitterShareKit34ShareActionViewModelImplementation_h
@import Foundation;

#include "TSShareActionViewModel-Protocol.h"

@class NSObject, NSString, TwitterShareKit.ShareAction, TwitterShareKit.ShareActionViewModelDelegate ?, UIImage, _$sSSSg, _$sSiSg, _$sSo7UIImageCSgSg;

@interface TwitterShareKit.ShareActionViewModelImplementation : NSObject <TSShareActionViewModel> { // (Swift)
    /* instance variables */
    TwitterShareKit.ShareAction action;
    Swift.Int? presentationPosition;
    TwitterShareKit.ShareActionViewModelDelegate ? delegate;
    __C.UIImage?? $__lazy_storage_$_image;
}

@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *identifier;

/* instance methods */
- (void)performAction;
- (id)init;

@end

#endif /* _TtC15TwitterShareKit34ShareActionViewModelImplementation_h */
